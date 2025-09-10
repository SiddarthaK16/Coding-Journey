f=open("file.txt")
# lines=f.readlines()  #returns all lines of file as a list
# print(lines,type(lines))

# line1=f.readline()  #returns first line as a string and next line if we use readline again and so onn
# print(line1)

# line2=f.readline()
# print(line2)

# line3=f.readline()
# print(line3)  

line=f.readline()

while(line!=""):
    print(line)
    line=f.readline()

f.close()