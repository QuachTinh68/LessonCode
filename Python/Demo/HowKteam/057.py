s=input()
if (s[-3:])== "ing":
    newstr=s.replace("ing","ly")
else:
    newstr=s+"ing"
print(newstr)