# Read two lowercase alphabet characters.
# Convert each character to its position in the English alphabet (a=1, b=2, ..., z=26).
# Calculate and print the sum of their positions.

char1 , char2 = input().split()

a = ord(char1) - ord('a') +1
b = ord(char2) - ord('a') +1
c = a+b
print(c)