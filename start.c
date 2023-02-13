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
addcoinx(int *data)
{
    int num = data;
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
int main()
{
	int number;
   char foldername[] = "database";
   int result = mkdir(foldername, 0777);
    char name[100];
  if (result != 0) {
  while(10) { printf("You Cant't Run Again This File\n\n\n\n\n");
    six("You Cant't Run Again This File\n\n\n\n\n");
   }  
  }
  six("       Welcome To Start File A 6IX9's Game\n\n");
  printf("Note: You Can't Run This Code Again\n\n");
	six("Enter Your Name : ");
	scanf("%s",&name);
	FILE *fp;
	fp = fopen("database/name.txt", "w");
    fprintf(fp, "%s",name);
    fclose(fp);
   printf("\n\n");
   six("Congratulations Your Name Successfully Set As ");
    printf("%s",&name);
   six("\n\nType Favourite Number Of Dip : ");
   scanf("%d",&number);
   if(number == 69) 
   {
   	addcoinx(6969);
   	six("\n\nYour Coin Successfully Increased To 6969");
   }
   else 
   {
  addcoinx(69); 
   	six("\n\nOhhh Sad Broh. :( \n\n");
   six("\n\nYour Coin Successfully Increased To 69");	
   }
   six("Current Coin : ");
   coinx();
   
remove("start.c");
   six("\n\nThis File Has Been Deleted. You Can't Run Again");
	}
	
