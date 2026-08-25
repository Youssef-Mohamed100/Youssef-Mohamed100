import string

password = input("Enter your password: ")

score = 0

# Check password length
if len(password) >= 12:
    score += 2
elif len(password) >= 8:
    score += 1

# Check uppercase letters
if any(char.isupper() for char in password):
    score += 1

# Check numbers
if any(char.isdigit() for char in password):
    score += 1

# Check symbols
if any(char in string.punctuation for char in password):
    score += 1

# Determine password strength
if score <= 2:
    strength = "Weak"
elif score <= 4:
    strength = "Medium"
else:
    strength = "Strong"

print(f"Password Strength: {strength}")
