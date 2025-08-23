#https://codeforces.com/contest/612/problem/B
d = {}
n = int(input())
a = list(map(int , input().split()))
for i in range(0 , len(a)):
    d.update({a[i] : i})
cnt = 0

for i in range(1 , n):
    cnt = cnt + abs(int(d[i]) - int(d[i + 1]))
print(cnt)    
  
