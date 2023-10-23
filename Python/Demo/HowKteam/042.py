def compare(old1, old2):
    h1=int(old1)
    h2=int(old2)
    if h1 > h2: return 1
    elif h1== h2:return 0
    else:return -1

name1, old1= input().split()
name, old2 = input().split()
if compare(old1,old2) == 1:
    print("{}  higher {} ".format(name1,name))
elif compare(old1,old2)==0:
    print("{} bang {} ".format(name1,name))
else: print("{} thap hon {} ".format(name1,name))