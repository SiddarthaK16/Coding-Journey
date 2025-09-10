def convert(x):
    y=((9/5)*x)+32
    return y

a=float(input("Enter the temperature in celcius to know temperature in fahrenheit :"))
x=convert(a)
print("The temperature in fahrenheit is ",round(x,2))  #Round program rounds of x to 2 decimal places