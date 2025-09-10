def add_binary(a,b):
    sum=a+b
    return bin(sum)[2:]  #bin(a) converts a to binary...
                         #[2:] to slash out [2: ] to slice out 0b which it returns during converting to binary

a=102
b=203
print(add_binary(a,b))