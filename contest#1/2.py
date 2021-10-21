s=input("")
ans=[ord(j) for j in s]
for i in range(min(len(s),4)):
    print(s[i],"ASCII value is",ans[i])