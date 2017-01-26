for _ in xrange(int(raw_input())):
	no = int(raw_input())
	fact = 1
	while no >= 1:
		fact = fact*no
		no -= 1
	print fact