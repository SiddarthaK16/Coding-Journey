def get_sum(a,b):
    if a==b:
            return a
    sum=0
    for i in range(min(a,b),max(a,b)+1):
            sum+=i
    
    return sum


a=10
b=229
print(get_sum(a,b))