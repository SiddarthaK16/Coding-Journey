with open("this.txt") as f1:
    content1=f1.read()

with open("this_copy.txt") as f2:
    content2=f2.read()
   
   
    if(content1==content2):
     print("identical")
    else:
       print("Not identitcal")