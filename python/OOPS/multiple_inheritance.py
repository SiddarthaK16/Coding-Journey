class Employee:     # base class
    company = "Apple"
    
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary

    def show(self):
        print(f"The name of the employee is {self.name} and salary is {self.salary}!!")


class Coder:                 #base class
    language="C"

    def telllanguage(self):
        print(f"Your language is {self.language}!!")
    

class Programmer(Employee,Coder):  # derived class
    company = "Microsoft"
    
    def __init__(self, name, language,salary=0):
        super().__init__(name,salary)  # if salary unknown, set 0
        self.language = language
        

    def showlanguage(self):
        print(f"{self.name} is good with {self.language} language!!")


# Create objects
a = Employee("Siddartha", 1092091)
b = Programmer("Siddartha", "Python",209309)

# Call methods
b.show()
b.showlanguage()
b.telllanguage()
