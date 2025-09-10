s1={21,82,90,16,12,56,92}
s2={23,26,2,90,28,10,56}

# s=s1.union(s2)  #gives elements from both sets but common element only ones
# print(s)

# print(s2.intersection(s1))  #gives only common element

print({2,90}.issubset(s2))
print(s1.issuperset)