import random
robo_num=random.randint(1,10)
user_num=int(input("guess a number between 1 and 10 herer: "))
if robo_num==user_num:
    print("YESSS")
else:
    print(f'nope it was {robo_num}')
