s1="Make a lot of money"
s2="buy now"
s3="subscribe now"
s4="click this"

message=input("Leave your comment on my videoc:")

if(s1 in message or s2 in message or s3 in message or s4 in message):
    print("This comment is a spam")
else :
    print(message)    