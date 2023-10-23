def chuanHoa(s):
    if s[0].islower():
        return s.lower()
    elif s[0].isupper():
        return s.upper()
    return s
s=input()
print(chuanHoa(s))