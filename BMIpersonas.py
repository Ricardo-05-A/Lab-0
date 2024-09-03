people = int(input("Enter the number of people: "))
list = []
weights = []
heights = []

for i in range(people):
    weight = float(input(f"Enter the weight for person {i+1} (in kg): "))
    height = float(input(f"Enter the height for person {i+1} (in cm): "))
    weights.append(weight)
    heights.append(height)

    bmi = weight / ((height / 100) * (height / 100))
    list.append(bmi)
    print(f"The BMI for person {i+1} is: {bmi:.2f}")


