#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
    double x = 0;
    double y = 0;

    double count = 0, circle = 0;

    int percent = 0;

    srand(time(NULL));

    while (count < 10000) {
        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;
        count++;

        if ((x * x) + (y * y) <= 1) {
            circle++;
        }

        int newper = count / 100;

        if (newper != percent) {
            percent = newper;
            printf("%d%%����.. ������: %lf ", percent, (circle / count) * 4);

            int s = floor(percent / 5);

            for (int i = 0; i < 20; i++) {
                if (i < s)
                    printf("��");
                else
                    printf("��");
            }
            printf("\n");
        }
    }

    printf("������: %lf", (circle / count) * 4);

    return 0;
}