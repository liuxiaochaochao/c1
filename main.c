#include <stdio.h>

int main()
{
    int qian = 0;
    printf("进入系统\n");

    while (1)
    {
        printf("1--存钱\n");
        printf("2--区钱\n");
        printf("3--余额\n");
        printf("4--退出\n");
        int a = 0;
        scanf("%d", &a);
        if (a == 1)
        {
            printf("进入存钱系统\n");
            int cun;
            scanf("%d", &cun);
            qian += cun;
            printf("存入成功\n");
            char x;
            scanf("%C", &x);
            scanf("%C", &x);
        }
        if (a == 2)
        {
            printf("进入取钱系统\n");
            int qu;
            scanf("%d", &qu);
            if (qian >= qu)
            {
                qian -= qu;
                printf("取出成功\n");
                char x;
                scanf("%C", &x);
                scanf("%C", &x);
            }
            else
            {
                printf("取款失败\n");
                char x;
                scanf("%C", &x);
                scanf("%C", &x);
            }
        }
        if (a == 3)
        {

            printf("余额%d", qian);

            char x;
            scanf("%C", &x);
            scanf("%C", &x);
        }
        if (a == 4)
        {
            printf("退出");
            break;
        }
    }

    return 0;
}