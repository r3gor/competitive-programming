ans = input()
while(1):
    try:
        s = input()
    except EOFError:
        break
    if (s.lower()>ans.lower()): ans = s
print(ans)