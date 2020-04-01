#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //check for command line argument
    if (argc != 2)
    {
        printf("Usage: ./subsitution key\n");
        return 1;
    }
    //variables
    int key_length = strlen(argv[1]);
    int counter1, counter2, counter3, counter4, counter5 = 0;
    int letters = 0;
    int isUnique = 1;
    string key = argv[1];
    //check for 26 characters (only alpha)
    for (counter1 = 0; counter1 < key_length; counter1++)
    {
        if (isalpha(argv[1][counter1]))
        {
         letters++;
        }
    }
    if (letters != 26)
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }
    //check unique characters
    for (counter2 = 0; counter2 < key_length; counter2++)
    {
        for (counter3 = 0; counter3 < key_length; counter3++)
        {
            if (counter2 != counter3)
            {
                if (argv[1][counter2] == argv[1][counter3])
                {
                    isUnique = 0;
                }
            }
        }
        if (isUnique == 0)
        {
            printf("Key must contain unique characters\n");
            return 1;
        }


    }
    
    printf ("key: %s\n", key);

    //get input text
    string text = get_string("Input your text to be encrypted:");
    /// text CCC
    int text_length = strlen(text);
    printf("text length: %i\n", text_length);
    printf("ciphertext: "); 
    //encipher text
    // Cipher key : YTNSHKVEFXRBAUQZCLWDMIPGJO
  for (counter4 = 0; counter4 < text_length; counter4++)
    {
       for (counter5=0; counter5 < 26; counter5++)
       {
           if (isupper(text[counter4]))
           printf ("%c",(argv[1][counter4]));
       }

        printf("\n");
        return 0;
    }
    

}
