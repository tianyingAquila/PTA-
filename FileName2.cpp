/*L1-002 打印沙漏
本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印
*****
 ***
  *
 ***
*****
所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。

给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。

输入格式:
输入在一行给出1个正整数N（≤1000）和一个符号，中间以空格分隔。

输出格式:
首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。

输入样例:
19 *
输出样例:
*****
 ***
  *
 ***
*****
2
*/

//在新版Visual Stdio编译器中我需要避免4996警告，以下是我东拼西凑的解答，很庆幸它居然奇迹般的完成了任务
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    int tou;
    char fuhao;
    scanf("%d %c", &n, &fuhao);
    int nn = n - 1;
    for (int a = 6, b = 4, i = 1; nn >= a; i++, a = a + b)
    {
        nn = nn - a;
        tou = a / 2;
    }
    int quan = n - nn;
    int hang = 1;
    if (quan == 1)
    {
        printf("%c\n", fuhao);
        goto jieshu;
    }
    else
    {
        for (int i = 3, a = 6, b = 7, c = 4; quan - b >= 0; i = i + 2, a = a + c)
        {
            hang = i;
            b = b + a + c;
        }
    }
    for (int a = tou, i = 0; i < (hang + 1) / 2, a>0; i++, a = a - 2)
    {
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < a; j++)
        {
            printf("%c", fuhao);
        }
        printf("\n");
    }
    for (int a = 3, i = 0; i < (hang - 1) / 2; i++, a = a + 2)
    {
        for (int k = tou; k > a; k = k - 2)
        {
            printf(" ");
        }
        for (int j = 0; j < a; j++)
        {
            printf("%c", fuhao);
        }
        printf("\n");
    }
jieshu:
    printf("%d", nn);
    return 0;
}
