class Employee:
    language="Python"
    salary=102998302

    def info(self):
        print(f"The language is {self.language} and the salary is {self.salary}.")

    
    def __init__(self,name,language,salary): #dunder method which gets automatically called as soon as object is created(first)
        self.name=name
        self.language=language #if we pass arguments here , we should also pass it everytime we create an object
        self.salary=salary
       
        print("Hellooo!!!")


siddu=Employee("Poshya","Telugu",10893108)
print(siddu.salary,siddu.name,siddu.language)
