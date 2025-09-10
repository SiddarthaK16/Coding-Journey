def high_and_low(numbers):
    nums_str = numbers.split()        # split string into list of strings
    nums = [int(x) for x in nums_str] # convert to integers otherwise we cannot compare strings as split returns us list of substrings
    
    nums.sort()                       # sort the numbers
    
    return f"{nums[-1]} {nums[0]}"    # largest = last, smallest = first
