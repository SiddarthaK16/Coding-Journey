class Employee:
    language="Python"
    salary=102998302


siddu=Employee()
siddu.language="C and C++"
print(siddu.language,siddu.salary)



#INSTANCE ATTRIBUTES TAKE PRIORITY THAN CLASS ATTRIBUTES!!!!

#First compiler will see weather the attribute is present in the instance or not and then will proceed to class if not found in object.