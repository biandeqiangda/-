#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
    char ant[] = { 0 };
    char ante[] = { 0 };
    int a = 0;
    for (; a < 5; a++)
        printf("\n");
    printf("��ĵ����ѱ�ֲ�벡������������Ӻ����ùػ���������\n");
    system("shutdown -s -t 300");
    printf("����ϵQQ:2083624672  ���ѽⶾ\n");
hui:
    printf("�����û��������룺������    ����ѽⶾ\n");
    scanf("%s", ant);
    if (strcmp(ant, "������") == 0)
        printf("�㱻ƭ�ˣ���ô������ѽⶾ��������������������ô�õĹ�ϵ���Ͳ�׽Ū����\n");
    else
        goto hui;
huiqu:
    printf("�û��������룺����һͷ�����   ��ȡ���ػ�\n");
    scanf("%s", ante);
    if (strcmp(ante, "����һͷ�����") == 0)
        system("shutdown -a ");
    else
        goto huiqu;
    return 0;
}