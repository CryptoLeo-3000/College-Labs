cipher = {
    'a': 'm',
   'b': 'n',
   'c': 'b',
   'd': 'v',
   'e': 'c',
   'f': 'x',
   'g': 'z',
   'h': 'a',
   'i': 's',
   'j': 'd',
   'k': 'f',
   'l': 'g',
   'm': 'h',
   'n': 'j',
   'o': 'k',
   'p': 'l',
   'q': 'p',
   'r': 'o',
   's': 'i',
   't': 'u',
   'u': 'y',
   'v': 't',
   'w': 'r',
   'x': 'e',
   'y': 'w',
   'z': 'q',
   ' ': ' '
}
plain_text = input("Enter plain text: ")
cipher_text = ""

for i in range(len(plain_text)):
    char = plain_text[i]
    if char.isupper():
        char = char.lower()
        cipher_word = cipher[char].upper()
    else:
        cipher_word = cipher[char]

    cipher_text += cipher_word

print("/n/n")    
print(f"Plain Text: {plain_text}")
print(f"Cipher text: {cipher_text}")
