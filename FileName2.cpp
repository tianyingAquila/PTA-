/*L1-002 ��ӡɳ©
����Ҫ����д������Ѹ����ķ��Ŵ�ӡ��ɳ©����״���������17����*����Ҫ�����и�ʽ��ӡ
*****
 ***
  *
 ***
*****
��ν��ɳ©��״������ָÿ��������������ţ����з������Ķ��룻�������з�������2���������ȴӴ�С˳��ݼ���1���ٴ�С����˳���������β��������ȡ�

��������N�����ţ���һ�����������һ��ɳ©��Ҫ���ӡ����ɳ©���õ������ܶ�ķ��š�

�����ʽ:
������һ�и���1��������N����1000����һ�����ţ��м��Կո�ָ���

�����ʽ:
���ȴ�ӡ���ɸ���������ɵ�����ɳ©��״�������һ�������ʣ��û�õ��ķ�������

��������:
19 *
�������:
*****
 ***
  *
 ***
*****
2
*/

//���°�Visual Stdio������������Ҫ����4996���棬�������Ҷ�ƴ���յĽ�𣬺���������Ȼ�漣������������
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
