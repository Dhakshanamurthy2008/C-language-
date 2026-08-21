#include <stdio.h>

struct student {
    char *name;
    int age;
    float per;
};

int main() {
    
    struct student o = {"arunkumar", 18, 81.5};
    struct student *ptr = &o;

    
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Percentage: %.1f\n", ptr->per);

    return 0;
}