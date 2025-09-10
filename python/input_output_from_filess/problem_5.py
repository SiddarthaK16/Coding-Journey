with open("log.txt") as f:
    content=f.read()

if "python" in content:
    print("It contains python")
else:
    print("It does not contain python")