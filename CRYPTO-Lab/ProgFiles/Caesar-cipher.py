from rsa import encrypt


text = input("Enter plain text: ").upper()
shift = int(input("Enter shift value: "))
encrypt_text = ""

for i in range(len(text)):
    char = text[i]
    encrypt_text += chr((ord(char) + shift-65) % 26 + 65)

print(f"Plain Text: {text}")
print(f"Shift value: {shift}")
print(f"Encrypted Text: {encrypt_text}")