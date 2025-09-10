def is_triangle(a, b, c):
    return True if a>0 and b>0 and c>0 and a+b>c and a+c>b and b+c>a else False

a=20
b=39
c=10
print(is_triangle(a,b,c))