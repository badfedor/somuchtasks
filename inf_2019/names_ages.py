names = ['Антон', 'Борис', 'Виктор']
age = []
for x in names:
    age.append(int(input()))

for x in range(len(age)-1,0,-1):
    for i in range(x):
        if age[i]>age[i+1]:
            temp_age = age[i]
            temp_name = names[i]
            age[i] = age[i+1]
            names[i] = names[i+1]
            age[i+1] = temp_age
            names[i+1] = temp_name

uniq_names = [0]

for x in range(0, len(age)):
	if age[x] not in age:
		
	else:
		uniq_names.append(names[x])

for x in range(0, len(age)):
    print(names[x], ' ', age[x])

if len(uniq_names) == 1:
	print(names[-1], 'старше всех')

elif len(uniq_names) > 1:
	print(uniq_names, 'старше')

