def fib(n):
    if n==0:
        return n
    new=0
    curr=1
    for x in range(2,n+1):
        temp=new
        new=curr
        curr+=temp
    return curr

n=int(input())
print(fib(n))
