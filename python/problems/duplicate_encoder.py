def duplicate_encode(word):
    word=word.lower()
    new_word=""
    
    for ch in word:
        if word.count(ch)>1:
            new_word+=")"
            
        elif word.count(ch)==1:
            new_word+="("
            
    return new_word
            