# Key Generation
p = int(input("Enter prime no.: "))
d = int(input("Enter decryption key: "))
e1 = int(input("Enter second part of decryption key: "))
e2 = pow(e1, d) % p
pu_key = [e1, e2, p]

# Encryption
r = int(input("Enter random integer: "))
pt_1 = int(input("Enter Plain Text: "))
c1 = pow(e1, r) % p
c2 = (pt_1 * pow(e2, r)) % p
c = [c1, c2]

# Decryption
i = 1
while True:
    if(i*pow(c1, d) % p == 1):
        break
    i += 1

pt_2 = (c2 * i) % p

print("-----------------------------------------------")
print(f"P = {p}")
print(f"D = {d}")
print(f"E1 = {e1}")
print(f"E2 = {e2}")
print(f"Public Key = {pu_key}")
print(f"R = {r}")
print(f"Plain Text = {pt_1}")
print(f"C1 = {c1}")
print(f"C2 = {c2}")
print(f"Cipher Text = {c}")
print(f"Plain Text: {pt_2}")

if pt_1 == pt_2:
    print("ElGammal Successful !!!")
else:
    print("ElGammal Unsuccessful")