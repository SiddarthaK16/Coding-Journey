class Progammer:
    company="Microsoft"
    salary= 2500000
    
    def __init__(self,name,languages,country):
        self.name=name
        self.languages=languages
        self.country=country


p1=Progammer("Gautum","C,Python,C++,Java","India")
p2=Progammer("Nelson","C,Python,C++,JavaScript","South Africa")
p3=Progammer("Trump","C","USA")
p4=Progammer("Gayle","C,Python,C++,Java,CSS,HTML","Jamaica")
p5=Progammer("Sheela","C,Python,C++,Java,CSS,HTML,JavaScript,R,Rust","India")


print(p1.company,p1.salary,p1.name,p1.country,p1.languages)
print(p2.company,p2.salary,p2.name,p2.country,p2.languages)
print(p3.company,p3.salary,p3.name,p3.country,p3.languages)
print(p4.company,p4.salary,p4.name,p4.country,p4.languages)
print(p5.company,p5.salary,p5.name,p5.country,p5.languages)
