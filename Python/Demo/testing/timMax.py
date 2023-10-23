
def Max(*args,find=0):
    for i in args:
        if i > find:
            find=i
    return 2*find-1
a=32
b=59
c=8
d=24
e=15
print(Max(a,b,c,d,e))