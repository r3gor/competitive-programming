import math

n = int(input())
ans = 0
for i in range(1,n+1):
    ans += round(math.sqrt(i))
    ans = ans % (pow(10,9)+7)
print(ans)