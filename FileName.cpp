/* L1 - 003 个位数统计
分数 15
作者 陈越
单位 浙江大学
给定一个 k 位整数 N，请编写程序统计每种不同的个位数字出现的次数。例如：给定 N=100311，则有 2 个 0，3 个 1，和 1 个 3。
    输入格式：
    每个输入包含 1 个测试用例，即一个不超过 1000 位的正整数 N。

    输出格式：
    对 N 中每一种不同的个位数字，以 D : M 的格式在一行中输出该位数字 D 及其在 N 中出现的次数 M。要求按 D 的升序输出。

    输入样例：
    100311
    输出样例：
    0 : 2
    1 : 3
    3 : 1
*/

//在VS新版本编译器中我一直要避免4996警告，如下是相对合理的解答
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char shuru[1000];
    int shuzi[10] = { 0 };
    int shu = 0;
    int a = 0;
    scanf("%s", &shuru);
    while (shuru[a] != '\0')
    {
        shu = shuru[a] - '0';
        shuzi[shu]++;
        a++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (shuzi[i] != 0) {
            printf("%d:%d\n", i, shuzi[i]);
        }
    }

    return 0;
}