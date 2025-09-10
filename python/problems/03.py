def summation(num):
    total = 0
    for i in range(num + 1):
        total += i
    return total

# Example usage:
number = int(input("Enter a non-negative integer: "))
result = summation(number)
print(f"The summation from 0 to {number} is: {result}")
