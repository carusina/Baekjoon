import sys
sys.setrecursionlimit(10**6)

def print_star(len):
    if len == 1:
        return ['*']

    unit = print_star(len//3) 
    T = []  
    
    for i in unit:
        T.append(i*3)
    for i in unit:
        T.append(i+' '*(len//3)+i)
    for i in unit:
        T.append(i*3)
    return T

n = int(sys.stdin.readline())
print('\n'.join(print_star(n)))