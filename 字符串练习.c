#include <stdio.h>
#include <string.h>  //�ṩstrlen()������ԭ��  
#define DENSITY 62.4 //�����ܶȣ���λ����/����Ӣ�ߣ� 
int main()
{
	float weight, volume;
	int size, letters;
	char name[40];
	printf("HI,What's your first name?\n");
	scanf("%s",name);     //¼������ 
	size = sizeof name;   //����sizeof��¼���ֳ���
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
char name[SIZE];//�����¼���ֵ�����
printf("Plz input your surname and your name\n");
scanf("%s %s", surname, name);//����������Ϊ�����׵�ַ�����û����� 
printf("Now I know your name : %s,%s\n",surname, name) ;
printf("You will have a friend named Xiao mimg �㻹���������ˣ�");
char friend[]="Xiao ming";
strcat( name,friend);//ʹfriend����name 
printf("����������:%s\n",name);
size = strlen(name);//����name�ĳ��� 
printf("your name size is:%d",size);
answer = strcmp(name,surname);//�Ƚ�name��surname�����name����surnam�򷵻ش���0��������0��С����С��0 
printf("so you r differen from the first:%d",answer);
}
