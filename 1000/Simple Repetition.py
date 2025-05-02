#1016 (Div. 3), problem: (C) Simple Repetition, 
#Link = https://codeforces.com/contest/2093/problem/C
import math
tt = int(input())

def prime(n):
    if n == 2 or n == 3:
        return True
    elif n % 2 == 0 or n == 1:
        return False
    else:
        for i in range (2 , int(math.sqrt(n)) + 1):
            if n % i == 0:
                return False
    return True        
for _ in range(0 , tt):
    x , k = map(int , input().split())
    if x == 1 and k == 2:
        print("YES" , end = "\n")
    elif k > 1:
        print("NO" , end ="\n")
    else:
        if(prime(x)):
            print("YES" , end = "\n")

        else:
            print("NO")
