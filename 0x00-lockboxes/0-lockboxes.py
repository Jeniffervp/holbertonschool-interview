#!/usr/bin/python3


def canUnlockAll(boxes):
    flag = []
    flag.insert(0, True)
    for i in range(len(boxes) - 1):
        prev = i-1
        nxt = i+1
        if nxt in boxes[i]:
            flag.insert(nxt, True)
        elif prev in boxes[i]:
            flag.insert(prev, True)
        else:
            flag.insert(nxt, False)
    if False in flag:
        return False
    return True
