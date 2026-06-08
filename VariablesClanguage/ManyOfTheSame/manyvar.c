#include <stdio.h>

int main(void)
{
    int age = 22;
    int score = 100;
    char *name = "Francisco";
    char *city = "Bangkok";
    char grade = 'A';
    int i = 2;
    int j = 5;

    printf("Name: %s, Age: %d, City: %s, Score: %d, Grade: %c\n", name, age, city, score, grade);
 printf("Normal order: %d and %d\n", i, j);
    printf("Swapped order: %d and %d\n", j, i);

}
