import urllib.request, re

h = input()
x = int(h)

req = urllib.request.Request(
    "https://bash.im", 
    data=None, 
    headers={
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/70.0.3538.110 Safari/537.36'
    }
)

f = urllib.request.urlopen(req)
s = f.read().decode('windows-1251')

arr = re.findall(r'<div class="text">(.+)</div>',s)
lst = ' '
dd = '\n ____________________ \n'
for i in range(0, x):
    if (x-1)==i:
        dd = ' '
    else:
        dd = '\n ____________________ \n'
    lst = lst + str(arr[i]) + dd

uni =  ( ( (str ( lst ) ) .replace("', '", "\n ____________________ \n") ).replace('<br>', '\n') .replace('&quot;', '"') .replace('&gt', '>') .replace('&lt', '<') .replace("&#039", "'") .replace("['", " ") .replace("']", " ") )

print(uni)