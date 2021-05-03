print("this is a basic calculator, for help enter '!help'")
user_command=input(">")
while user_command!="!quit":
    if user_command=="!help":
        print("to use the below functions type !start")
        print("for addition enter a ")
        print("for multiplying enter m")
        print("for dividing enter d")
        print("for subtraction enter s")
        print("(note:- once you have finshed a calculation, please enter !start to perform another calculation)")
        print("to quit enter !quit")
        user_command=input(">")
    if user_command=="!start":
        print("now you can perform the calculations!!")
        user_num_1=float(input("enter the first number here: "))
        user_num_2=float(input("enter the second number here:"))
        user_command=str(input("enter the operation here: "))
        if user_command=="a":
            result=user_num_1+user_num_2
            print(f"the sum of {user_num_1} and {user_num_2} is {result}")
            user_command=input(">")
        if user_command=="s":
            result=user_num_1-user_num_2
            print(f"when {user_num_2} is subtracted from {user_num_1} the result is {result}")
            user_command=input(">")
        if user_command=="m":
            result=user_num_1*user_num_2
            print(f"the product of {user_num_1} and {user_num_2} is {result}")
            user_command=input(">")
        if user_command=="d":
            result=user_num_1/user_num_2
            remainder=user_num_1%user_num_2
            print(f"when {user_num_1} is divided by {user_num_2} the quotient is {result} and reaminder is {remainder}")
            user_command=input(">")

