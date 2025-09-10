def factorial(n) :

    if(n==0 or n==1):     #Base condition is very important.... it will stop calling function further anymore..
        return 1
    else:
     return n*factorial(n-1)
    
x=int(input("Enter value of n to find value of n! : "))
print(f"n!={factorial(x)}")