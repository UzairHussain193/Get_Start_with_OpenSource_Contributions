import re

def validate_email(email):
     
    pattern = r'^[\w\.-]+@[\w\.-]+\.\w+$'
    
    
    if re.match(pattern, email):
        return True
    else:
        return False

 
user_email = input("Enter an email address: ")

 
if validate_email(user_email):
    print("Valid email address.")
else:
    print("Invalid email address.")
