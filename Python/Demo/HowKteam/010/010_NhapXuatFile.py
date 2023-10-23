# In="""Quách Tĩnh
# 30
# """
# fobj=open('bai1.10.inp','a+', encoding='utf-8')
# fobj.write(In)
# fobj.seek(0)
# name=fobj.readline().strip()
# year_old=fobj.readline().strip()
# print("Sau 10 năm nữa",name,"sẽ",year_old,'tuổi')
# fobj.close()

with open('bai1.10.inp') as fobj:
    name=fobj.readline().strip()
    year=int(fobj.readline())
with open('bai1.10.out', 'w',encoding='utf-8') as f_out:
    f_out.write('Sau 20 nam nua %s sẽ %d tuoi' % (name ,year+20))




