def calc_ideal(altura):
    ideal = 0.75 * altura - 62.75
    return ideal

weight = float(input("Enter your weight (in kg): "))
height = float(input("Enter your height (in cm): "))
bmi = weight / ((height / 100) * (height / 100))
print(f"Your BMI is: {bmi:.2f}")

if bmi < 18.5:
    print("You are underweight")
    ideal_weight = calc_ideal(height)
    print(f"Your ideal weight is: {ideal_weight:.2f}")
elif 18.5 <= bmi < 24:
    print("You are at a normal weight")
elif 24 <= bmi < 30:
    print("You are overweight")
    ideal_weight = calc_ideal(height)
    print(f"Your ideal weight is: {ideal_weight:.2f}")
else:
    print("You are obese")
    ideal_weight = calc_ideal(height)
    print(f"Your ideal weight is: {ideal_weight:.2f}")
