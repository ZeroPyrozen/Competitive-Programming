#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<Windows.h>
//Warteg

struct makanan
{
	char namaMakanan[100];
	int jumlahMakan;

}makan[1010];

void tampilkanJudul()
{
	printf("	\n");
	printf("                        .                      s                                     ..         ...    .     ...                                    s                           \n");
	printf("                       @88>                   :8                               x .d88\"       .~`\"888x.!**h.-``888h.                                :8                           \n");
	printf("     ...     ..        %8P      .u    .      .88       x.    .                  5888R       dX   `8888   :X   48888>                 .u    .      .88                           \n");
	printf("  :~""888h.:^\"888:      .     .d88B :@8c    :888ooo  .@88k  z88u         u      \'888R      \'888x  8888  X88.  '8888>        u      .d88B :@8c    :888ooo      .u         uL     \n");
	printf(" 8X   `8888X  8888>   .@88u  =\"8888f8888r -*8888888 ~\"8888 ^8888      us888u.    888R      '88888 8888X:8888:   )?\"\"`    us888u.  =\"8888f8888r -*8888888   ud8888.   .ue888Nc.. \n");
	printf("X888n. 8888X  ?888>  \'\'888E`   4888>\'88\"    8888      8888  888R   .@88 \"8888\"   888R       `8888>8888 \'88888>.88h.   .@88 \"8888\"   4888>\'88\"    8888    :888\'8888. d88E`\"888E` \n");
	printf("\'88888 8888X   ?**h.   888E    4888> \'      8888      8888  888R   9888  9888    888R         `8\" 888f  `8888>X88888. 9888  9888    4888> \'      8888    d888 \'88%%\" 888E  888E  \n");
	printf("  `*88 8888~ x88x.     888E    4888>        8888      8888  888R   9888  9888    888R        -~` \'8%\"     88\" `88888X 9888  9888    4888>        8888    8888.+\"    888E  888E  \n");
	printf(" ..<\"  88*`  88888X    888E   .d888L .+    .8888Lu=   8888 ,888B . 9888  9888    888R        .H888n.      XHn.  `*88! 9888  9888   .d888L .+    .8888Lu= 8888L      888E  888E  \n");
	printf("    ..XC.    `*8888k   888&   ^\"8888*\"     ^%%888*    \"8888Y 8888\"  9888  9888   .888B .     :88888888x..x88888X.  `!  9888  9888   ^\"8888*\"     ^%%888*   \'8888c. .+ 888& .888E  \n");
	printf("  :888888H.    `%%88>   R888\"     \"Y\"         \'Y\"      `Y\"   \'YP    \"888*\"\"888\"  ^*888%%      f  ^%%888888%% `*88888nx\"   \"888*\"\"888\"     \"Y\"         \'Y\"     \"88888%%   *888\" 888&  \n");
	printf(" <  `\"888888:    X\"     \"\"                                          ^Y\"   ^Y\'     \"%%             `\"**\"`    `\"**\"\"      ^Y\"   ^Y\'                            \"YP\'     `\"   \"888E \n");
	printf("       %%888888x.-`                                                                                                                                                  .dWi   `88E \n");
	printf("         \"\"**\"\"                                                                                                                                                     4888~  J8%%  \n");
	printf("                                                                                                                                                                     ^\"===*\"`   \n");
	printf("																																												\n");
	printf("																																												\n");
}
void aturUkuranWindow()
{
	HANDLE wHnd;    
	HANDLE rHnd;
	// Set up the handles for reading/writing:
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
	rHnd = GetStdHandle(STD_INPUT_HANDLE);
	// Change the window title:
	//SetConsoleTitle("Virtual Warteg");
	// Set up the required window size:
	SMALL_RECT windowSize = {0, 0, 4000, 4000};
	SetConsoleWindowInfo(wHnd, 1, &windowSize);
	// Change the console window size:
	// Create a COORD to hold the buffer size:
	COORD bufferSize = {4000, 4000};
	SetConsoleScreenBufferSize(wHnd, bufferSize);
	//SetConsoleDisplayMode(wHnd,CONSOLE_FULLSCREEN_MODE);
} 
void spacing()
{
	int i;
	for(i=0; i<25; i++)
		printf("\n");

}
int main()
{
	int menu;
	aturUkuranWindow();
	tampilkanJudul();
	printf("\t\t\tPress \"Enter\" to Continue...");
	getchar();
	do
	{
		system("cls");
		spacing();
		tampilkanJudul();
		printf("0. Exit\n");
		printf("Choose : ");
		scanf("%d",&menu);
		fflush(stdin);
	}while(menu!=0);
	getchar();
	return 0;
}