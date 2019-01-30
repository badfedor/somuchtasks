a = float(input('a: '))
b = float(input('b: '))
c = float(input('c: '))

if a+b>c and b+c>a and a+c>b:
	print('YES')
	if a==b and a==c and b==c:
		print('equilateral')
	elif a==b or a==c or b==c:
		print('isosceles')
	else:
		print('usual')
else:
	print('NO')
