def remove(l,word):
    n=[]

    for item in l:
        if not(item==word):
            n.append(item.strip(word))
    return n 

l=["Siddu" , "Poshya" , "Gopi" , "Nirmala" , "add"]

a=remove(l,"du")
print(a)
