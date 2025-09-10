def printer_error(s): 
    count = 0
    for ch in s:
        if ch not in "abcdefghijklm":   # only a-m are valid
            count += 1
    return f"{count}/{len(s)}"

print(printer_error("hjgkvkffvyvtceawsmkmtyb"))