from itertools import combinations

str = input()
n = int(input())

res = [str[x:y] for x, y in combinations(
			range(len(str) + 1), r = 2)]

res = set(res)
final = ''.join(sorted(res))
print(final[n-1])