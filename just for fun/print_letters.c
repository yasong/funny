/* 
* @Author: Xiaokang Yin
* @Date:   2017-09-07 18:14:20
* @Last Modified by:   Xiaokang Yin
* @Last Modified time: 2017-09-07 19:35:50
*/

#include "print_letters.h"
#include <string.h>

#define LINE 7
#define ROW 5

//TODO read sentence from file.
void help()
{
    print "Example:\n";
    print "./print_letters B \"hello world\"\n";
    print "The first agrc is the program name.\n";
    print "The second is the letter.\n";
    print "The last one is the sentence.\n";

}


void print_sentence_with_itself(char *ch);  //use the letter itself to print the letter 

void print_sentence_with_letter(char letter, char *ch); //use the designated letter to print the letter 


/**
 * first version: ignore the space (sentence has no space.)
*/
void print_sentence_with_itself(char *ch)
{
    int i;
    int length;
    char letter;
    char *array;

    length = len(ch);
    array = (char *)malloc((length * ROW +  2 * (length - 1) ) * LINE);
    memset(array, " ", sizeof(char));// initialize the array with space

    for (i = 0; i < length; ++i){
        if (ch[i] == 'A' || ch[i] == 'a'){
            letter = 'A';
            print_A(letter, i, array);

        }
    }
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
        print_sentence_with_letter(argv[1], argv[2])
    }

    return 0;
}