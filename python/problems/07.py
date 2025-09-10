def disemvowel(s):
    vowels = "aeiouAEIOU"
    return "".join(ch for ch in s if ch not in vowels)

s="Virat Kohli is GOAT"
print(disemvowel(s))