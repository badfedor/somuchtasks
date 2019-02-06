m = int(input())

if m>0 and m<3 or m==12:
	print('Winter')
elif m>2 and m<6:
	print('Spring')
elif m>5 and m<9:
	print('Summer')
elif m>8 and m<12:
	print('Autumn')
else:
	print('Input error: there is no month with number', m)

