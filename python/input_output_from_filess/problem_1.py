with open("poems.txt") as f:
    poem=f.read()
    if "twinkle" in poem.lower():
        print("given poem contains twinkle")
    else:
        print("it does not contain twinkle")