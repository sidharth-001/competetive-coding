# cook your dish here

T = int(input())

for _ in range(T):
    a,b,c,d = map(int,input().split())
    if (a == b and c == d) or (a == c and b == d) or (a == d and b == c):
        print("YES")
    else:
        print("NO")

