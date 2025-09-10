def boolean_to_string(b):
    return "True" if b else "False"  #Turnary operator in Python

# User input (typed as "True" or "False")
user_input = input("Enter True or False: ")

# Convert string to boolean
if user_input == "True":
    b = "True"
elif user_input == "False":
    b = "False"
else:
    print("Invalid input.")
    exit()

# Use the function
print("Converted:", boolean_to_string(b))
