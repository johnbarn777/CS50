# include <cs50.h>
# include <string.h>
# include <stdio.h>
# include <ctype.h>

int main(int argc, string argv[])

{// argv checking
    for(int i=0; i<strlen(argv[1]); i++)
    {
    if (argc!=2 || argv[1][i]<65 || (argv[1][i]>90 && argv[1][i] <97) || argv[1][i]>122)
    {
        printf("Usage : ./substitution key\n");
        return 1;
    }
    else if(strlen(argv[1])<26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
        
    }
    
    }{// getting plaintext
        string message = get_string("plaintext :");
        //printing ciphertext
        printf("ciphertext: ");
        
        for(int j=0; j<strlen(message); j++)
        {for(int k=0; k<127; k++)
        {
            if ((int)message[j] == k)
            {
                if(k>64 && k<91)
                {
                    printf("%c",toupper(argv[1][k-65]));
                }
                else if(k>96 && k<123)
                {
                    printf("%c",tolower(argv[1][k-97]));
                }
                else
                printf("%c",message[j]);
            }
        }}
        
}return 1;}