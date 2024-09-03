#include <stdio.h>

int main() {
    int persons;
    printf("How many people: ");
    scanf("%d", &persons);

    float height[persons], weight[persons];
    float bmi[persons];

    for (int i = 0; i < persons; i++) {
        printf("Enter the height for person %d (in cm): ", i + 1);
        scanf("%f", &height[i]);

        printf("Enter the weight for person %d (in kg): ", i + 1);
        scanf("%f", &weight[i]);

        bmi[i] = weight[i] / ((height[i] / 100) * (height[i] / 100));
        printf("The BMI for person %d is %.2f\n", i + 1, bmi[i]);
    }

    return 0;
}
