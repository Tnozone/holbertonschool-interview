#!/usr/bin/python3

def canUnlockAll(boxes):
    for n in range(len(boxes) - 1):
        if not boxes[n]:
            return False
    return True