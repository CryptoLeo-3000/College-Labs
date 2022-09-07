# from des import DesKey

# key = DesKey(b"AABB09182736CCDD")
# print(key)

# plain_text = "My name is Kartik"
# print(f"Plain Text: {plain_text}")

# encrypt_msg = key.encrypt(b"My name is Kartik", padding=True)
# print(f"Encrypted Message: {encrypt_msg}")

# decrypt_msg = key.decrypt(encrypt_msg, padding=True)
# print(f"Decrypted Message: {decrypt_msg}")

key = [1, 2, 3, 4, 5, 6, 7, 8,
9, 10, 11, 12, 13, 14, 15, 16,
17, 18, 19, 20, 21, 22, 23, 24,
25, 26, 27, 28, 29, 30, 31, 32,
33, 34, 35, 36, 37, 38, 39, 40,
41, 42, 43, 44, 45, 46, 47, 48,
49, 50, 51, 52, 53, 54, 55, 56,
57, 58, 59, 60, 61, 62, 63, 64]

# Removing 8th bits