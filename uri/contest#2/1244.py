n = int(input())
while(n):
    k = input().split(" ")
    k.sort(key=lambda x: len(x), reverse=True)
    print(" ".join(k))    
    n-=1