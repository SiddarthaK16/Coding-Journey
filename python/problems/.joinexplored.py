def count_sheep(n):
    
    return  ''.join(f"{i} sheep..." for i in range(1,n+1))  #' ' tells .join fuction how to join i.e if we put ' , '.join the function will join everything with a comma in between

a=int(input("Enter how many sheeps you wanna count in order to sleep :"))

print(count_sheep(a))