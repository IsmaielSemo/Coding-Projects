def main():
    import time
    print("Welcome to my weight calculator , a calculator that uses the iconic equation w=mg to calculate values of mass and weight using constant values of G! Please note that values of G are rounded to the nearest whole number.")
    x = input(" Which planet are you on? Use the first uppercase initials of planet(Represent Mercury as M and Mars as MM, and Pluto counts)")
    if x == 'E' :
        print("The gravitational acceleration of Earth is approximately 10m/s^2")
        print("Please input one of the following values : ")
        g = 10
        values = input("Enter one of the following values : w or m")
        if values == "w":
            y = float(input("What is the weight of the object?"))
            print("The weight of the object is" , y , "Newtons")
            time.sleep(5)
            c = y/g
            print("The mass of the object in kilograms is" , c ,"Kg")
        elif values == "m":
                y = float(input("What is the mass of the object?"))
                print("The mass of the object is" , y , "Kg")
                time.sleep(5)
                c = y * g
                print("The weight of the object is" , c ,"Newtons")
        else :
            print("No such operation or variable exists.")
    elif x == 'M' :
         print("The gravitational acceleration of Mercury is approximately 4 m/s^2")
         print("Please input one of the following values : ")
         g = 4 
         values = input("Enter one of the following values : w or m")
         if values == "w" :
            y = float(input("What is the weight of the object?"))
            print("The weight of the object is" , y , "Newtons")
            time.sleep(5)
            c = y/g
            print("The mass of the object in kilograms is" , c ,"Kg")
         elif values == "m":
            y = float(input("What is the mass of the object?"))
            print("The mass of the object is" , y , "Kg")
            time.sleep(5)
            c = y * g
            print("The weight of the object is" , c ,"Newtons")
         else :
            print("No such operation or variable exists.")
    elif x == 'MM':
         print("The gravitational acceleration of Mars is approximately 4m/s^2")
         print("Please input one of the following values : ")
         g = 4 
         values = input("Enter one of the following values : w or m")
         if values == "w" :
            y = float(input("What is the weight of the object?"))
            print("The weight of the object is" , y , "Newtons")
            time.sleep(5)
            c = y/g
            print("The mass of the object in kilograms is" , c ,"Kg")
         elif values == "m":
            y = float(input("What is the mass of the object?"))
            print("The mass of the object is" , y , "Kg")
            time.sleep(5)
            c = y * g
            print("The weight of the object is" , c ,"Newtons")
         else :
            print("No such operation or variable exists.")
    elif x == 'V' :
         print(" The gravitational acceleration of Venus is approximately 9m/s^2")
         print("Please input one of the following values : ")
         g = 9 
         values = input("Enter one of the following values : w or m")
         if values == "w" :
            y = float(input("What is the weight of the object?"))
            print("The weight of the object is" , y , "Newtons")
            time.sleep(5)
            c = y/g
            print("The mass of the object in kilograms is" , c ,"Kg")
         elif values == "m":
            y = float(input("What is the mass of the object?"))
            print("The mass of the object is" , y , "Kg")
            time.sleep(5)
            c = y * g
            print("The weight of the object is" , c ,"Newtons")
         else :
            print("No such operation or variable exists.")
    elif x == 'J' :
        print("The gravitational acceleration of Jupiter is approximately 25m/s^2")
        print("Please input one of the following values : ")
        g = 25 
        values = input("Enter one of the following values : w or m")
        if values == "w" :
            y = float(input("What is the weight of the object?"))
            print("The weight of the object is" , y , "Newtons")
            time.sleep(5)
            c = y/g
            print("The mass of the object in kilograms is" , c ,"Kg")
        elif values == "m":
            y = float(input("What is the mass of the object?"))
            print("The mass of the object is" , y , "Kg")
            time.sleep(5)
            c = y * g
            print("The weight of the object is" , c ,"Newtons")
        else :
            print("No such operation or variable exists.")
    elif x == 'S' :
        print("The gravitational acceleration of Saturn is approximately 10m/s^2")
        print("Please input one of the following values : ")
        g = 10 
        values = input("Enter one of the following values : w or m")
        if values == "w" :
            y = float(input("What is the weight of the object?"))
            print("The weight of the object is" , y , "Newtons")
            time.sleep(5)
            c = y/g
            print("The mass of the object in kilograms is" , c ,"Kg")
        elif values == "m":
            y = float(input("What is the mass of the object?"))
            print("The mass of the object is" , y , "Kg")
            time.sleep(5)
            c = y * g
            print("The weight of the object is" , c ,"Newtons")
        else :
            print("No such operation or variable exists.")
    elif x == 'U' :
        print("The gravitational acceleration of Uranus is approximately 9m/s^2")
        print("Please input one of the following values : ")
        g = 9
        values = input("Enter one of the following values : w or m")
        if values == "w" :
            y = float(input("What is the weight of the object?"))
            print("The weight of the object is" , y , "Newtons")
            time.sleep(5)
            c = y/g
            print("The mass of the object in kilograms is" , c ,"Kg")
        elif values == "m":
            y = float(input("What is the mass of the object?"))
            print("The mass of the object is" , y , "Kg")
            time.sleep(5)
            c = y * g
            print("The weight of the object is" , c ,"Newtons")
        else :
            print("No such operation or variable exists.")
    elif x == 'N' :
        print("The gravitational acceleration of Neptune is approximately 11m/s^2")
        print("Please input one of the following values : ")
        g = 11
        values = input("Enter one of the following values : w or m")
        if values == "w" :
            y = float(input("What is the weight of the object?"))
            print("The weight of the object is" , y , "Newtons")
            time.sleep(5)
            c = y/g
            print("The mass of the object in kilograms is" , c ,"Kg")
        elif values == "m":
            y = float(input("What is the mass of the object?"))
            print("The mass of the object is" , y , "Kg")
            time.sleep(5)
            c = y * g
            print("The weight of the object is" , c ,"Newtons")
        else :
            print("No such operation or variable exists.")
    elif x == 'P' :
        print("The gravitational acceleration of Pluto is approximately 1m/s^2")
        print("Please input one of the following values : ")
        g = 1
        values = input("Enter one of the following values : w or m")
        if values == "w" :
            y = float(input("What is the weight of the object?"))
            print("The weight of the object is" , y , "Newtons")
            time.sleep(5)
            c = y/g
            print("The mass of the object in kilograms is" , c ,"Kg")
        elif values == "m":
            y = float(input("What is the mass of the object?"))
            print("The mass of the object is" , y , "Kg")
            time.sleep(5)
            c = y * g
            print("The weight of the object is" , c ,"Newtons")
        else :
            print("No such operation or variable exists.")
    else :
        print("No such planet exists yet!")
    answer = input("Do you want to repeat yes/no ?")
    if answer == "yes" :
        main()
    else:
        print("Thank you for using my calculator! I hope you enjoyed it!")
        time.sleep(3)
        exit()
main()
        
