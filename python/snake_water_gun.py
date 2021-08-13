import random

#Snake Water Gun (or) Rock Paper Scissors

def gameWin(computer,you):

    #if computer and you chosse same declare tie
    if computer==you:
        return None
    #Check for all possibilities when computer chose 's'
    elif computer=='s':
      if you=='w':
         return False
      elif you=='g':
         return True
    #Check for all possibilities when computer chose 'w'
    elif computer=='w':
      if you=='g':
         return False
      elif you=='s':
          return True
    #Check for all possibilities when computer chose 'g'
    elif computer=='g':
      if you=='w':
         return True
      elif you=='s':
          return False

print("Computer's Turn:Snake(s),Water(w),Gun(g)?")
randNO=random.randint(1,3)
#print(randNO)
if randNO==1:
    computer='s'
elif randNO==2:
    computer='w'
elif randNO==3:
    computer='g'
 
you=input(("Your's Turn:Snake(s),Water(w),Gun(g)?"))

a=gameWin(computer,you)
print(f"Computer chose {computer}")
print(f"You chose {you} ")

if a==None:
    print("Game is tie!")
elif a==True:
    print("You Win!!")
elif a==False:
    print("You Lose!")







