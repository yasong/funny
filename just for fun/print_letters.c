/* 
* @Author: Xiaokang Yin
* @Date:   2017-09-07 18:14:20
* @Last Modified by:   Xiaokang Yin
* @Last Modified time: 2017-09-08 09:17:30
*/

#include "print_letters.h"
#include <string.h>

#define LINE 7
#define ROW 5

//TODO read sentence from file.
void help()
{
    printf("Example:\n");
    printf("./print_letters B \"hello world\"\n");
    printf( "The first agrc is the program name.\n");
    printf("The second is the letter.\n");
    printf( "The last one is the sentence.\n");

}


void print_sentence_with_itself(char *ch);  //use the letter itself to print the letter 

void print_sentence_with_letter(char letter, char *ch); //use the designated letter to print the letter
void print_array(char *array, int len);
void print_array(char *array, int len)
{
    int i;
    int j;
    int offset;
    char space = 0;
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        for (j = 0; j < offset; ++j){
            if (array[j + i* offset] == 0)
                printf(" ");
            else printf("%c",array[j + i* offset]);
        }
        printf("\n");
    }
    /*for ( i = 0; i < LINE * ROW; ++i){
         printf("%cs",array[i]);
    }*/
    printf("\n");
}


/**
 * first version: ignore the space (sentence has no space.)
*/
void print_sentence_with_itself(char *ch)
{
    int i;
    int length;
    char letter;
    char *array;

    length = strlen(ch);
    //printf("length = %d\n", length);
    array = (char *)malloc((length * ROW +  2 * (length - 1) ) * LINE);
    memset(array, 0, sizeof(char) * (length * ROW +  2 * (length - 1) ) * LINE);// initialize the array with space
    for (i = 0; i < length; ++i){
        if (ch[i] == 'A' || ch[i] == 'a'){
            letter = 'A';
            print_A(letter, i, array, length);
        }
        if (ch[i] == 'B' || ch[i] == 'b'){
            letter = 'B';
            print_B(letter, i, array, length);
        }
        if (ch[i] == 'C' || ch[i] == 'c'){
            letter = 'C';
            print_C(letter, i, array, length);
        }
        if (ch[i] == 'D' || ch[i] == 'd'){
            letter = 'D';
            print_D(letter, i, array, length);
        }
        if (ch[i] == 'E' || ch[i] == 'e'){
            letter = 'E';
            print_E(letter, i, array, length);
        }
        if (ch[i] == 'F' || ch[i] == 'f'){
            letter = 'F';
            print_F(letter, i, array, length);
        }
        if (ch[i] == 'G' || ch[i] == 'g'){
            letter = 'G';
            print_G(letter, i, array, length);
        }
         if (ch[i] == 'H' || ch[i] == 'h'){
            letter = 'H';
            print_H(letter, i, array, length);
        }
         if (ch[i] == 'I' || ch[i] == 'i'){
            letter = 'I';
            print_I(letter, i, array, length);
        }
        if (ch[i] == 'J' || ch[i] == 'j'){
            letter = 'J';
            print_J(letter, i, array, length);
        }
        if (ch[i] == 'K' || ch[i] == 'k'){
            letter = 'K';
            print_K(letter, i, array, length);
        }
        if (ch[i] == 'L' || ch[i] == 'l'){
            letter = 'L';
            print_L(letter, i, array, length);
        }
        if (ch[i] == 'M' || ch[i] == 'm'){
            letter = 'M';
            print_M(letter, i, array, length);
        }
        if (ch[i] == 'N' || ch[i] == 'n'){
            letter = 'N';
            print_N(letter, i, array, length);
        }
        if (ch[i] == 'O' || ch[i] == 'o'){
            letter = 'O';
            print_O(letter, i, array, length);
        }
        if (ch[i] == 'P' || ch[i] == 'p'){
            letter = 'P';
            print_P(letter, i, array, length);
        }
        if (ch[i] == 'Q' || ch[i] == 'q'){
            letter = 'Q';
            print_Q(letter, i, array, length);
        }
        if (ch[i] == 'R' || ch[i] == 'r'){
            letter = 'R';
            print_R(letter, i, array, length);
        }
        if (ch[i] == 'S' || ch[i] == 's'){
            letter = 'S';
            print_S(letter, i, array, length);
        }
        if (ch[i] == 'T' || ch[i] == 't'){
            letter = 'T';
            print_T(letter, i, array, length);
        }
        if (ch[i] == 'U' || ch[i] == 'u'){
            letter = 'U';
            print_U(letter, i, array, length);
        }
        if (ch[i] == 'V' || ch[i] == 'V'){
            letter = 'V';
            print_V(letter, i, array, length);
        }
        if (ch[i] == 'W' || ch[i] == 'w'){
            letter = 'W';
            print_W(letter, i, array, length);
        }
        if (ch[i] == 'X' || ch[i] == 'x'){
            letter = 'X';
            print_X(letter, i, array, length);
        }
        if (ch[i] == 'Y' || ch[i] == 'y'){
            letter = 'Y';
            print_Y(letter, i, array, length);
        }
        if (ch[i] == 'Z' || ch[i] == 'z'){
            letter = 'Z';
            print_Z(letter, i, array, length);
        }
    }
    print_array(array, length);
    free(array);
}

void print_sentence_with_letter(char letter, char *ch)
{
    int i;
    int length;
    char *array;

    length = strlen(ch);
    //printf("length = %d\n", length);
    array = (char *)malloc((length * ROW +  2 * (length - 1) ) * LINE);
    memset(array, 0, sizeof(char) * (length * ROW +  2 * (length - 1) ) * LINE);// initialize the array with space
    for (i = 0; i < length; ++i){
        if (ch[i] == 'A' || ch[i] == 'a'){
            print_A(letter, i, array, length);
        }
        if (ch[i] == 'B' || ch[i] == 'b'){
            print_B(letter, i, array, length);
        }
        if (ch[i] == 'C' || ch[i] == 'c'){
            print_C(letter, i, array, length);
        }
        if (ch[i] == 'D' || ch[i] == 'd'){
            print_D(letter, i, array, length);
        }
        if (ch[i] == 'E' || ch[i] == 'e'){
            print_E(letter, i, array, length);
        }
        if (ch[i] == 'F' || ch[i] == 'f'){
            print_F(letter, i, array, length);
        }
        if (ch[i] == 'G' || ch[i] == 'g'){
            print_G(letter, i, array, length);
        }
         if (ch[i] == 'H' || ch[i] == 'h'){
            print_H(letter, i, array, length);
        }
         if (ch[i] == 'I' || ch[i] == 'i'){
            print_I(letter, i, array, length);
        }
        if (ch[i] == 'J' || ch[i] == 'j'){
            print_J(letter, i, array, length);
        }
        if (ch[i] == 'K' || ch[i] == 'k'){
            print_K(letter, i, array, length);
        }
        if (ch[i] == 'L' || ch[i] == 'l'){
            print_L(letter, i, array, length);
        }
        if (ch[i] == 'M' || ch[i] == 'm'){
            print_M(letter, i, array, length);
        }
        if (ch[i] == 'N' || ch[i] == 'n'){
            print_N(letter, i, array, length);
        }
        if (ch[i] == 'O' || ch[i] == 'o'){
            print_O(letter, i, array, length);
        }
        if (ch[i] == 'P' || ch[i] == 'p'){
            print_P(letter, i, array, length);
        }
        if (ch[i] == 'Q' || ch[i] == 'q'){
            print_Q(letter, i, array, length);
        }
        if (ch[i] == 'R' || ch[i] == 'r'){
            print_R(letter, i, array, length);
        }
        if (ch[i] == 'S' || ch[i] == 's'){
            print_S(letter, i, array, length);
        }
        if (ch[i] == 'T' || ch[i] == 't'){
            print_T(letter, i, array, length);
        }
        if (ch[i] == 'U' || ch[i] == 'u'){
            print_U(letter, i, array, length);
        }
        if (ch[i] == 'V' || ch[i] == 'V'){
            print_V(letter, i, array, length);
        }
        if (ch[i] == 'W' || ch[i] == 'w'){
            print_W(letter, i, array, length);
        }
        if (ch[i] == 'X' || ch[i] == 'x'){
            print_X(letter, i, array, length);
        }
        if (ch[i] == 'Y' || ch[i] == 'y'){
            print_Y(letter, i, array, length);
        }
        if (ch[i] == 'Z' || ch[i] == 'z'){
            print_Z(letter, i, array, length);
        }
    }
    print_array(array, length);
    free(array);
}

int main(int argc, char **argv) 
{
     int i;
    if (argc == 1){
        help();
    }
    if (argc == 2){
        print_sentence_with_itself(argv[1]);
    }
    if (argc > 2){
        for (i = 2; i < argc; ++i){
            char ch = *argv[1];
            //printf("%c\n", ch);
            print_sentence_with_letter(ch, argv[i]);
        }
    }
    /*if (argc == 3){
        char ch = *argv[1];
        printf("%c\n", ch);
        print_sentence_with_letter(ch, argv[2]);
    }*/

    return 0;
}