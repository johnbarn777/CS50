# include <stdio.h>
# include <cs50.h>
int digit(int i);
int digit1(int i);
long n;
int main(void)
{
    do
    {
        n = get_long("Card Number: ");
    }while(n<999999999999);

int checksum =digit(16)+digit(14)+digit(12)+digit(10)+digit(8)+digit(6)+digit(4)+digit(2);
checksum+= digit1(15)+ digit1(13)+digit1(11)+digit1(9)+digit1(7)+digit1(5)+digit1(3)+digit1(1);
checksum = checksum%10;
if (checksum==0)
{
    if(digit1(16)==5 && (digit1(15)==1||digit1(15)==2||digit1(15)==3||digit1(15)==4||digit1(15)==5))
    {
        printf("MASTERCARD\n");
    }
    else if(digit1(15)==3 && (digit1(14)==4 || digit(14)==7))
    {
        printf("AMEX\n");
    }
    else if(digit1(16)==4 || (digit1(16)==0 && digit1(15)==0 && digit1(14)==0 && digit1(13)==4))
    {
        printf("VISA\n");
    }
}
else
{
    printf("INVALID\n");
}
}




int digit(int i)
{long e=1;
   for (int j=0;j<i;j++)
   {
     e = e*10;
   }
   long m = n%e - (n % (e/10));
   m = m/(e/10);
   m = m*2;
   m = m%10 + (m-m%10)/10;
   return m;
}

int digit1(int i)
{long f = 1;
   for (int j=0;j<i;j++)
   {
     f = f*10;
   }
   long m = n%f - (n % (f/10));
   m = m/(f/10);
   
   return m;
}
