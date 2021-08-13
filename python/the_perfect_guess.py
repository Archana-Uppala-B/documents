import random

randNumber=random.randint(1,100)
#print(randNumber)
userguess=None
guesses=0

while(userguess!=randNumber):
 userguess=(int(input("Enter the Guess")))
 guesses+=1
 if userguess==randNumber:
    print("You guessed it right")
    
 else:
    if (userguess>randNumber):
        print('You guessed it wrong!')
        print("Lower number please")
    elif(userguess<randNumber):
        print("You guessed it wrong!")
        print("Greater number please")

print(f"you have guessed it in {guesses} moves")
        
