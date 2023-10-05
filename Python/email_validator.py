#Email validation in python (using string functions)
email = input("Enter your email: ")  
k,j,d = 0,0,0

if len(email) >= 6:           
    if email[0].isalpha():    
        if ("@" in email) and (email.count("@") == 1):  
            if (email[-4] == ".") ^ (email[-3] == "."): 
                for i in email:  
                    if i == i.isspace(): 
                        k = 1
                    elif i.isalpha():        
                        if i == i.upper():   
                            j = 1
                    elif i.isdigit():        
                        continue
                    elif i == "_" or i == "." or i == "@":  
                        continue
                    else:
                        d = 1                 
                if k == 1 or j == 1 or d == 1:
                    print("Invalid email 5")
            else:
                print("Invalid email 4")
        else:
            print("Invalid email 3")
    else:
        print("Invalid email 2")
else:
    print("Invalid email 1") 