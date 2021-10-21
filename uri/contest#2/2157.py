n = int(input())
while(n):
    n-=1
    ran = input().split()
    # print(ran)
    s = ""
    for i in range(int(ran[0]), int(ran[1])+1):
        s += str(i)
    print(s+s[-1:-len(s)-1:-1])