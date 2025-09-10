#Task
# 

def series_sum(n):
    count=0
    for k in range(n):
        count+= 1.00/(3*k+1)

    
    return f"{count:.2f}"  #rounding off to 2 decimal points

print(series_sum(10))