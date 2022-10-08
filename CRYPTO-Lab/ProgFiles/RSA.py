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

https://jwt.io/#debugger-io?token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkthcnRpayBQYWRhdmUiLCJpYXQiOjE1MTYyMzkwMjJ9.CKh2QE-q94bPR5gOMsox5Gy50cX_nUtOC0S3xHD2XD4

https://jwt.io/#debugger-io?token=eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkthcnRpayBQYWRhdmUiLCJhZG1pbiI6dHJ1ZSwiaWF0IjoxNTE2MjM5MDIyfQ.kFVESKlBJ94mqDc1k4ckbIerVsY9UL5krRmfmj6LUiHTNV6BOAzPlO-rwbks2FlfttuVFBR7idB1BAG6Z-bo7zelruke6E3M7fTkTEqEuu0ByP4ZhH8I1kyJGxnoFkEJltcvYe88g4PfE6yHg22ymAEJtaiwT-QV-1gGpr6JCnUUxLA6trpZlFqmB6tPk-HHW3Ktuh9kJjTw1yeUZxl2yrSfqDcNAgBm2f_-RZWAzbBw-IPpXQVvlaMc8i0SODmPWt1KdHa0R5g7HCy6dBvec6-ezceoBsk0fWpgnK_ajLzmNSphj3TTx-Z6zKBwlgAi4iFa1w8x8phcuIyT1AdJmA&publicKey=-----BEGIN%20PUBLIC%20KEY-----%0AMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAu1SU1LfVLPHCozMxH2Mo%0A4lgOEePzNm0tRgeLezV6ffAt0gunVTLw7onLRnrq0%2FIzW7yWR7QkrmBL7jTKEn5u%0A%2BqKhbwKfBstIs%2BbMY2Zkp18gnTxKLxoS2tFczGkPLPgizskuemMghRniWaoLcyeh%0Akd3qqGElvW%2FVDL5AaWTg0nLVkjRo9z%2B40RQzuVaE8AkAFmxZzow3x%2BVJYKdjykkJ%0A0iT9wCS0DRTXu269V264Vf%2F3jvredZiKRkgwlL9xNAwxXFg0x%2FXFw005UWVRIkdg%0AcKWTjpBP2dPwVZ4WWC%2B9aGVd%2BGyn1o0CLelf4rEjGoXbAAEgAqeGUxrcIlbjXfbc%0AmwIDAQAB%0A-----END%20PUBLIC%20KEY-----