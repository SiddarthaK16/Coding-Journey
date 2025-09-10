def zero_fuel(distance_to_pump, mpg, fuel_left):
    can_travel= fuel_left*mpg
    
    return True if can_travel >= distance_to_pump else False

a=12
b=123
c=43

print(zero_fuel(a,c,b))