
n=int(input())
s=input()
if n > len(s):
 n%=len(s)
s=s[n:]+s[:n]
print(s)