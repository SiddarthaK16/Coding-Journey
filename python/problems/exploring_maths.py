import math

# print(math.ceil(20.25))   # round up
# print(math.floor(20.25))  # round down
# print(math.sqrt(2025))    # square root
# print(math.factorial(5))  # factorial

def century(year):
    return (math.ceil(year/100)) 

# year=2029
# print(century(year))

# def century(year):
#     return (year-1) // 100 +1  #integer division

year=2000
print(century(year))

