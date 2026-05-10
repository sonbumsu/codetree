import statistics

a, b, c = map(int, input().split())

midle = statistics.median([a, b, c])

print(midle)