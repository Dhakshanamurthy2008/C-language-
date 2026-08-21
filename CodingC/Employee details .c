#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    char gender;
    float salary;
};

void display(struct Employee emp[ ],int n){
for(int i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("ID     : %d\n", emp[i].id);
        printf("Name   : %s\n", emp[i].name);
        printf("Gender : %c\n", emp[i].gender);
        printf("Salary : %.2f\n", emp[i].salary);
    }
}

int main()
{
    int i, n;
    struct Employee emp[n];
    
    printf("Enter number of employees:");
    scanf("%d",&n);
    // Get employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Gender (M/F): ");
        scanf(" %c", &emp[i].gender);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    
    display(emp, n); 

    

    return 0;
}