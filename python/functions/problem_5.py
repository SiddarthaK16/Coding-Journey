def convert(x):
    if(x<0):
        
        return  "Get out of here!!!"
    else:
      y=x*(2.54)
      return y 
    
a=float(input("Enter the value of x in inches to convert it into cms :"))
b=convert(a)

if b !="Get out of here!!!":
   print(f"{a} inches = {b} cms")
else:
   print(b)