#include <stdio.h>
#include <string.h>  //提供strlen()函数的原型  
#define DENSITY 62.4 //人体密度（单位：磅/立方英尺） 
int main()
{
	float weight, volume;
	int size, letters;
	char name[40];
	printf("HI,What's your first name?\n");
	scanf("%s",name);     //录入姓名 
	size = sizeof name;   //利用sizeof记录名字长度
	letters = strlen(name);
	volume = weight / DENSITY ;
	printf("Well, %s, your volume is %2.2f cubic feet ",name ,volume);
	printf("Also, your first name has %d letter, \n,", letters);
	printf("and we have %d bytes to store it. \n",size);
	return 0; 
}

#include <stdio.h>
#include <string.h>
#define SIZE 40
int main()
{
	int size,answer;
char surname[SIZE];
char name[SIZE];//定义记录名字的数组
printf("Plz input your surname and your name\n");
scanf("%s %s", surname, name);//用数组名作为数组首地址接受用户输入 
printf("Now I know your name : %s,%s\n",surname, name) ;
printf("You will have a friend named Xiao mimg 你还和他合体了！");
char friend[]="Xiao ming";
strcat( name,friend);//使friend接上name 
printf("现在你们是:%s\n",name);
size = strlen(name);//计算name的长度 
printf("your name size is:%d",size);
answer = strcmp(name,surname);//比较name和surname，如果name大于surnam则返回大于0，等于则0，小于则返小于0 
printf("so you r differen from the first:%d",answer);
}
