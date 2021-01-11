# pysleepcal.py
sleep = (int(input("How many hours have you sleep? = ")))

if sleep <= 5:
    print("Do you have any problem in sleeping? (Y/N)")
    sleep_problem = (str(input()))
    if sleep_problem == 'Y':
        print("Go back to sleep now!")
    elif sleep_problem == 'N':
        print("You should sleep more!")
elif sleep <= 8:
    print("Good Job!")
elif sleep < 32:
    print("You sleep too much!")
else:
    print("Error!")