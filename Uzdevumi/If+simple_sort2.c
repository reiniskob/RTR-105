
#include <stdio.h>

int main()
{
unsigned char x,y,z,c;

      printf("Enter 3 letters:");
      scanf(" %c %c %c",&x,&y,&z);    //pajauta 3 burtus
      printf("For alphabetica order enter \"a\" \nFor reverse alphabetical order enter \"r\"\n");
      scanf(" %c", &c); //pajauta secibu

      if(c == 97) //parbauda vai ievditais burts ir a
      {
            printf("\nAlphabetical order :");
            if(x <= y)					//salīdzina, un parāda pareizajā secībā
            {
                  if(x <= z)
                  {
                        printf("%c", x);
                        if(y <= z)
                        {
                              printf("%c%c\n", y, z);
                        }
                        else
                        {
                              printf("%c%c\n", z, y);
                        }
                  }
                  else
                  {     
                        printf("%c",z);
                        if(y <= x)
                        {
                              printf("%c%c\n", y, x);
                        }
                        else
                        {
                              printf("%c%c\n", x, y);   
                        }
                  }
            }
            else
            {
                  if(y <= z)
                  {
                        printf("%c", y);
                        if(x <= z)
                        {
                              printf("%c%c\n", x, z);
                        }
                        else
                        {
                              printf("%c%c\n", z, x);
                        }
                  }
                  else
                  {
                        printf("%c", z);
                        if(y <= x)
                        {
                              printf("%c%c\n", y, x);
                        }
                        else
                        {
                              printf("%c%c\n", x, y);     
                        }
                  }
            }
      }
      else
      {
            if((int)c == 114)   // parbauda vai ievaditais burts ir r
            {
                  printf("\nReverse alphabetical order:");
                  if(x >= y)			//salīdzina, un parāda pareizajā secībā
                  { 
                        if(x >= z)
                        {
                              printf("%c", x);
                              if(y >= z)
                              {
                                    printf("%c%c\n", y, z);
                              }
                              else
                              {
                                    printf("%c%c\n", z, y);
                              }
                        }
                        else
                        {     
                              printf("%c",z);
                              if(y >= x)
                              {
                                    printf("%c%c\n", y, x);
                              }
                              else
                              {
                                    printf("%c%c\n", x, y);   
                              }
                        }
                  }
                  else
                  {
                        if(y >= z)
                        {
                              printf("%c", y);
                              if(x >= z)
                              {
                                    printf("%c%c\n", x, z);
                              }
                              else
                              {
                                    printf("%c%c\n", z, x);
                              }
                        }
                        else
                        {
                              printf("%c", z);
                              if(y >= x)
                              {
                                    printf("%c%c\n", y, x);
                              }
                              else
                              {
                                    printf("%c%c\n", x, y);     
                              }
                        }
                  }
            }
            else
            {
                  printf("User didn't chose \"a\" or \"r\"\n"); 	//nepariezi ievadīts burts
            }
        
      }
    
    return 0;
}



