#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ṹ����ָ��
struct Stu
{
	char ID[20];
	char name[10];
	char gener[10];

};//��ʹ��������typedef�ؼ�����structǰ��������{}���ķֺ�ǰд���������ַ���
void print(struct Stu* ps) {
	printf("%s %s %s\n", (*ps).name, (*ps).ID, (*ps).gener);
	printf("%s %s %s \n", ps->gener, ps->ID, ps->name);//�ṹ��ָ�������,�����鷳����
}
int main() {
	struct Stu e = { "202230000613"," wonwoo"," boy"};
	print(&e);
}