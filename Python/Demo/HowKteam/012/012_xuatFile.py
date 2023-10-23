# with open('Bai1.12.inp', encoding='utf8') as f_inp:
#     a=f_inp.read().splitlines()

# with open('Bai1.12.out',"wb") as f_out:
#     z=" ".join(a).encode('utf8')
#     f_out.write(z)
    


file_path = 'Bai1.12.inp'
with open(file_path, 'r') as file:
    text = file.read()

    character_count = {}

    for char in text:
        
        if char in character_count:
            character_count[char] += 1
        else:
            character_count[char] = 1

    for char, count in character_count.items():
        print(f"'{char}': {count} lần")