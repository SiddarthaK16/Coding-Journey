# 5!= 5*4*3*2*1

n=int(input("Enter the value of n to find n factorial :"))

x=1
for i in range (1,n+1):
    x *= i   #keep multiplying i with x that is 1
    


print(f"The n!={x}")