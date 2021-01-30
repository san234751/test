import random
a=["stone","paper","cissor"]
user_score=computer_score=0
user_name=input("enter your name: ")
i=0
j=int(input("enter how many times you want to play: "))
while i<j:
    computer_guess=random.choice(a)
    user_enter=input("Enter any of the three \nstone\npaper\ncissor\n")
    if computer_guess=="stone":
        if user_enter=="stone":
            print("its a draw")
            print("you have entered: ",user_enter," computer entered: ",computer_guess)
            computer_score+=0.5
            user_score+=0.5
        elif user_enter=="cissor":
            print("computer wins beter luck next time")
            print("you have entered: ",user_enter," computer entered: ",computer_guess)
            computer_score+=1
        else:
            print("you win")
            print("you have entered: ",user_enter," computer entered: ",computer_guess)
            user_score+=1
    elif computer_guess=="paper":
        if user_enter=="paper":
            print("its a draw")
            print("you have entered: ",user_enter," computer entered: ",computer_guess)
            computer_score+=0.5
            user_score+=0.5
        elif user_enter=="stone":
            print("computer wins beter luck next time")
            print("you have entered: ",user_enter," computer entered: ",computer_guess)
            computer_score+=1
        else:
            print("you win")
            print("you have entered: ",user_enter," computer entered: ",computer_guess)
            user_score+=1
    elif computer_guess=="cissor":
        if user_enter=="cissor":
            print("its a draw")
            print("you have entered: ",user_enter," computer entered: ",computer_guess)
            computer_score+=0.5
            user_score+=0.5
        elif user_enter=="paper":
            print("computer wins beter luck next time")
            print("you have entered: ",user_enter," computer entered: ",computer_guess)
            computer_score+=1
        else:
            print("you win")
            print("you have entered: ",user_enter," computer entered: ",computer_guess)
            user_score+=1
    i+=1

print("use score = ",user_score)
print("computer score = ",computer_score)
if computer_score>user_score:
    print("you lose better luck next time")
elif user_score>computer_score:
    print(user_name,"win the game")
else:
    print("its a draw")
