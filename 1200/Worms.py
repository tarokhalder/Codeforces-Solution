#https://codeforces.com/problemset/problem/474/B
n = int(input())
a = list(map(int , input().split()))
m = int(input())
b = list(map(int , input().split()))

def find(x):
    s = 0  
    e = n - 1
    ans = -1
    while s <= e:
        mid = (s + e) / 2
        mid = int(mid)
        if a[mid] >= x:
            ans = mid + 1
            e = mid - 1
        else:
            s = mid + 1
    return ans        

for i in range(1 , n):
    a[i] = a[i] + a[i - 1]
for i in range(0 , m):
    print(find(b[i]))
