def xo(s):
  s=s.lower()  #converts whole string to lower
    # s=s.upper()  #conerts whole string to upper do either one of it should also change it in comparisons then
  return  s.count("x") == s.count("o")

s="xokxoxjos"
print(xo(s))  