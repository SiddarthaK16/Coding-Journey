def unique_in_order(sequence):
    new=[]
    prev=None
    for ch in sequence:
        if ch!=prev:  #only returns if ch is not occuring previously
            new.append(ch)
        prev=ch
            
        
    
            
    return new