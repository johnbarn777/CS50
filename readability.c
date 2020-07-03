#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(void)
{
    string text = get_string("Text :");
    int letters = 0;
    int words = 1;
    int sentences=0;
    
    for (int i=0; i <strlen(text); i++)
    {
        if ((64 < text[i] && text[i] < 91) || (96 < text[i] && text[i] < 123))
        {
            letters++;
            
        }
        if (text[i] == 32)
        {
            words++;
        }
        if (text[i] == 46 || text[i] == 63 || text[i] == 33)
        {
            sentences++;
        }
       
    }
    float L = (float)letters*100/words;
    float S =(float)sentences*100/words;
    float index = 0.0588 * L - 0.296 * S - 15.8;
        
    if(1<index &&index <16)
    {
        printf("Grade %.f\n",index);
        }
        if(index<1)
        {
            printf("Before Grade 1\n");
        }
        if(index>=16)
        {
            printf("Grade 16+\n");
        }
    
}