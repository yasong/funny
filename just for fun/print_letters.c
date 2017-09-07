/* 
* @Author: Xiaokang Yin
* @Date:   2017-09-07 18:14:20
* @Last Modified by:   Xiaokang Yin
* @Last Modified time: 2017-09-07 22:06:29
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
    char space = ' ';
    offset = len * (ROW + 2) - 2;
    for (i = 0; i < LINE; ++i){
        for (j = 0; j < offset; ++j){
            printf("%c",array[j + i* offset]);
        }
        printf("\n");
    }
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
    printf("length = %d\n", length);
    array = (char *)malloc((length * ROW +  2 * (length - 1) ) * LINE);
    memset(array, ' ', sizeof(char));// initialize the array with space
    for (i = 0; i < length; ++i){
        if (ch[i] == 'A' || ch[i] == 'a'){
            letter = 'A';
            print_A(letter, i, array, length);

        }
    }
    print_array(array, length);
}

void print_sentence_with_letter(char letter, char *ch)
{

}
int main(int argc, char **argv) 
{
    if (argc == 1){
        help();
    }
    if (argc == 2){
        print_sentence_with_itself(argv[1]);
    }

    if (argc == 3){
        char ch = *argv[1];
        printf("%c\n", ch);
        print_sentence_with_letter(ch, argv[2]);
    }

    return 0;
}