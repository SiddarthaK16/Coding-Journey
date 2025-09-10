class Calculator():
    
    def __init__(self,n):
        self.n=n

    def square(self):
        print(f"The square is {self.n*self.n}")

    def cube(self):
        print(f"The cube is {self.n*self.n*self.n}")
    
    def sqrt(self):
        print(f"The square root is {pow(self.n,0.5)}")

    


n1=Calculator(82)

n1.sqrt()
n1.square()
n1.cube()






































#         self.square=n*n
#         self.cube=n*n*n
#         self.sqrt=pow(n,0.5)


# n1=Calculator(13)
# n2=Calculator(78)
# n3=Calculator(2791)

# numbers=[n1,n2,n3]

# for n in numbers:
#     print(n.square,n.cube,n.sqrt)