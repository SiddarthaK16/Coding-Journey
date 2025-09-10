n=int(input("Enter the value of n to print pattern :"))

#     *
#    ***
#   ***** for n = 3
# *********

for i in range(1,n+1):
 print(" " * (n-i) , end="" )
 print("*" * (2*i-1) , end="")        #prevents print from printing on next line as it is defaulted to instead keeps all in same line
 print("\n")

        