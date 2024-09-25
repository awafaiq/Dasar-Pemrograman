#include <stdio.h>
#define llu unsigned long long int

int main(){
    int x1, y1; scanf(" %d %d", &x1, &y1);
    int x2, y2; scanf(" %d %d", &x2, &y2);
    int x3, y3; scanf(" %d %d", &x3, &y3);

    int huTaoX = 0;
    int huTaoY = 0;

    int foundPieces = 0;

    if(x1 == 0 && y1 == 0){
        foundPieces++;
    }
    if(x2 == 0 && y2 == 0){
        foundPieces++;
    }
    if(x3 == 0 && y3 == 0){
        foundPieces++;
    }

    if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0 && x3 == 0 && y3 == 0){
        printf("%d\n", foundPieces);
        return 0;
    }

    char firstMove; scanf(" %c", &firstMove);
    if(firstMove == 'W'){
        llu inputValue1; scanf(" %llu", &inputValue1);
        huTaoY += inputValue1;


        if((huTaoX == x1 && huTaoY >= y1 &&  huTaoY - inputValue1 < y1)){
            foundPieces++;
            x1 = 1000;
            y1 = 1000;
        }

       if((huTaoX == x2 && huTaoY >= y2 && huTaoY - inputValue1 < y2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX == x3 && huTaoY >= y3 && huTaoY - inputValue1 < y3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }

    else if (firstMove == 'S'){
        llu inputValue1; scanf(" %llu", &inputValue1);
        huTaoY -= inputValue1;


        if((huTaoX == x1 && huTaoY <= y1 &&  huTaoY + inputValue1 >= y1)){
            foundPieces++;
            x1 = 1000;
            y1 = 1000;

        }

       if((huTaoX == x2 && huTaoY <= y2 && huTaoY + inputValue1 >= y2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX == x3 && huTaoY <= y3 && huTaoY + inputValue1 >= y3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }

    else if(firstMove == 'D'){
        llu inputValue1; scanf(" %llu", &inputValue1);
        huTaoX += inputValue1;


        if((huTaoX >= x1 && huTaoY == y1 &&  huTaoX - inputValue1 <= x1)){
            foundPieces++;
            x1 = 1000;
            y1 = 1000;
        }

       if((huTaoX >= x2 && huTaoY == y2 && huTaoX - inputValue1 <= x2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX >= x3 && huTaoY == y3 && huTaoX - inputValue1 <= x3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }

    else if(firstMove == 'A'){
        llu inputValue1; scanf(" %llu", &inputValue1);
        huTaoX -= inputValue1;


        if((huTaoX <= x1 && huTaoY == y1 &&  huTaoX + inputValue1 >= x1)){
            foundPieces++;
            x1 = 1000;
            y1 = 1000;
        }

       if((huTaoX <= x2 && huTaoY == y2 && huTaoX + inputValue1 >= x2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX <= x3 && huTaoY == y3 && huTaoX + inputValue1 >= x3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }

        char secondMove; scanf(" %c", &secondMove);
    if(secondMove == 'W'){
        llu inputValue2; scanf(" %llu", &inputValue2);
        huTaoY += inputValue2;


        if((huTaoX == x1 && huTaoY >= y1 &&  huTaoY - inputValue2 < y1)){
            foundPieces ++;
            x1 = 1000;
            y1 = 1000;
        }

       if((huTaoX == x2 && huTaoY >= y2 && huTaoY - inputValue2 < y2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX == x3 && huTaoY >= y3 && huTaoY - inputValue2 < y3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }

    else if (secondMove == 'S'){
        llu inputValue2; scanf(" %llu", &inputValue2);
        huTaoY -= inputValue2;


        if((huTaoX == x1 && huTaoY <= y1 &&  huTaoY + inputValue2 >= y1)){
            foundPieces++;
            x1 = 1000;
            y1 = 1000;
        }

       if((huTaoX == x2 && huTaoY <= y2 && huTaoY + inputValue2 >= y2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX == x3 && huTaoY <= y3 && huTaoY + inputValue2 >= y3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }

    else if(secondMove == 'D'){
        llu inputValue2; scanf(" %llu", &inputValue2);
        huTaoX += inputValue2;


        if((huTaoX >= x1 && huTaoY == y1 &&  huTaoX - inputValue2 <= x1)){
            foundPieces++;
            x1 = 1000;
            y1 = 1000;
        }

       if((huTaoX >= x2 && huTaoY == y2 && huTaoX - inputValue2 <= x2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX >= x3 && huTaoY == y3 && huTaoX - inputValue2 <= x3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }

    else if(secondMove == 'A'){
        llu inputValue2; scanf(" %llu", &inputValue2);
        huTaoX -= inputValue2;


        if((huTaoX <= x1 && huTaoY == y1 &&  huTaoX + inputValue2 >= x1)){
            foundPieces++;
            x1 = 1000;
            y1 = 1000;
        }

       if((huTaoX <= x2 && huTaoY == y2 && huTaoX + inputValue2 >= x2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX <= x3 && huTaoY == y3 && huTaoX + inputValue2 >= x3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }

        char thirdMove; scanf(" %c", &thirdMove);
    if(thirdMove == 'W'){
        llu inputValue3; scanf(" %llu", &inputValue3);
        huTaoY += inputValue3;


        if((huTaoX == x1 && huTaoY >= y1 &&  huTaoY - inputValue3 < y1)){
            foundPieces++;
            x1 = 1000;
            y1 = 1000;
        }

       if((huTaoX == x2 && huTaoY >= y2 && huTaoY - inputValue3 < y2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX == x3 && huTaoY >= y3 && huTaoY - inputValue3 < y3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }

    else if (thirdMove == 'S'){
        llu inputValue3; scanf(" %llu", &inputValue3);
        huTaoY -= inputValue3;


        if((huTaoX == x1 && huTaoY <= y1 &&  huTaoY + inputValue3 >= y1)){
            foundPieces++;
            x1 = 1000;
            y1 = 1000;
        }

       if((huTaoX == x2 && huTaoY <= y2 && huTaoY + inputValue3 >= y2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX == x3 && huTaoY <= y3 && huTaoY + inputValue3 >= y3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }

    else if(thirdMove == 'D'){
        llu inputValue3; scanf(" %llu", &inputValue3);
        huTaoX += inputValue3;


        if((huTaoX >= x1 && huTaoY == y1 &&  huTaoX - inputValue3 <= x1)){
            foundPieces++;
            x1 = 1000;
            y1 = 1000;
        }

       if((huTaoX >= x2 && huTaoY == y2 && huTaoX - inputValue3 <= x2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX >= x3 && huTaoY == y3 && huTaoX - inputValue3 <= x3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }

    else if(thirdMove == 'A'){
        llu inputValue3; scanf(" %llu", &inputValue3);
        huTaoX -= inputValue3;


        if((huTaoX <= x1 && huTaoY == y1 &&  huTaoX + inputValue3 >= x1)){
            foundPieces++;
            x1 = 1000;
            y1 = 1000;
        }

       if((huTaoX <= x2 && huTaoY == y2 && huTaoX + inputValue3 >= x2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX <= x3 && huTaoY == y3 && huTaoX + inputValue3 >= x3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }

        char fourthMove; scanf(" %c", &fourthMove);
    if(fourthMove == 'W'){
        llu inputValue4; scanf(" %llu", &inputValue4);
        huTaoY += inputValue4;


        if((huTaoX == x1 && huTaoY >= y1 &&  huTaoY - inputValue4 < y1)){
            foundPieces++;
            x1 = 1000;
            y1 = 1000;
        }

       if((huTaoX == x2 && huTaoY >= y2 && huTaoY - inputValue4 < y2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX == x3 && huTaoY >= y3 && huTaoY - inputValue4 < y3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }

    else if (fourthMove == 'S'){
        llu inputValue4; scanf(" %llu", &inputValue4);
        huTaoY -= inputValue4;


        if((huTaoX == x1 && huTaoY <= y1 &&  huTaoY + inputValue4 >= y1)){
            foundPieces++;
            x1 = 1000;
            y1 = 1000;
        }

       if((huTaoX == x2 && huTaoY <= y2 && huTaoY - inputValue4 >= y2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX == x3 && huTaoY <= y3 && huTaoY + inputValue4 >= y3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }

    else if(fourthMove == 'D'){
        llu inputValue4; scanf(" %llu", &inputValue4);
        huTaoX += inputValue4;



        if((huTaoX >= x1 && huTaoY == y1 &&  huTaoX - inputValue4 <= x1)){
            foundPieces++;
            x1 = 1000;
            y1 = 1000;
        }

       if((huTaoX >= x2 && huTaoY == y2 && huTaoX - inputValue4 <= x2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX >= x3 && huTaoY == y3 && huTaoX - inputValue4 <= x3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }

    else if(fourthMove == 'A'){
        llu inputValue4; scanf(" %llu", &inputValue4);
        huTaoX -= inputValue4;

        if((huTaoX <= x1 && huTaoY == y1 &&  huTaoX + inputValue4 >= x1)){
            foundPieces++;
            x1 = 1000;
            y1 = 1000;
        }

       if((huTaoX <= x2 && huTaoY == y2 && huTaoX + inputValue4 >= x2)){
            foundPieces++;
            x2 = 1000;
            y2 = 1000;
        }

       if((huTaoX <= x3 && huTaoY == y3 && huTaoX + inputValue4 >= x3)){
            foundPieces++;
            x3 = 1000;
            y3 = 1000;
        }
    }


    // printf("x : %llu, y: %llu\n", huTaoX, huTaoY);

    if(foundPieces > 0){
        printf("%d\n", foundPieces);
    }
    else{
        printf("Aku kangen kamu Zhong Li\n");
    }
}
