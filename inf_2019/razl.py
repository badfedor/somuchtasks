a = int(input())
arr = []

while int(a) > 0:
	arr.append(a%10)
	a = int(a/10)

arr.reverse()
print(arr)

	
