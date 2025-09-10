def descending_order(num):
    a=list(str(num))  #breaks into list with each digit
    
    descending=sorted(a,reverse=True)  #sorts in reverse order
    
    return int("".join(descending))  #returns them in order


print(descending_order(674764))