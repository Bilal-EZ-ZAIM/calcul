#include <stdio.h>
#include <math.h>

// Challenge  :  Calculatrice
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================  Calculatrice  ================================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();

    int x;
    float a, b, some;

    do
    {

        printf("1. + \n");
        printf("2. - \n");
        printf("3. * \n");
        printf("4. / \n");
        printf("5. carrée X^Y\n");
        printf("6. la racine \n");
        printf("7. stop le calculatrice \n");
        printf("ecrir le operator : ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            printf("les operator est + \n");
            printf("entre le a : ");
            scanf("%f", &a);
            printf("entre le b : ");
            scanf("%f", &b);
            some = a + b;
            printf("%.2f + %.2f = %.2f\n", a, b, some);
            break;
        case 2:
            printf("les operator est - \n");
            printf("entre le a : ");
            scanf("%f", &a);
            printf("entre le b : ");
            scanf("%f", &b);
            some = a - b;
            printf("%.2f - %.2f = %.2f\n", a, b, some);
            break;
        case 3:
            printf("les operator est * \n");
            printf("entre le a : ");
            scanf("%f", &a);
            printf("entre le b : ");
            scanf("%f", &b);
            some = a * b;
            printf("%.2f * %.2f = %.2f\n", a, b, some);
            break;
        case 4:
            printf("les operator est / \n");
            printf("entre le a : ");
            scanf("%f", &a);
            printf("entre le b : ");
            scanf("%f", &b);
            some = a / b;
            printf("%.2f / %.2f = %.2f\n", a, b, some);
            break;
        case 5:
            printf("les operator est carrée X^Y \n");
            printf("entre le a : ");
            scanf("%f", &a);
            printf("entre le b : ");
            scanf("%f", &b);
            some = pow(a, b);
            printf("%.0f ^ %.0f = %.0f\n", a, b, some);
            break;
        case 6:
            printf("les operator est la racine \n");
            printf("entre le a : ");
            scanf("%f", &a);
            some = sqrt(a);
            printf("la racin de %d = %d\n", (int)a ,(int)some);
            break;
        case 7:
            return 0;
        default:
            break;
        }

    } while (1);

    return 0;
}
