f = open("a0.txt", "r")
n = int(f.readline())
a = []
final_str = ''

n=1000

for x in range(1, n+1):
    a.append(x)

x = 0

while x<=n-1:
    if x<n-1:
        final_str += str(a[x+1]) + ' ' + str(a[x]) + ' '
    x+=2

final_str[:-1]

w = open("a_a.txt", "w")
w.write(final_str)

'''
f = open("a0.txt", "r")
n = int(f.readline())
a = []

n=1000

for x in range(1, n+1):
    a.append(str(x))

a.append(a[0])
del a[0]
'''

