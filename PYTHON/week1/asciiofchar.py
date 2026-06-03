# Given a printable ASCII character, find its ASCII value
# and print the corresponding next and previous ASCII characters.

char1 = input()
asciiofchar1 = ord(char1)

print(asciiofchar1)
print(chr(asciiofchar1+1))
print(chr(asciiofchar1-1))