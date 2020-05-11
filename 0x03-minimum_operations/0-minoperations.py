#!/usr/bin/python3
""" Initialize the file """


def minOperations(n):
    """
    Function to return the minimum operations
    neccesary to copy and paste n times
    """

    if not n or n < 2:
        return 0

    if n % 2 == 1 and n % 3 == 1:
        return n

    mov = 0
    i = 2
    while i <= n:
        if n % i == 0:
            mov += i
            n = n // i
        else:
            i += 1

    return mov
