f=open("Chill_guy_original_artwork.jpg","rb")

data=f.read()

print(type(data)) #bytes
print(len(data))  #how many bites
print(data[:20])  #first 20 elements

f.close()