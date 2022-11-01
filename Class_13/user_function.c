#include <stdio.h>
char dialogs(); //funkcijas deklarēšana
		//funkcijas definēšana
		//def var but pec main
		//parskatamak ir ja dek ir pirms main un def ir pēc

		// void nozimen ka return nebūs( nozime ka tas izplda darbības un atpakaļ neko neatgriež

int main()	//
{
	char c_main_local;
	c_main_local = 10;
	printf("c_main_local befor dialog= %d\n", c_main_local);
	c_main_local = dialogs();
	printf("c_main_local after dialog= %d\n", c_main_local);
    return 0;
}

char dialogs() 
{
	char c_dialogs_local = 10;
	printf("Enter a thing:");
	scanf("%hhd", &c_dialogs_local);
	printf("c_dialogs_local = %d\n", c_dialogs_local);

	return c_dialogs_local;
}
