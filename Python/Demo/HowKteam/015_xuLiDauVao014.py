
person1 = input().split()
person2 = input().split()
check=False
try:
    z=int(person1[1])
    y=int(person2[1])
    check=True
except: print("Invalid input")

if check:
    if z >= 0 and y >= 0:

        if z > y:
            print(person1[0] ,"higher" ,person2[0])
        elif z == y:
            print(person1[0] ,"as tall as" ,person2[0])
        else:
            print(person2[0] ,"higher" ,person1[0])

    else:print("Chieu cao phai lon hon 0")

