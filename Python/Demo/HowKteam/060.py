def chuanHoa(s):
    if (s[0]=="*"):
        return s.title()
    elif (s[0]=="-"):
        return s.swapcase()
    else:
        return s.capitalize()

s=input()
print(chuanHoa(s))

