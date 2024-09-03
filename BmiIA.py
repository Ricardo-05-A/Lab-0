# Funcion para calcular el IMC (indice de Masa Corporal)
def calc_bmi(height, weight):
    bmi = weight / ((height / 100) ** 2)

    # Determinar la categoria del IMC
    if bmi <= 18.5:
        print("You are underweight")
    elif 18.5 < bmi <= 24:
        print("You are at normal weight")
    elif 24 < bmi <= 30:
        print("You are overweight")
    elif bmi > 30:
        print("You are obese")

    return bmi

# Funcion principal
def main():
    # Solicitar la altura en centimetros
    height = float(input("Enter your height in cms: "))

    # Solicitar el peso en kilogramos
    weight = float(input("Enter your weight in kgs: "))

    # Calcular el IMC
    bmi = calc_bmi(height, weight)

    # Mostrar el resultado
    print(f"Your body mass index is {bmi:.2f} kg/m^2")

# Punto de entrada
if __name__ == "__main__":
    main()
