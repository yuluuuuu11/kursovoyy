#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    float LAT[] = { 53.8, 55.2, 53.2, 51.2 };
    float PWR[] = { 43.7, 44.2, 44.7, 51.1 };
    float QRY[] = { 32.0, 31.3, 30.6, 35.2, 34.5 };

    printf("LAT\n");
    float q1 = LAT[2] / LAT[0];
    float q2 = LAT[3] / LAT[1];
    printf("Q1 = %.5f\n", q1);
    printf("Q2 = %.5f\n", q2);

    if (q1 < q2)
        printf("Состояние: УСТОЙЧИВЫЙ РОСТ\n");
    else
        printf("Состояние: НОРМА\n");

    printf("\nPWR\n");
    q1 = PWR[2] / PWR[0];
    q2 = PWR[3] / PWR[1];
    printf("Q1 = %.5f\n", q1);
    printf("Q2 = %.5f\n", q2);

    if (q1 < q2)
        printf("Состояние: УСТОЙЧИВЫЙ РОСТ\n");
    else
        printf("Состояние: НОРМА\n");

    printf("\nQRY\n");
    q1 = QRY[2] / QRY[0];
    q2 = QRY[3] / QRY[1];
    float q3 = QRY[4] / QRY[2];
    printf("Q1 = %.5f\n", q1);
    printf("Q2 = %.5f\n", q2);
    printf("Q3 = %.5f\n", q3);

    if (q2 < q3)
        printf("Состояние: УСТОЙЧИВЫЙ РОСТ\n");
    else
        printf("Состояние: НОРМА\n");

    return 0;
}