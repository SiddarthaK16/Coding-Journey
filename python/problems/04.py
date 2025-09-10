def simple_multiplication(number):
    return number * 8 if number % 2 == 0 else number * 9

# Example usage
test_numbers = [2, 3, 4, 5, 6]

for num in test_numbers:
    result = simple_multiplication(num)
    print(f"simple_multiplication({num}) = {result}")
