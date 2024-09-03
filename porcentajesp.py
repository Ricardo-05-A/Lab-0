people = int(input("Enter the number of people: "))
list = []
weights = []
heights = []

for i in range(people):
    weight = float(input(f"Enter the weight for person {i+1}: "))
    height = float(input(f"Enter the height for person {i+1}: "))
    weights.append(weight)
    heights.append(height)

    bmi = weight / ((height / 100) * (height / 100))
    list.append(bmi)

    print(f"Your BMI for person {i+1} is: {bmi:.2f}")

underweight = normal = overweight = obesity = 0

for bmi in list:
    if bmi < 18.5:
        underweight += 1
    elif 18.5 <= bmi < 24:
        normal += 1
    elif 24 <= bmi < 30:
        overweight += 1
    else:
        obesity += 1

percentage_underweight = (underweight * 100) / people
percentage_normal = (normal * 100) / people
percentage_overweight = (overweight * 100) / people
percentage_obesity = (obesity * 100) / people

print(f"Percentage of people underweight: {percentage_underweight:.2f}%")
print(f"Percentage of people with normal weight: {percentage_normal:.2f}%")
print(f"Percentage of people overweight: {percentage_overweight:.2f}%")
print(f"Percentage of people with obesity: {percentage_obesity:.2f}%")
