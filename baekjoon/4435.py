T = int(input())
_hobit = [1, 2, 3, 3, 4, 10]
_sauron = [1, 2, 2, 2, 3, 5, 10]
for t in range(1, T+1):
    hobit = list(map(int, input().split()))
    sauron = list(map(int, input().split()))
    h = 0
    s = 0
    for i in range(6):
        h += _hobit[i] * hobit[i]
    for i in range(7):
        s += _sauron[i] * sauron[i]
    if h == s:
        print("Battle {}: No victor on this battle field".format(t))
    elif h > s:
        print("Battle {}: Good triumphs over Evil".format(t))
    else:
        print("Battle {}: Evil eradicates all trace of Good".format(t))
