def are_you_playing_banjo(name):
    
    return f"{name} plays banjo" if name.startswith(('r','R')) else f"{name} does not play banjo"

name="Robert Dowry jr."

print(are_you_playing_banjo(name))