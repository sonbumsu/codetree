N, M = map(int, input().split())

# Please write your code here.
while N / M != 0:
    print(N)
    N /= M
    N = int(N)