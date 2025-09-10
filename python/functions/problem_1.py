"""def greatest(x,y,z):
    if(x>=y and x>=z):
        return (f"{x} is the greatest number!")
    elif(y>=x and y>=z):
        return (f"{y} is the greatest number!")
    else:
        return (f"{z} is the greatest number!") """
    

a=int(input("Enter the first number : "))
b=int(input("Enter the second number : "))
c=int(input("Enter the third number : "))


'''d=greatest(a,b,c)
print(d)'''

print(f"The greatest number is {max(a,b,c)}!!") #max is built in funciton in python to give max of passed arguments
    
