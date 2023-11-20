#include<stdio.h>
int main()
{
    int i;
    int ans[5];
    int point;
    int point0;
    int total1;

    printf("Welcome to the game\n");
    printf(">Press 1 to start the game\n");
    printf(">Press 0 to quit the game\n");
    scanf("%d",&i);
    if(i==1){
        printf("The game has Started\n\n");
         }
    else if(i==0){
        printf("The game has ended\n\n");
    }
    else{
        printf("Invalid\n\n");
    }
    if(i==1){
        printf("1) What is the capital of Australia?\n\n");
        printf("1) Sydney\n");
        printf("2) Melbourne\n");
        printf("3) Canberra\n");
        printf("4) Brisbane\n\n\n");
        printf("Enter your answer: \n");
        scanf("%d",&ans[0]);
        if(ans[0]==3){
            printf("Correct Answer\n");
            point=5;
            printf("you have scored %d points\n\n",point);
            }
            else{
                printf("Wrong Answer\n");
                point0=0;
                printf("you have scored %d points \n\n\n",point0);
            }

            printf("2) Who wrote the play \"Romeo and Juliet\"?\n\n");
            printf("1) Charles Dickens\n");
            printf("2) William Shakespeare\n");
            printf("3) Jane Austen\n");
            printf("4) Leo Tolstoy\n\n\n");

            printf("Enter your answer: \n");
            scanf("%d",&ans[1]);
            if(ans[1]==2){
                printf("Correct answer\n");
                point=point+5;
                printf("you have scored %d points\n\n\n",point);
                }
            else{
                printf("Wrong Answer\n");
                point0=0;
                printf("You have scored %d points\n\n\n",point0);
            }
            printf("3) In what year did the Titanic sink?\n\n");
            printf("1) 1912\n");
            printf("2) 1905\n");
            printf("3) 1921\n");
            printf("4) 1898\n\n\n");

        printf("Enter your answer:\n");
        scanf("%d",&ans[2]);

        if(ans[2]==1){
            printf("Correct Answer\n");
            point=point+5;
            printf("You have scored %d points\n\n\n",point);
        }
        else{
            printf("Wrong Answer\n");
            point0=0;
            printf("you have scored %d point\n\n\n",point0);
        }
            printf("4) Which planet is known as the \"Red Planet\"?\n\n");
            printf("1) Venus\n");
            printf("2) Mars\n");
            printf("3) Jupiter\n");
            printf("4) Saturn\n\n\n");

            printf("Enter your answer:\n");
            scanf("%d",&ans[3]);

            if(ans[3]==2){
                printf("Correct Answer\n");
                point=point+5;
                printf("You have scored %d points\n\n\n",point);
            }
            else{
                printf("Wrong Answer\n");
                point0=0;
                printf("you have scored %d points\n\n\n",point0);
            }

            printf("5) What is the largest mammal in the world?\n\n");
            printf("1) African Elephant\n");
            printf("2) Blue Whale\n");
            printf("3) Giraffe\n");
            printf("4) Polar Bear\n\n\n");

            printf("Enter you answer:\n");
            scanf("%d",&ans[4]);

        if(ans[4]==2){
            printf("Correct Answer\n");
            point=point+5;

            printf("you have scored %d points\n\n\n",point);
        }
        else{
            printf("Wrong Answer\n");
            point0=0;
            printf("you have scored %d points\n\n\n",point0);
        }

        }
         return 0;
    }




