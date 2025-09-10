n=int(input("Enter the value of n to print pattern :"))

#    ***
#    * *
#    *** for n = 3


for i in range(n):    #rows
    for j in range(n): #column
        if(i==0 or i==n-1 or j==0 or j==n-1) :
            print("*" , end="")
        else:
            print(" " , end="")

    print()

   





