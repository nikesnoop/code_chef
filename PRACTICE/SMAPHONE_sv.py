n = int(input())
a= []
b= []
for i in range(n):
    x = int(input())
    a.append(x)
a.sort()
for i in range(n):
    x = a[i] * (n-i)
    b.append(x)
print(max(b))
