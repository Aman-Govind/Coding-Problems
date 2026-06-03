# Read two integers and two floating-point numbers from input.
# Calculate and print the sum and difference of the integers.
# Calculate and print the sum and difference of the floating-point numbers,
# displaying float results rounded to one decimal place.
#First line contains two integers separated by a space.
#Second line contains two floats separated by a space.
#Float results must be printed with 1 decimal place.

a, b = map(int, input().split())
c, d = map(float, input().split())
print(a+b , a-b)
print(f"{c+d:.1f} {c-d: .1f}")