class Employee:  #employee is a noun (class name is a noun)
                       # ''' these tw0 are attributes of class which are adjectives....'''
    language="Hindi"     
    salary="123939"                             

john=Employee()  #object instantation
john.name="John Banega Don"
print(john.name,john.salary,john.language)

sweeney=Employee()
sweeney.name="Sydney Sweeney"
print(sweeney.name,sweeney.language,sweeney.salary)

 #language and salary are class attributes as they directly belong to class and name is an object attribute or instance attribute