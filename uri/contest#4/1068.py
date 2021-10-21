from functools import reduce

while(1):
    try: s = input()
    except EOFError: break
    print("correct") if reduce(lambda ans, c: -len(s) if ans<0 else (ans+1 if c=="(" else (ans-1 if c==")" else ans)), s, 0) == 0 else print("incorrect")

    # c = 0
    # for i in s:
    #     if (i=="("): c+=1
    #     if (i==")"): c-=1
    #     if (c < 0): 
    #         print("incorrect")
    #         break
    # if (c==0):
    #     print("correct")
    # else:
    #     print("incorrect")