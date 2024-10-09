s=input()
s2="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"

for c in s:
	c=c.lower()
	
	if c==' ' or c=='\n':
		print(c,end='')
	else:
		i=s2.find(c)
		print(s2[i-2],end='')
print()