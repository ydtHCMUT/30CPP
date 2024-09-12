s = "123321"
s_temp =""
for x in range(len(s)-1, -1, -1):
	# print(x)
	s_temp+=s[x];

# print(s," " ,s_temp)

if (s==s_temp):
	print(True)

