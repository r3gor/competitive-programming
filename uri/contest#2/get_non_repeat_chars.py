from functools import reduce
n = int(input())
while(n):
    # s = list(input())
    s = "psjtbdkqbrctgl,oywqqdatjc  ,ptfok"
    print(s)
    print(reduce(lambda ans, curr: ans+[curr] if curr not in ans else ans, s, []))
    
    n-=1