names = ['Федос', 'Мыш', 'Ижанитов', 'Влад', 'Игорь', 'Ванесса', ]   # use this array for names 
age = []

for x in range(0, len(names)):
    print(names[x])
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
    
uniq_state = False

for x in range(0, len(age)):
    if x<len(age)-1 and age[x] == age[x+1]:
        uniq_state = True

if uniq_state == True:
    final_names = ''

    names.reverse()
    age.reverse()

    if(len(set(age))==1):
        for x in range(0, len(age)):
            final_names += str(names[x] + ', ')
        final_names = final_names[:-2]
        final_names += ' одинаковы по возрасту.'
    else:
        for x in range(0, len(age)):
            if x<len(age)-1:
                if age[x] > age[x+1]:
                    final_names += str(names[x] + ' старше чем ' + names[x+1] + ', ')
                if age[x] == age[x+1]:
                    final_names += str(names[x+1] + ', ')
        final_names = final_names[:-2]

    print(final_names)
elif uniq_state == False:
    print(names[-1], 'старше всех')

