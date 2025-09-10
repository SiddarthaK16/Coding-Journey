def longest_consec(strarr, k):
    if k <= 0 or k > len(strarr):
        return ""
    
    longest = ""
    for i in range(len(strarr) - k + 1):  #imagine cutting a window of length k from the strarr , last possible index will be len-k
        
        assume = "".join(strarr[i:i+k])  #takes a window of k from the strrar
        if len(assume) > len(longest):
            longest = assume
    return longest