import sys
PISANO=60
def fib(number):
    if number<2:
        return number
    number%=PISANO
    result=[1,1]
    for _ in range(number):
        result.append((result[-1]+result[-2])%10)
    return (result[-1]-1)%10

if __name__ == '__main__':
    input = sys.stdin.read()
    n = int(input)
    print(fib(n))
