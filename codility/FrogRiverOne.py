# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")

# 2, [2, 2, 2, 2, 2] = -1
def solution(X, A):
    # write your code in Python 3.6
    sum = X * (X+1) // 2
    visit = [False] * 100001
    for i, item in enumerate(A):
        if visit[item] is False:
            visit[item] = True
            sum -= item
        if sum == 0:
            return i
    return -1
