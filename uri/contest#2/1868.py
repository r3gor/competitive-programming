def gen_border_pos(n):
    p_1,p_2,p_3,p_4,p_5 = 0,0,0,0,0

    # nxn -> initial = (n-2, n-2+1)
    # first
    p_1 = (n-2, n-1)
    yield(p_1)

    # (B,=)
    for i in range(p_1[0]-1, -1, -1):
        p_2 = (i,p_1[1]) 
        yield(p_2)

    # (=,B)
    for i in range(p_2[1]-1, -1, -1):
        p_3 = (p_2[0],i) 
        yield(p_3)

    # (S,=)
    for i in range(p_3[0]+1, n, 1):
        p_4 = (i,p_3[1]) 
        yield(p_4)

    # (=,S)
    for i in range(p_4[1]+1, n, 1):
        p_5 = (p_4[0],i) 
        yield(p_5)

def print_scene(n, pos):
    for i in range(n):
        for j in range(n):
            if (i,j)==pos: print(f"X",end="")
            else: print(f"O",end="")
        print()

def solution(n):
    print_scene(n, (n//2, n//2))
    print("@")
    for i in range(3, n+1, 2):
        for pos in gen_border_pos(i):
            mov = (n-i)/2
            pos_mov = (pos[0]+mov, pos[1]+mov)
            print_scene(n, pos_mov)
            print("@")

n = int(input())
while(n):
    solution(n)
    n = int(input())