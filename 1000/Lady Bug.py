#Problem Link : https://codeforces.com/contest/2092/problem/B
tt = int(input());
for _ in range (tt):
    n = int(input())
    a = str(input())
    b = str(input())
    a_odd , a_even = 0 , 0
    for i in range (0 , len(a)):
        if a[i] == '1':
            if i % 2 == 0:
                a_even = a_even + 1;
            else:
                a_odd = a_odd + 1;
    b_odd , b_even = 0 , 0
    for i in range (0 , len(b)):
        if b[i] == '0':
            if i % 2 == 0:
                b_even = b_even + 1;
            else:
                b_odd = b_odd + 1;

    if b_even >= a_odd and b_odd >= a_even:
        print("YES" , end ="\n")
    else:
       print("NO" , end = "\n")


 
