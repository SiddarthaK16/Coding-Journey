x=int(input("Enter the number to check weather it's prime or not :"))

if(x<=1):
    print("Not prime!!!!")
    
else:
 for i in range(2,x-1):
    if(x % i ==0):
        print("Not prime!!!")
        break



 else:
    print("Prime!!")  