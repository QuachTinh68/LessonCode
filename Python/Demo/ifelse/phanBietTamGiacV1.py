
def classify_triangle(a, b, c):
    if abs(a - b) <= 10**(-8)  and abs(b - c) <= 10**(-8) and abs(c - a) <= 10**(-8):
        return "Tam giac deu"
    elif abs(a - b) <= 10**(-8) or abs(b - c) <= 10**(-8) or abs(c - a) <= 10**(-8):
        return "Tam giac can"
    else:
        return "Tam giac thuong"
        
a, b, c = map(float, input().split())
result = classify_triangle(a, b, c)
print(result)
