class Employee:
    language="Python"
    salary=102998302

    def info(self):
        print(f"The language is {self.language} and the salary is {self.salary}.")

    @staticmethod  #tells that the following function i.e method does not require the object as argument
    def greet():
        print("Good eveningg Mr.!!")


siddu=Employee()
siddu.info()
# Employee.info(siddu)
siddu.greet()


#Both does the same thing thats why while defining function inside class we should take argument as self or any other name as you wish but self is conventional(if u want it to use inside object and tht function needs object)