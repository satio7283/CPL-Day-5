#include <stdio.h>
#include <stdlib.h>
struct Course_hint
{
    int credit_hours[2];
    float score[2];
};
struct student_grade
{
    struct Course_hint courses;
    char course[2];
    float GPA;
};

float Calculate_GPA(float score_math , float score_programming , int credit_math , int credit_programming)
{
 return ((score_math*credit_math) + (score_programming*credit_programming))/(credit_math+credit_programming);
}

int main()
{
    float score[2] , GPA;
    int credit_hours[2];

    struct student_grade Sat;


    Sat.course[0] = "Mathematics";
    Sat.course[1] = "Programming";

    score[0] = Sat.courses.credit_hours[0] ;
    printf("Enter your score in math (out of 4)\n");
    scanf("%f" , &score[0]);
    credit_hours[0] = Sat.courses.credit_hours[0] = 3;

    score[1] = Sat.courses.score[1];
    printf("Enter your score in programming (out of 4)\n");
    scanf("%f" , &score[1]);
    credit_hours[1] = Sat.courses.credit_hours[1] = 4;


    GPA= Calculate_GPA(score[0] , score[1] , credit_hours[0] , credit_hours[1]);
    printf("Your GPA is %f \n" , GPA);

    return 0;
}

