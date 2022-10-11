#include<stdio.h>

int main()
{
char a = 10;	//mainīgā deklarēšana - char a
			//
		//vērtības piešķiršana - a = 10
			// 10 - vesala tipa konstante
			// int - vesala tipa kostantēm
			// double  -reāla tipa konstantēm
		//1 byte: 0000 1010 
		//char a = 10; - mainīgā definēšana
		//mainīgā nosaukms nevar sākties ar skaitli vai saturēt atstarpes

printf("a mainīgā vētība (kā simbols): %c\n" ,a);
printf("a mainīgā vētība (kā decimāls skaitlis): %d\n" ,a);
printf("a mainīgā vētība (kā hexdecimāls): %#x\n" ,a);
printf("a mainīgā vētība (kā oktāls skaitlis): %#o\n\n" ,a);


//nedrīks pārdeklarēt mainīgo
char b;
printf("b mainīgā vētība pirms vērtības piešķiršanas: %c\n" ,b);
printf("b mainīgā vētība (kā decimāls skaitlis): %d\n" ,b);
printf("b mainīgā vētība (kā hexdecimāls): %#x\n" ,b);
printf("b mainīgā vētība (kā oktāls skaitlis): %#o\n" ,b);

b = 250;
// 250 vietā redzam -6, jo 250 (dec) = 128(2^7) + 32 + 16 + 8 + 2 -> (bin) 1111 1010
//char -> signed char => vecākais bits zīmei				 (1)111 1010
//								       ^ -> 000 1010
printf("b mainīgā vētība pirms vērtības piešķiršanas: %c\n" ,b);
printf("b mainīgā vētība (kā decimāls skaitlis): %d\n" ,b);
printf("b mainīgā vētība (kā hexdecimāls): %#x\n" ,b);
printf("b mainīgā vētība (kā oktāls skaitlis): %#o\n" ,b);

return 0;
}
