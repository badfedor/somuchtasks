import re

circle = list(input(str()))
word = input(str())

okstat = False

circle_orig = circle

if len(circle) < 1 or len(circle) > 100:
    exit()

x = 1

word_regexp = re.compile(word)

while x < len(circle)+1:
    circle.append(circle[0])
    del circle[0]
    circle_str = ''.join(circle)
    
    if word_regexp.findall(circle_str):
        print('YES')
        okstat = True
        break

    x+=1

circle_str = ''.join(circle_orig)
circle_str = circle_str[::-1]
circle = list(circle_str)

x = 1

while x < len(circle)+1 and okstat==False:
    circle.append(circle[0])
    del circle[0]
    circle_str = ''.join(circle)
    if word_regexp.findall(circle_str):
        print('YES')
        okstat = True
        break
    x+=1

circle_str = ''.join(circle_orig)
circle = list(circle_str)

s = 0
if okstat == False:
    circle_str = circle_str*len(list(word))
    if word_regexp.findall(circle_str):
        print('YES')
        okstat = True
    s+=1

if okstat == False:
    print('NO')
