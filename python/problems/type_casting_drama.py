def square_digits(num):
    a = str(num)
    result = ""  # empty string to collect squares
    
    for i in range(len(a)):
        b = int(a[i]) * int(a[i])
        result += str(b)
    
    return int(result)

print(square_digits(91282))