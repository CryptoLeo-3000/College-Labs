p = int(input("Enter prime no. (p): "))
q = int(input("Enter prime no. (q): "))

n = p*q
print(f"n: {n}")

tot = (p-1)*(q-1)
print(f"Totient of n: {tot}")

print("Note: Value of E is 1 < E < totient of n & is not a factor of totient of n")
E = int(input("Enter (E): "))

i = 1
while True:
    if(i*E % tot == 1):
        D = i
        break
    i += 1
print(f"D: {D}")

pt = 10

ct = pow(pt, E) % n
print(f"Cipher Text: {ct}")

pt = pow(ct, D) % n
print(f"Plain Text: {pt}")