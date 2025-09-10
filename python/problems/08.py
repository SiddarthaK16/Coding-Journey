import math

def find_next_square(n):
    root = math.isqrt(n)        # integer square root
    if root * root == n:        # check perfect square
        return (root + 1) ** 2  # next perfect square
    return -1                   # not a perfect square

n=144
print(find_next_square(n))