#!/usr/bin/python3

"""
Write a method that determines if all the boxes can be opened.
"""

def canUnlockAll(boxes):
    #excludes last box
    for n in range(len(boxes) - 1):
        #if a box is empty
        if not boxes[n]:
            return False
    return True