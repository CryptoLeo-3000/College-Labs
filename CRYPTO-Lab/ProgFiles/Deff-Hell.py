n = int(input("Enter prime number (n): "))
g = int(input("Enter prime number (g): "))

# Sender A
x = int(input("Enter +ve number (x): "))
A = pow(g, x) % n
print(f"A: {A}")

# Receiver B
y = int(input("Enter +ve number (y): "))
B = pow(g, y) % n
print(f"B: {B}")

# Sender Key
k1 = pow(B, x) % n
print(f"Sender Key: {k1}")

# Receiver key
k2 = pow(A, y) % n
print(f"Receiver Key: {k2}")

if k1 == k2:
    print("Successful")
else:
    print("Unsuccessful")