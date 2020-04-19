#!/usr/bin/python3


def canUnlockAll(boxes):
    flag = [None] * len(boxes)
    flag[0] = True
    for i in range(len(boxes)):
        for j in range(len(boxes)):
            if i in boxes[j] and i != j:
                flag[i] = True
                break
        if flag[i] is not True:
            flag[i] = False
    if False in flag:
        return False
    return True
