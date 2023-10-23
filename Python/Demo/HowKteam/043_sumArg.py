def Sum(*args):
    tong=0
    for i in args:
        tong+=i
    return tong

print(Sum(1,2,3,4))