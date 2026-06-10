#include <stdio.h>

int main(void)
{
    int     age;
    int     score;
    int     i;
    int     j;
    char    *name;
    char    *city;
    char    grade;

    age = 22;
    score = 100;
    i = 2;
    j = 5;
    name = "Francisco";
    city = "Bangkok";
    grade = 'A';
    printf("Name: %s, Age: %d, City: %s, Score: %d, Grade: %c\n", name, age, city, score, grade);
    printf("Normal order: %d and %d\n", i, j);
    printf("Swapped order: %d and %d\n", j, i);
    return (0);
}
