
#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <sys/stat.h>
void six(const char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
        fflush(stdout);
        usleep(5000);
    }
}
void clear()
{
system("clear");
	}
void addcoin(int *data)
{
	FILE *file1 = fopen("database/coin.bin", "rb");
    int num1 = getw(file1);
    int num2 = data;
	int num = num1 + num2;
	fclose(file1);
    FILE *file = fopen("database/coin.bin", "wb");
    putw(num, file);
    fclose(file);
    return 0;
    }
void coinx()
{
	FILE *file = fopen("database/coin.bin", "rb");
    int num = getw(file);
    fclose(file);
    printf("%d\n", num);
    return 0;
}
void nam()
	{
   FILE *fp;
   char text[100];
   fp = fopen("database/name.txt", "r");
   while (fgets(text, 100, fp) != NULL) {
    printf("%s", text);}
    fclose(fp);
  	}
int main() {
   FILE *fp;
   FILE *fp1;
   char coin[] = "database/coin.txt";
   char name[] = "database/name.txt";
   char text[100];
   int menu;
six("[1] My Profile\n\n[2] Daily Bonus\n\n");
   six("Enter Menu Number : ");
   scanf("%d",&menu);
   switch(menu)
    {
    	case 1:
    	clear();
    	printf("                ");
    	six("My Profile\n\n");
    	six("Username: ");
        nam();
        six("\n\nTotal Coin : ");
        coinx1();
        break;
        case 2:
        six("1000 Coin Add To Your	Account");
       printf("\n\nPreveous Coin : "); 
       coinx();
      printf("\n\nCurrent Coin : ");
       addcoin(1000);
       coinx();
    }
 }
