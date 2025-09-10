def sum(n):
    if(n==0):
        return 0
    else:
        return n+sum(n-1)

a=int(input("Enter the value of n to know sum of n natural numbers :"))

b=sum(a)

print(b)