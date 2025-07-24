#include<stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("💡WELCOME TO THE QUIZ GAME!💡\n\n");

    printf("1.Who invented C language?\n");
    printf("A.Ryan Gosling\nB.Bryan Cranston\nC.Dennis Ritchie\nD.Aron paul\n");
    printf("Your answer:");
    scanf(" %c",&answer);

    if(answer == 'c' || answer == 'C') {
        printf("✅Correct!\n");
        score++;
    } else { 
        printf("❌Wrong! Correct answer : C.\n"); 
    }

    printf("2.What is the correct way to declare a variable in c?\n");
    printf("A.int x;\nB.integer x;\nC.var x;\nD.x = int;\n");
    printf("Your answer:");
    scanf(" %c",&answer);

    if(answer == 'a' || answer == 'A') {
        printf("✅Correct!\n");
        score++;
    } else {
        printf("❌Worng! Correct answer : A.\n");
    }

    printf("3.Which header file is required for Printf() AND Scanf()?\n");
    printf("A.<conio.h>\nB.<math.h>\nC.<stdlib.h>\nD.<stdio.h>\n");
    printf("Your answer:");
    scanf(" %c",&answer);

    if(answer == 'd' || answer == 'D') {
        printf("✅Correct!\n");
        score++;
    } else {
        printf("❌Wrong! Correct answer : D.\n");
    }

    printf("4.What is the size of an int in a 32-bit system?\n");
    printf("A.2 byte\nB.4 byte\nC.1 byte\nD.3 byte\n");
    printf("Your answer:");
    scanf(" %c",&answer);

    if(answer == 'B' || answer == 'b') {
        printf("✅Correct!\n");
        score++;
    } else { 
        printf("❌Wrong! Correct answer : B.\n");   
    }

    printf("🎯Final score: %d/3\n",score);

    if(score == 4) {
        printf("🏆Excellent work!");
    } else if (score == 3) {
        printf("👍Great work!");
    } else if (score == 2) {
        printf("👍Well done");
    } else {
        printf("📖Keep practicing");
    } 
    return 0;

}
