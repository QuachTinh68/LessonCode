n = int(input())
a = list(map(int, input().split()))
am = [i for i in a if i < 0]
duong = [i for i in a if i > 0]
chan = [i for i in a if i % 2 == 0]
le = [i for i in a if i % 2 != 0]
print(len(am))
print(len(duong))
print(len(chan))
print(len(le))