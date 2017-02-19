#include <iostream>
#include <stack>

using namespace std;

int main(){
	long int i,j,k,next;
	stack <long int> st;
	cin >> j;
	while(j != 0){
		next = 1;
		for(i = 0; i < j; i++){
			cin >> k;
			if(k != next){
				while(!st.empty() && st.top() == next){
					next++;
					st.pop();
				}
				if(k == next) next++;
				else st.push(k);
			} else {
				next++;
			}
		}
		while(!st.empty() && st.top() == next){
			next++;
			st.pop();
		}
		if(next != (j+1)) cout << "no" << endl;
		else cout << "yes" << endl;
		cin >> j;
	}
	return 0;
}