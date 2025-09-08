kg = float(input())
h = float(input())
bmi = kg / (h * h)
print("Overweight" if bmi > 25 else ("Normal weight" if bmi >= 18.5 else "Underweight"))

