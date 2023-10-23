a = float(input())
d = a
string =''

while a != 0 :
    b = a % 8
    a = a // 8
    string =  str(b) + string 
    print(string)
print(string)