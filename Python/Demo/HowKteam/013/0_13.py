check=False
try:
    with open("bai1.13.inp",encoding='utf-8') as f_inp:
        a=f_inp.read().split()
        check=True
except: print("No search file input!!")


if check:
    with open("bai1.13.out","wb") as f_out:
        z=" ".join(a).encode('utf8')
        f_out.write(z)