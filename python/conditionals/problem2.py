#Three subjects are Physics , Maths & Chemistry
#To pass , min total 40% and 33% atleast in each subject 


a=int(input("Enter your Physics Marks :"))
b=int(input("Enter your Chemistry Marks :"))
c=int(input("Enter your Maths Marks :"))

total_marks= a+b+c
total_percentage= total_marks/3

if(total_percentage>=40 and a>=33 and b>=33 and c>=33):
    print("Congratulations you passed :" , total_percentage)          #try to keep variable namees descriptive even if they are long
else :
    print("Sorry , better luck next time")

