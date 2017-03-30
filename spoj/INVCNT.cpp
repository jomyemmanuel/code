#include <iostream>

using namespace std;

typedef long long int lli;

lli cnt;

void merge(lli a[], lli p, lli q, lli r){
	lli i = p, j = q+1, k = 0;
	lli b[200007];
	while(i <= q && j <= r){
		if(a[i] > a[j])
			b[k++] = a[j++];
		else{
			cnt += k-i+p;
			b[k++] = a[i++];
		} 
	}
	while(i <= q){
		cnt += k-i+p;
		b[k++] = a[i++];
	}
	while(j <= r){
		b[k++] = a[j++];
	}	
	for(i = r; i >= p; i--)
		a[i] = b[--k];
}

void mergeSort(lli a[], lli p, lli r){
	if(p < r){
		lli q = (p+r)/2;
		mergeSort(a,p,q);
		mergeSort(a,q+1,r);
		merge(a,p,q,r);
	}
}

int main(){
	lli i,t,n,a[200007];
	cin >> t;
	while(t--){
		cin >> n;
		cnt = 0;
		for(i = 0; i < n; i++)
			cin >> a[i];
		mergeSort(a,0,n-1);
		cout << cnt << endl;
	}
	return 0;
}