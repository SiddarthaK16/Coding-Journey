with open("this.txt") as f:
    content=f.read()

with open("this_copy.txt","w") as f1:
    f1.write(content)