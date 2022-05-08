lower, upper, special, digit = 0, 0, 0, 0
password = input("Enter your password:: ")

if (len(password) >= 8):
    for i in password:

        for word in password.split():
            if(word[0].isupper()):
                upper += 1

        if(i.islower()):
            lower += 1

        if(i.isdigit()):
            digit += 1

        if(i == '@' or i == '$' or i == '_' or i == '#' or i == '&' or i == '*' or i == '^'):
            special += 1

else:
    print("Password should be more than 8 characters")
if (lower >= 1 and upper >= 1 and special >= 1 and digit >= 1):
    print("Valid and Strong Password")
else:
    print("Invalid and Weak Password")