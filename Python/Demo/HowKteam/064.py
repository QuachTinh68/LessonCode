def ReMax(s):
    new=s.split()
    max=''
    for i in new:
        if len(i) > len(max):
            max=i
        elif len(i) == len(max):
            if i < max:
                max=i              
            else:
                max=max
    return max 

s=input()
print(ReMax(s))


