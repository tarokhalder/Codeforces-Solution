#Link = https://codeforces.com/contest/371/problem/A
n , k = map(int , input().split())
a = list(map(int , input().split()))

cnt_one = a.count(1);
ans = min(cnt_one , n - cnt_one);
change = 0
for i in range(0 , k):
    one = 0;
    for j in range(i , n , k):
        if a[j] == 1:
            one += 1
    change += min(one , (n / k) - one)
print(int(min(ans , change)))
