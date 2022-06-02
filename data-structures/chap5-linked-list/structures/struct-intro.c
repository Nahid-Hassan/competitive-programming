#include <stdio.h>

struct {
    char *car_name;
} car1, car2;

int main() {
    car1.car_name = "BMW";
    car2.car_name = "Audi";

    printf("%s\n", car1.car_name);
    printf("%s\n", car2.car_name);
}