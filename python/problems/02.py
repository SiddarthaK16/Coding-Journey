def digitize(n):
    return [int(d) for d in str(n)][::-1] #[::-1] reverses the list in python

number = 348597
result = digitize(number)

print(f"Original number: {number}")
print(f"Digits reversed as list: {result}")