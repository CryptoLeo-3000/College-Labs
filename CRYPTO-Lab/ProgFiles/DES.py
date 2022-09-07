from des import DesKey

key = DesKey(b"AABB09182736CCDD")
print(key)

plain_text = "My name is Kartik"
print(f"Plain Text: {plain_text}")

encrypt_msg = key.encrypt(b"My name is Kartik", padding=True)
print(f"Encrypted Message: {encrypt_msg}")

decrypt_msg = key.decrypt(encrypt_msg, padding=True)
print(f"Decrypted Message: {decrypt_msg}")