# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")

def solution(N, A):
    # write your code in Python 3.6
    items = [0] * N
    mx = 0
    check_mx = 0
    for i, item in enumerate(A):
        item -= 1
        if item == N:
            check_mx = mx
        else:
            if items[item] < check_mx:
                items[item] = check_mx + 1
            else:
                items[item] += 1
            mx = max(mx, items[item])
    for i, item in enumerate(items):
        if item < check_mx:
            items[i] = check_mx
    return items
