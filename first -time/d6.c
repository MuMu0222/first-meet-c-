#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//结构体与指针
struct Stu
{
	char ID[20];
	char name[10];
	char gener[10];

};//若使用重命名typedef关键字在struct前面则需在{}；的分号前写重命名的字符；
void print(struct Stu* ps) {
	printf("%s %s %s\n", (*ps).name, (*ps).ID, (*ps).gener);
	printf("%s %s %s \n", ps->gener, ps->ID, ps->name);//结构体指针操作符,减少麻烦操作
}
int main() {
	struct Stu e = { "202230000613"," wonwoo"," boy"};
	print(&e);
}