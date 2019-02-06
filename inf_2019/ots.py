'''w = list(str(input()))
c = str(input())
s = 0

for x in range(0, len(w)):
	if w[x] == c:
		s+=1

print(s)'''
		
w = int(input())

while w>0:
	if w%10==(w//10)%10:
		print('YES')
		exit()
	w=w//10
print('NO')
