/*Quizzes:
    >rated 0-10
    >lowest of FIRST OR LAST (1 quiz) is dropped
    >9 remain, 25% for 9 quizzes

Exams:
    midterm 0-100

    if midterm >= final: 35% mid, 40% fin
    if midterm < final: 25% mid, 50% fin
*/

#include <stdio.h>


float quizGrade(float q1, float q2, float q3, float q4, float q5, float q6, float q7, float q8, float q9, float q10) {

    float quiz_score;

    if (q1 > q10) {
        quiz_score = (q1 + q2 + q3 + q4 + q5 + q6 + q7 + q8 + q9)/9; //evaluates the average without 10
    } else {

        if (q10 > q1) {
            quiz_score = (q10 + q2 + q3 + q4 + q5 + q6 + q7 + q8 + q9)/9; //evaluates the average without 1
        }
    }

    return (quiz_score);
}

int main(void) {
    float midterm = 80;
    float final = 70;

    float quiz_avg = quizGrade(8.5, 8.5, 9, 8.5, 7.5, 7, 9, 9.5, 10, 10); //sets the function to a variable

    /* TO CALCULATE MIDTERM/FINAL WEIGHT */
    float midterm_weight, final_weight;
    
    if (midterm >= final) {
        midterm_weight = 0.35;
        final_weight = 0.40;

    } else {

        if (midterm < final) {
            midterm_weight = 0.25;
            final_weight = 0.50;
        }
    }
    /* ===================================== */

    /* TO CALCULATE COURSE GRADE */
    double course_grade = ((quiz_avg*0.25) + ((midterm/10)*midterm_weight) + ((final/10)*final_weight)) * 10;

    // the midterm and final grades need to be divided by 10, and then the whole factor needs to be multiplied by 10.
    // this is to ensure that all grades are on the same scale (0-100).

    printf("%lf", course_grade);

    return (0);
}