import random


def game():
    print("Welcome to the game :")
    

    with open("Hi-score.txt") as f:
        hiscore=f.read()

        if(hiscore!=""):
            hiscore=int(hiscore)
        else:
            hiscore=0
    score=random.randint(1,1000)
    print(f"Your score is {score}")

    if score>hiscore :
        with open("Hi-score.txt","w") as f:
         f.write(str(score))

    return score


game()

        

