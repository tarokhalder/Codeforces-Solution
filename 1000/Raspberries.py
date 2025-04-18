#https://codeforces.com/contest/1883/problem/C
tt = int(input())
for _ in range(0 , tt):
    n , k = map(int , input().split())
    a = list(map(int , input().split()))
    mod = 7
    for i in range(0 , n):
        if a[i] % k == 0:
             mod = 0
             break
        else:     
            mod = min(mod , (k - (a[i] % k)))
    if k != 4:
       print(mod , end="\n")
    else :
        if n == 1:
            print(mod , end = "\n")
        else:
            even = n
            for i in range(0 , n):
                if a[i] % 2 == 1:
                    even -= 1
            if even >= 2:
                print(0 , end = "\n")
            elif even == 1:
                print(min(mod , 1 ) , end="\n")
            else:
                print(min(mod , 2) , end="\n")
