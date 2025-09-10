'''
****  
 ***
  **
   *


         '''
def star(n):
    if(n==0):
        return " "
    else: 
     print("*" * n)
     star(n-1)

a=int(input("Enter the value of n :"))

star(a)

