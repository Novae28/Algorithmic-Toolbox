import sys
def gcd(n,m):
	if(n>m):
		temp=n
		n=m
		m=temp
	if(n==0):
		return m
	elif(n==1):
		return 1
	else:
		return gcd(n,m%n)

if __name__=="__main__":
    input=sys.stdin.read()
    a,b = map(int,input.split())
    print(gcd(a,b))
