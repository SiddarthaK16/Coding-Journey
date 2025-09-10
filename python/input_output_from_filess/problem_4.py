with open("lo.txt") as f:
    content=f.read()
    new_content=content.replace("donkey","####")

with open("lo.txt","w") as f:
    f.write(new_content)
    
    
    

    