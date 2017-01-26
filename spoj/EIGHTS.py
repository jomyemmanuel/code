# for x in xrange(10000):
# 	if str(x**3).endswith("888"):
# 		print x
startOdd = 192
startEven = 442
for i in xrange(int(raw_input())):
	n = int(raw_input())
	if n%2 != 0:
		print (startOdd+(n/2*500))
	else:
		print (startEven+((n-1)/2*500))