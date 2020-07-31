PISANO = 60


def solution(left, right):
    assert not left > right

    fib_mods = [0, 1]
    for _ in range(PISANO - 2):
        fib_mods.append((fib_mods[-1] + fib_mods[-2]) % 10)

    left %= PISANO
    right %= PISANO
    if right < left:
        right += PISANO

    result = 0
    for i in range(left, right + 1):
        result += fib_mods[i % PISANO]
    return result % 10


if __name__ == '__main__':
    lhs, rhs = map(int, input().split())
    print(solution(lhs, rhs))