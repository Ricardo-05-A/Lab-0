weight = float(input("Enter your weight (in kg): "))
height = float(input("Enter your height (in cm): "))
bmi = weight / ((height / 100) * (height / 100))
print(f"Your BMI is: {bmi:.2f}")

if bmi < 18.5:
    print("You are underweight")
if 18.5 <= bmi < 24:
    print("You are at a normal weight")
if 24 <= bmi < 30:
    print("You are overweight")
if bmi >= 30:
    print("You are obese")
