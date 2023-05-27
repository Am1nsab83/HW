#include <stdio.h>
int main()
{
    int done = 0, done2 = 0;
    char ch, ch2;
    do
    {
        printf("please enter the option you want:\n1.pay the bill\n2.used internet\n3.buy internet package\n4.buy voice call package\n5.exit\n");
        scanf(" %c", &ch);
        switch (ch)
        {
        case '1':
            do
            {
                printf("how do you wanna pay the bill?:\n1.paypal ( you are in iran though )\n2.*780#\n3.back ( pick me, please )\n");
                scanf(" %c", &ch2);
                switch (ch2)
                {
                case '3':
                    printf("thanks for picking the third option.\n");
                    done2 = 1;
                    break;
                default:
                    printf("sorry, im not programmed till this point, just exit and, yeah... hehe\n");
                    break;
                }
            } while (done2 != 1);
            done2 = 0;
            break;
        case '2':
            printf("so, Im an offline program, but anyways. do you wanna see it in Mb or MB?:\n1.Mb\n2.MB\n3.back( pick me, please )\n");
            scanf(" %c", &ch2);
            do
            {
                switch (ch2)
                {
                case '3':
                    printf("thanks for picking the third option.\n");
                    done2 = 1;
                    break;
                default:
                    printf("sorry, im not programmed till this point, just exit and, yeah... hehe\n");
                    break;
                }
            } while (done2 != 1);
            break;
        case '3':;
            printf("select one:\n1.1MB: 1M Rials\n2.1GB: 1B Rials\n3. back ( pick me, please )\n");
            scanf(" %c", &ch2);
            do
            {
                switch (ch2)
                {
                case '3':
                    printf("thanks for picking the third option.\n");
                    done2 = 1;
                    break;
                default:
                    printf("sorry, im not programmed till this point, just exit and, yeah... hehe\n");
                    break;
                }
            } while (done2 != 1);
            break;
        case '4':
            printf("select one ( who uses voice calling in 2023 anyways? )\n1.1H: 9000 Rials\n2.24H: 21000 Rials\n3.back ( pick me, please )\n");
            scanf(" %c", &ch2);
            do
            {
                switch (ch2)
                {
                case '3':
                    printf("thanks for picking the third option.\n");
                    done2 = 1;
                    break;
                default:
                    printf("sorry, im not programmed till this point, just exit and, yeah... hehe\n");
                    break;
                }
            } while (done2 != 1);
            break;
        case '5':
            done = 1;
            printf("thanks for using this program, please come back :)))).");
            break;
        }
    } while (done != 1);
    return 0;
}