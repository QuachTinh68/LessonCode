
try:
    with open('bai1.11.inp','r',encoding='utf-8') as f_read:
        name=f_read.readline().strip()
        age=f_read.readline()
except:
    print("No search file input")
try:
    with open('bai1.11.out', 'wb') as f_out:
        save="Sau 20 năm nũa {} sẽ {} tuổi".format(name,int(age)+20)
        f_out.write(save.encode('utf8'))
except:
    print("Invalid input")       


