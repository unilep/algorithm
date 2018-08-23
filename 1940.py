def binary_search(A, len, val):
	lo = 0
	hi = len - 1
	while lo <= hi:
		mid = (lo + hi) / 2
		if A[mid] < val:
			lo = mid + 1
		elif A[mid] > val:
			hi = mid - 1
		else:
			return True
	return False

N = int(raw_input())
M = int(raw_input())
A = raw_input().split()
A = map(int, A)
A.sort()
ans = 0
for val in A:
	exist = binary_search(A, N, M - val)
	if exist is True: 
		#print "{} {}".format(val, M-val)
		ans += 1
	
print ans // 2
