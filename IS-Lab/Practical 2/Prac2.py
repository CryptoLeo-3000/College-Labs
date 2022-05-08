import time, os

class passwordchecker:
    def __init__(self):
        self.password = input("Enter your password: ")

        self.authentication = {
        'uppercase': 0, 
        'lowercase': 0, 
        'number': 0, 
        'special character': 0, 
        'length': 0
        }

    def check_length(self):
        if len(self.password) < 8:
            self.authentication['length'] = -1
        else:
            self.authentication['length'] = 1

    def check_strength(self):
        for i in self.password:
            if i.islower():
                self.authentication['lowercase'] = 1
            elif i.isupper():
                self.authentication['uppercase'] = 1
            elif i.isdigit():
                self.authentication['number'] = 1
            else:
                self.authentication['special character'] = 1

    def print_strength(self):
        if self.authentication['lowercase'] > 0 and self.authentication['uppercase'] > 0 and self.authentication['number'] > 0 and self.authentication['special character'] > 0 and self.authentication['length'] > 0:
            print("Secure password")
        else:
            print("Insecure password")

print("Program to see if password is strong or not")
time.sleep(3)
_ = os.system('cls')

password = passwordchecker()
password.check_length()
password.check_strength()
password.print_strength()