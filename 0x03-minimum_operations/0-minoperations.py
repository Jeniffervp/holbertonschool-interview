#!/usr/bin/python3


def minOperations(n):

    if not n:
        return 0

    mov = 0

    if n <= 2 or n % 2 == 1 and n % 3 == 1:
        return n

    i = 2
    while i <= n:
        if n % i == 0:
            mov += i
            n = n / i
        else:
            i += 1

    return mov
