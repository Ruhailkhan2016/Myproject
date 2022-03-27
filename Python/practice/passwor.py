#helper functions
def has_digit(password):
    
    #  Checks if a password string has at least one digit.
    #     Returns True if at least one digit is present, false otherwise. 
    
     return any([char.isdigit() for char in password])

def has_letter(password):

    # Checks if a password string contains atleast one letter.
    # Returns True if at least one letter is present, false otherwise.

    return any([(ord(c)>= 97and ord(c) <=122) \
                or (ord(c)>= 65 and ord(c) <= 90) for c in password])

class InvalidPassword(Exception):
        #Base class for all password exceptions
  
    def __init__(self,message):
        # Constructors that takes and initializes error message
        self.message = message
  
    def __str__(self):
            # Method to return error    message
        return self.message
  
class InsufficientLength(InvalidPassword):

# Sub class for Invalid Password that is raised when password length
# is not between 6 to 12

    def __init__(self):
        super().__init__("Password length needs to be between 6 to 12")
  
class NoDigit(InvalidPassword):

# Sub class for Invalid Password that is raised when password doesn't
# have atleast one digit

    def __init__(self):
        super().__init__("Password must contain one digit(0-9)")
  
class NoLetter(InvalidPassword):

# Sub class for Invalid Password that is raised when password doesn't
# have atleast one letter

    def __init__(self):
        super().__init__("Password must contain one letter")

def main():
        #Loops as long as user doen's enter valid password
    while True:
        try:
            #Reads password
            password = input("Enter your password: ")
            if len(password) < 6 or len(password) > 12:
            #Raises exception for invalid length
                raise(InsufficientLength())
            elif not has_digit(password):
            #Raises exception is no digit in it
                 raise(NoDigit())
            elif not has_letter(password):
            #Raises exception is no letter in it
                raise(NoLetter())
            else:
            #Prints valid password message and exits loop
                print(f"Valid password: {password}")
            break
        except InvalidPassword as error:
            print(error)
  
main()