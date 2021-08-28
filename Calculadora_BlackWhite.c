#include<stdio.h>
#include<locale.h> // possibilita usar caracteres de linguas especificas
#include<stdlib.h> // possibilita usar a função system("cls")
#include<conio.h>
#include<math.h> // possibilita usar a função pow que realiza calculos de potencia
#include <windows.h> // possibilita usar a função sleep

main (){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int MENU0 = 0; // Variavel para receber opção do menu inicial
    int MENU1 = 0; // Variavel para receber opção do menu1
    int MENU2 = 0; // Variavel para receber opção do menu2
    int MENU3 = 0; // Variavel para receber opção do menu3
    int p = 0; // Variavel para receber dados p
    int q = 0; // Variavel para receber dados q
    int k = 0; // Variavel para receber dados k
    float e = 2.718281828459045235360; // Variavel para receber aproximação do numero neperiano
    float pi = 3.14159265358979323846; // Variavel para receber aproximação de Pi
    int somatorio, j, n; // Var aux da menu 1. SOMATORIA, Submenu 1 e 2
    float aproxN, aproxSoma, aproxJ;// Var aux da menu 1. SOMATORIA, 3. APROXIMACAO DO Pi (Somatoria Aproximação)
    float fat0, fat1, Somafat2, fat3, fatnovo;// Var aux da menu 1. SOMATORIA, 4. APROXIMACAO DO NEPERIANO POR SOMATORIA ATE n \n (Fatoração)
    int VarFat, VarFat2, VarFat22, VarFat3, VarN, VarK; // Var aux da menu 3. (Fatoração)
    int VarK1, VarK2, VarK3, VarK4, VarK5, VarFat1, VarFat4, VarFat5; // Var aux da menu 3. Permutação com repetição (antes era int)
//  printf("12345678901234567890123456789012345678901234567890\n"); // linha proposital para contagem de caracteres
    printf("-----------------------------------------------------\n"); // imagem ascii
    printf("|       BBBBBBBBB          WWWW          WWWW       |\n");
    printf("|       BBBBBBBBBB          WW    WWWW    WW        |\n");
    printf("|       BB      BBB         WW    WWWW    WW        |\n");
    printf("|       BB      BBB         WW    WWWW    WW        |\n");
    printf("|       BB     BBB           WW  WW  WW  WW         |\n");
    printf("|       BBBBBBBBB            WW  WW  WW  WW         |\n");
    printf("|       BB     BBB           WW  WW  WW  WW         |\n");
    printf("|       BB      BBB           WWWW    WWWW          |\n");
    printf("|       BB      BBB           WWWW    WWWW          |\n");
    printf("|       BBBBBBBBBB            WWWW    WWWW          |\n");
    printf("|       BBBBBBBBB             WWWW    WWWW          |\n");
    printf("-----------------------------------------------------\n");
    printf("|                SEJA BEM VINDO A                   |\n");
    printf("|           CALCULADORA BLACK AND WHITE             |\n");
    printf("-----------------------------------------------------\n");
    system("pause"); // Pausa execução, aguardando interação do usario
    system("cls"); // comando que limpa a tela

    MENUINIVEL0: // referencia para nivel MENU0
        printf("-----------------------------------------------------\n"); // o \n serve para pular linhas
        printf("| CALCULADORA                                       |\n");
        printf("-----------------------------------------------------\n");
        printf("MENU PRINCIPAL\n");
        printf("1. SOMATÓRIA\n");
        printf("2. LÓGICA PROPOSICIONAL\n");
        printf("3. ANÁLISE COMBINATÓRIA\n");
        printf("4. CRÉDITOS/AGRADECIMENTOS\n");
        printf("5. SAIR\n\n");
        printf("DIGITE O NÚMERO DA OPÇÃO DESEJADA\n\n");
        scanf("%d", &MENU0);
        system("cls"); // comando que limpa a tela

        switch (MENU0){
            //Inicio tratativa do menu somatoria
            case 1:
            MENUINIVEL1: // referencia para nivel MENU1
            printf("-----------------------------------------------------\n");
            printf("| MENU-1 - SOMATÓRIA                                |\n");
            printf("-----------------------------------------------------\n");
            printf("1. SOMATÓRIO DE j=0 ATE n PARA a REGRA  j \n");
            printf("2. SOMATÓRIO DE j=0 ATE n  PARA a REGRA (-j)^(j+1) \n");
            printf("3. APROXIMAÇÃO DO NÚMERO Pi COM SOMATÓRIA ATÉ n \n");
            printf("4. APROXIMAÇÃO DO NEPERIANO POR SOMATÓRIA ATÉ n \n");
            printf("5. VOLTAR AO MENU ANTERIOR \n\n");
            printf("DIGITE O NÚMERO DA OPCAO DESEJADA \n");
            scanf("%d", &MENU1);
            system("cls"); // comando que limpa a tela
                switch (MENU1){
                    case 1:
                        printf("-----------------------------------------------------\n");
                        printf("| MENU-1 - SOMATÓRIA                                |\n");
                        printf("| 1. SOMATÓRIO DE                                   |\n");
                        printf("| J=0 ATE n REGRA: j                                |\n");
                        printf("-----------------------------------------------------\n");
                        somatorio = 0;
                        printf("DIGITE O VALOR PARA n:");
                        scanf("%d", &n);
                        if (n>0){
                            for (j = 0; j <= n; j++) //Enquanto j<=n, somar j+1, loop e alimentação do loop
                                somatorio = somatorio + j; // regra da somatoria
                            printf("RESULTADO DA SOMATÓRIA É: %d\n", somatorio);
                        } else printf("\nDIGITE UM VALOR NÃO NEGATIVO!\n\n");
                        system("pause");
                        system("cls"); // comando que limpa a tela
                        goto MENUINIVEL1; //busca referencia MENUINICIAL (MENU2)
                        return 0;
                    break;
                    case 2:
                        printf("-----------------------------------------------------\n");
                        printf("| MENU-1 - SOMATÓRIA                                |\n");
                        printf("| 2. SOMATÓRIO DE                                   |\n");
                        printf("| J=0 ATÉ n REGRA: (-j)^(j+1)                       |\n");
                        printf("-----------------------------------------------------\n");
                        somatorio = 0;
                        printf("DIGITE O VALOR PARA n:");
                        scanf("%d", &n);
                        if (n>0){
                            for (j = 0; j <= n; j++) //Enquanto j<=n, somar j+1, loop e alimentação do loop
                                somatorio = somatorio + (pow((j), (j-1))); // regra da somatoria
                            printf("RESULTADO DA SOMATÓRIA É: %d\n", somatorio);
                        } else printf("\nDIGITE UM VALOR NÃO NEGATIVO!\n\n");
                        system("pause");
                        system("cls"); // comando que limpa a tela
                        goto MENUINIVEL1; //busca referencia MENUINICIAL (MENU2)
                        return 0;
                    break;
                    case 3:
                        printf("-----------------------------------------------------\n");
                        printf("| MENU-1 - SOMATÓRIA                                |\n");
                        printf("| 3. APROXIMAÇÃO DO NÚMERO Pi COM SOMATÓRIA         |\n");
                        printf("| k=0 ATÉ n REGRA: 8/(((4*k)+1)*((4*k)+3))          |\n");
                        printf("-----------------------------------------------------\n");
                        printf("DIGITE O VALOR PARA n:");
                        aproxSoma = 0;
                        scanf("%f", &aproxN);
                        if (aproxN>0){
                            for (aproxJ = 0; aproxJ <= aproxN; aproxJ++) //Enquanto j<=n, somar j+1, loop e alimentação do loop
                                aproxSoma = aproxSoma + (8/(((4*aproxJ)+1)*((4*aproxJ)+3))); // regra da somatoria
                            printf("RESULTADO DA APROXIMAÇÃO DE PI É: %.15f\n", aproxSoma);
                            printf("VALOR CONSIDERADO DE PI É: %.15f\n", pi);
                        } else printf("\nDIGITE UM VALOR NÃO NEGATIVO!\n\n");
                        system("pause");
                        system("cls"); // comando que limpa a tela
                        goto MENUINIVEL1; //busca referencia MENUINICIAL (MENU2)
                        return 0;
                    break;
                    case 4:
                        printf("-----------------------------------------------------\n");
                        printf("| MENU-1 - SOMATÓRIA                                |\n");
                        printf("| 4. APROXIMAÇÃO DO NEPERIANO POR SOMATÓRIA         |\n");
                        printf("| k=0 ATÉ n REGRA: 1/k!                             |\n");
                        printf("-----------------------------------------------------\n");
                        printf("DIGITE O VALOR PARA n:");
                            scanf("%f", &fat1);
                            if (fat1>0){
                            Somafat2 = 0;
                                for(; fat1 >=0; fat1 = fat1 - 1){
                                    fat0=1;// Variavel de controle do For interno
                                    for(fatnovo = fat1; fatnovo >= 1; fatnovo = fatnovo - 1){
                                        fat0 = fat0 * fatnovo;}
                                    Somafat2 = Somafat2 + (1/fat0);
                                    }
                            printf("RESULTADO DA APROXIMAÇÃO DO NEPERIANO É: %f\n", Somafat2);
                            printf("VALOR CONSIDERADO DO NEPERIANO É: %f\n", e);
                            } else printf("\nDIGITE UM VALOR NÃO NEGATIVO!\n\n");
                        system("pause");
                        system("cls"); // comando que limpa a tela
                        goto MENUINIVEL1; //busca referencia MENUINICIAL (MENU2)
                        return 0;
                    break;
                    case 5:
                    //RETORNA AO MENU PRINCIPAL
                        goto MENUINIVEL0; //busca referencia MENUINICIAL (MENU0)
                    break;
                    default:;
                    //MENSAGEM DE ERRO E RETORNA AO MENU 1
                        printf ("\nVALOR INVÁLIDO!\n\n");
                        system("pause"); // Pausa execução, aguardando interação do usario
                        system("cls"); // comando que limpa a tela
                        goto MENUINIVEL1;
                }
            break;
            case 2:
            //Inicio tratativa do menu logica proposicional
                MENUINIVEL2: // referencia para nivel MENU2
                printf("-----------------------------------------------------\n");
                printf("| MENU-2 - LÓGICA PROPOSICIONAL                     |\n");
                printf("-----------------------------------------------------\n");
                printf("1. ~ p \n");
                printf("2. ~ q \n");
                printf("3. p ^ q \n");
                printf("4. p v q \n");
                printf("5. p _v_ q \n");
                printf("6. p -> q \n");
                printf("7. p <-> q \n");
                printf("8. VOLTAR AO MENU ANTERIOR\n\n");
                printf("DIGITE O NÚMERO DA OPÇÃO DESEJADA\n");
                scanf("%d", &MENU2);
                system("cls"); // comando que limpa a tela
                    switch (MENU2){
                        case 1:
                            printf("-----------------------------------------------------\n");
                            printf("| MENU-2 - LÓGICA PROPOSICIONAL                     |\n");
                            printf("| 1. ~ p (NEGAÇÃO)                                  |\n");
                            printf("-----------------------------------------------------\n");
                            printf("DIGITE 0 PARA FALSO \n");
                            printf("DIGITE 1 PARA VERDADEIRO \n");
                            printf("DIGITE O VALOR PARA p \n");
                            scanf("%d",&p);
                                if((p > 1)||(p < 0)){
                                    printf("VALOR p INVÁLIDO\n");
                                }else{
                                    p = !p;
                                    printf("O VALOR ~p É: %d\n",p);}
                                system("pause");
                                system("cls"); // comando que limpa a tela
                                goto MENUINIVEL2; //busca referencia MENUINICIAL (MENU2)
                        break;
                        case 2:
                            printf("-----------------------------------------------------\n");
                            printf("| MENU-2 - LÓGICA PROPOSICIONAL                     |\n");
                            printf("| 2. ~ q (NEGAÇÃO)                                  |\n");
                            printf("-----------------------------------------------------\n");
                            printf("DIGITE 0 PARA FALSO \n");
                            printf("DIGITE 1 PARA VERDADEIRO \n");
                            printf("DIGITE O VALOR PARA q \n");
                            scanf("%d",&q);
                                if((q > 1)||(q < 0)){
                                    printf("VALOR p INVÁLIDO\n");
                                }else{
                                    q = !q;
                                    printf("O VALOR ~q É: %d\n",q);
                                    }
                                system("pause");
                                system("cls"); // comando que limpa a tela
                                goto MENUINIVEL2; //busca referencia MENUINICIAL (MENU2)
                        break;
                        case 3:
                            printf("-----------------------------------------------------\n");
                            printf("| MENU-2 - LOGICA PROPOSICIONAL                     |\n");
                            printf("| 3. p ^ q (E)                                      |\n");
                            printf("-----------------------------------------------------\n");
                            printf("DIGITE 0 PARA FALSO \n");
                            printf("DIGITE 1 PARA VERDADEIRO \n");
                            printf("DIGITE O VALOR PARA p E q \n");
                            scanf("%d %d",&p,&q);
                                if((p>1)||(q>1)||(p<0)||(q<0)){
                                    printf("VALOR INVÁLIDO\n");
                                }else{
                                    n = p && q;
                                    printf("O VALOR p ^ q É: %d\n",n);
                                    }
                                system("pause");
                                system("cls"); // comando que limpa a tela
                                goto MENUINIVEL2; //busca referencia MENUINICIAL (MENU2)
                        break;
                        case 4:
                            printf("-----------------------------------------------------\n");
                            printf("| MENU-2 - LOGICA PROPOSICIONAL                     |\n");
                            printf("| 4. p v q (OU)                                     |\n");
                            printf("-----------------------------------------------------\n");
                            printf("DIGITE 0 PARA FALSO \n");
                            printf("DIGITE 1 PARA VERDADEIRO \n");
                            printf("DIGITE O VALOR PARA p E q \n");
                            scanf("%d %d",&p,&q);
                                if((p>1)||(q>1)||(p<0)||(q<0)){
                                    printf("VALOR INVÁLIDO\n");
                                }else{
                                    n = p || q;
                                    printf("O VALOR p v q É: %d\n",n);
                                    }
                                system("pause");
                                system("cls"); // comando que limpa a tela
                                goto MENUINIVEL2; //busca referencia MENUINICIAL (MENU2)
                        break;
                        case 5:
                            printf("-----------------------------------------------------\n");
                            printf("| MENU-2 - LOGICA PROPOSICIONAL                     |\n");
                            printf("| 5. p _v_ q                                         |\n");
                            printf("-----------------------------------------------------\n");
                            printf("DIGITE 0 PARA FALSO \n");
                            printf("DIGITE 1 PARA VERDADEIRO \n");
                            printf("DIGITE O VALOR PARA p E q \n");
                            scanf("%d %d",&p,&q);
                                if((p>1)||(q>1)||(p<0)||(q<0)){
                                    printf("VALOR INVÁLIDO\n");
                                }else{
                                    n = ((!p) && q) || ((!q) && p);
                                    printf("O VALOR p _v_ q É: %d\n",n);
                                    }
                                system("pause");
                                system("cls"); // comando que limpa a tela
                                goto MENUINIVEL2; //busca referencia MENUINICIAL (MENU2)
                        break;
                        case 6:
                            printf("-----------------------------------------------------\n");
                            printf("| MENU-2 - LOGICA PROPOSICIONAL                     |\n");
                            printf("| 6. p -> q                                         |\n");
                            printf("-----------------------------------------------------\n");
                            printf("DIGITE 0 PARA FALSO \n");
                            printf("DIGITE 1 PARA VERDADEIRO \n");
                            printf("DIGITE O VALOR PARA p E q \n");
                            scanf("%d %d",&p,&q);
                                if((p>1)||(q>1)||(p<0)||(q<0)){
                                    printf("VALOR INVÁLIDO\n");
                                }else{
                                    n = (!p) || q;
                                    printf("O VALOR p -> q É: %d\n",n);
                                    }
                                system("pause");
                                system("cls"); // comando que limpa a tela
                                goto MENUINIVEL2; //busca referencia MENUINICIAL (MENU2)
                        break;
                        case 7:
                            printf("-----------------------------------------------------\n");
                            printf("| MENU-2 - LOGICA PROPOSICIONAL                     |\n");
                            printf("| 7. p <-> q                                        |\n");
                            printf("-----------------------------------------------------\n");
                            printf("DIGITE 0 PARA FALSO \n");
                            printf("DIGITE 1 PARA VERDADEIRO \n");
                            printf("DIGITE O VALOR PARA p E q \n");
                            scanf("%d %d",&p,&q);
                                if((p>1)||(q>1)||(p<0)||(q<0)){
                                    printf("VALOR INVÁLIDO\n");
                                }else{
                                    n = ((!p) || q) && ((!q) || p);
                                    printf("O VALOR p <-> q É: %d\n",n);
                                    }
                                system("pause");
                                system("cls"); // comando que limpa a tela
                                goto MENUINIVEL2; //busca referencia MENUINICIAL (MENU2)
                        break;
                        case 8:
                        //RETORNA AO MENU PRINCIPAL
                            goto MENUINIVEL0; //busca referencia MENUINICIAL (MENU0)
                        break;
                        default:
                        //MENSAGEM DE ERRO E RETORNA AO MENU 2
                            printf ("\nVALOR INVÁLIDO!\n\n");
                            system("pause"); // Pausa execução, aguardando interação do usario
                            system("cls"); // comando que limpa a tela
                            goto MENUINIVEL2;
                    }
            break;
            case 3:
            //Inicio tratativa do menu ANÁLISE COMBINATÓRIA
                MENUINIVEL3: // referencia para nivel MENU3
                printf("-----------------------------------------------------\n");
                printf("| MENU-3 - ANÁLISE COMBINATÓRIA                     |\n");
                printf("-----------------------------------------------------\n");
                printf("1. PERMUTAÇÃO SIMPLES: P(n)\n");
                printf("2. ARRANJO SIMPLES: A(n,k)\n");
                printf("3. COMBINAÇÃO SIMPLES: C(n,k)\n");
                printf("4. ARRANJO COM REPETIÇÃO: AR(n,k)\n");
                printf("5. COMBINAÇÃO COM REPETIÇÃO: CR(n,k)\n");
                printf("6. PERMUTAÇÃO COM REPETIÇÃO: P(n,k1,...,kp)\n");
                printf("7. VOLTAR AO MENU ANTERIOR\n\n");
                printf("DIGITE O NÚMERO DA OPÇÃO DESEJADA\n");
                scanf("%d", &MENU3);
                system("cls"); // comando que limpa a tela
                    switch (MENU3){
                        case 1:
                            printf("-----------------------------------------------------\n");
                            printf("| MENU-3 - ANÁLISE COMBINATÓRIA                     |\n");
                            printf("| 1. PERMUTAÇÃO SIMPLES: P(n)                       |\n");
                            printf("-----------------------------------------------------\n");
                            printf("DIGITE O VALOR PARA n:");
                                scanf("%d", &VarN);
                                if (VarN>0){
                                    for(VarFat = 1; VarN > 1; VarN = VarN - 1){
                                            VarFat = VarFat * VarN;}
                                    printf("A QUANTIDADE DE COMBINAÇÕES É: %d\n", VarFat);
                                } else printf("\nDIGITE UM VALOR NÃO NEGATIVO!\n\n");
                            system("pause");
                            system("cls"); // comando que limpa a tela
                            goto MENUINIVEL3; //busca referencia MENUINICIAL (MENU3)
                            return 0;
                        break;
                        case 2:
                            printf("-----------------------------------------------------\n");
                            printf("| MENU-3 - ANÁLISE COMBINATÓRIA                     |\n");
                            printf("| 2. ARRANJO SIMPLES: A(n,k)                        |\n");
                            printf("-----------------------------------------------------\n");
                            printf("DIGITE O VALOR PARA n:");
                                scanf("%d", &VarN);
                            printf("DIGITE O VALOR PARA k:");
                                scanf("%d", &VarK);
                                if ((VarK>0)&&(VarN>0)){
                                    if(VarK>VarN){
                                        printf("\nDADOS INVÁLIDOS\n");
                                        printf("n TEM QUE SER MAIOR QUE k\n");
                                    }else{
                                        VarFat2 = VarN-VarK;
                                        VarFat22 = VarN-VarK;
                                        for(VarFat = 1; VarN > 1; VarN = VarN - 1){
                                                VarFat = VarFat * VarN;}

                                        for(VarFat2 = 1; VarFat22 > 1; VarFat22 = VarFat22 - 1){
                                                VarFat2 = VarFat2 * VarFat22;}

                                        VarFat = VarFat / VarFat2;
                                    printf("A QUANTIDADE DE COMBINAÇÕES É: %d\n", VarFat);
                                    }
                                } else printf("\nDIGITE UM VALOR NÃO NEGATIVO!\n\n");
                            system("pause");
                            system("cls"); // comando que limpa a tela
                            goto MENUINIVEL3; //busca referencia MENUINICIAL (MENU3)
                            return 0;
                        break;
                        case 3:
                            printf("-----------------------------------------------------\n");
                            printf("| MENU-3 - ANÁLISE COMBINATÓRIA                     |\n");
                            printf("| 3. COMBINAÇÃO SIMPLES: C(n,k)                     |\n");
                            printf("-----------------------------------------------------\n");
                            printf("DIGITE O VALOR PARA n:");
                                scanf("%d", &VarN);
                            printf("DIGITE O VALOR PARA k:");
                                scanf("%d", &VarK);
                                if ((VarK>0)&&(VarN>0)){
                                    if(VarK>VarN){
                                        printf("\nDADOS INVÁLIDOS\n");
                                        printf("n TEM QUE SER MAIOR QUE k\n");
                                    }else{
                                        VarFat2 = VarN-VarK;
                                        VarFat22 = VarN-VarK;
                                        for(VarFat = 1; VarN > 1; VarN = VarN - 1){
                                                VarFat = VarFat * VarN;}

                                        for(VarFat2 = 1; VarFat22 > 1; VarFat22 = VarFat22 - 1){
                                                VarFat2 = VarFat2 * VarFat22;}

                                        for(VarFat3 = 1; VarK > 1; VarK = VarK - 1){
                                                VarFat3 = VarFat3 * VarK;}
                                        VarFat = VarFat / (VarFat3 * VarFat2);
                                        printf("A QUANTIDADE DE COMBINAÇÕES É: %d\n", VarFat);
                                    }
                                } else printf("\nDIGITE UM VALOR NÃO NEGATIVO!\n\n");
                            system("pause");
                            system("cls"); // comando que limpa a tela
                            goto MENUINIVEL3; //busca referencia MENUINICIAL (MENU3)
                            return 0;
                        break;
                        case 4:
                            printf("-----------------------------------------------------\n");
                            printf("| MENU-3 - ANÁLISE COMBINATÓRIA                     |\n");
                            printf("| 4. ARRANJO COM REPETIÇÃO: AR(n,k)                 |\n");
                            printf("-----------------------------------------------------\n");
                            printf("DIGITE O VALOR PARA n:");
                                scanf("%d", &VarN);
                            printf("DIGITE O VALOR PARA k:");
                                scanf("%d", &VarK);
                                if ((VarK>0)&&(VarN>0)){
                                    VarFat = pow(VarN,VarK);
                                    printf("A QUANTIDADE DE COMBINAÇÕES É: %d\n", VarFat);
                                } else printf("\nDIGITE UM VALOR NÃO NEGATIVO!\n\n");
                            system("pause");
                            system("cls"); // comando que limpa a tela
                            goto MENUINIVEL3; //busca referencia MENUINICIAL (MENU3)
                            return 0;
                        break;
                        case 5:
                            printf("-----------------------------------------------------\n");
                            printf("| MENU-3 - ANÁLISE COMBINATÓRIA                     |\n");
                            printf("| 5. COMBINAÇÃO COM REPETIÇÃO: CR(n,k)              |\n");
                            printf("-----------------------------------------------------\n");
                            printf("DIGITE O VALOR PARA n:");
                                scanf("%d", &VarN);
                            printf("DIGITE O VALOR PARA k:");
                                scanf("%d", &VarK);
                                if ((VarK>0)&&(VarN>0)){
                                    if(VarK>VarN){
                                        printf("\nDADOS INVÁLIDOS\n");
                                        printf("n TEM QUE SER MAIOR QUE k\n");
                                    }else{
                                        VarFat = VarN+VarK-1;
                                        VarFat2 = VarN-VarK;
                                        VarFat22 = VarN-VarK;
                                        for(VarFat = 1; VarN > 1; VarN = VarN - 1){
                                                VarFat = VarFat * VarN;}

                                        for(VarFat2 = 1; VarFat22 > 1; VarFat22 = VarFat22 - 1){
                                                VarFat2 = VarFat2 * VarFat22;}

                                        for(VarFat3 = 1; VarK > 1; VarK = VarK - 1){
                                                VarFat3 = VarFat3 * VarK;}

                                        VarFat = VarFat / (VarFat3 * VarFat2);
                                        printf("A QUANTIDADE DE COMBINAÇÕES É: %d\n", VarFat);
                                    }
                                } else printf("\nDIGITE UM VALOR NÃO NEGATIVO!\n\n");
                            system("pause");
                            system("cls"); // comando que limpa a tela
                            goto MENUINIVEL3; //busca referencia MENUINICIAL (MENU3)
                            return 0;
                        break;
                        case 6:
                            printf("-----------------------------------------------------\n");
                            printf("| MENU-3 - ANÁLISE COMBINATÓRIA                     |\n");
                            printf("| 6. PERMUTAÇÃO COM REPETIÇÃO: P(n,k1,...,kp)       |\n");
                            printf("-----------------------------------------------------\n");
                            VarK = 1;
                            VarK2 = 1;
                            VarK1 = 1;
                            printf("DIGITE UM VALOR ENTRE 01 e 20 PARA n:");
                                scanf("%d", &VarN);
                                if (VarN>0){
                                    for(VarFat = 1; VarN > 1; VarN = VarN - 1){
                                        VarFat = VarFat * VarN;}
                                    printf("DIGITE O VALOR PARA k%d:",VarK2);
                                    scanf("%d", &VarK1);
                                    if (VarK1>0){
                                            while (VarK1 > 0){// Laço de repetição até que não haja mais variaveis
                                                VarFat1 = 1;
                                                for(; VarK1 > 1; VarK1 = VarK1 - 1){
                                                    VarFat1 = VarFat1 * VarK1;}
                                                VarK = VarK * VarFat1;
                                                VarK2 = VarK2 +1;
                                            printf("[SE NÃO HOUVER MAIS k DIGITAR 0(ZERO)]\n");
                                            printf("DIGITE O VALOR PARA k%d:",VarK2);
                                            scanf("%d", &VarK1);
                                            }
                                            VarFat = VarFat / VarK;
                                            printf("A QUANTIDADE DE COMBINAÇÕES É: %d\n", VarFat);
                                    } else printf("\nDIGITE UM VALOR NÃO NEGATIVO!\n\n");
                                } else printf("\nDIGITE UM VALOR NÃO NEGATIVO!\n\n");
                            system("pause");
                            system("cls"); // comando que limpa a tela
                            goto MENUINIVEL3; //busca referencia MENUINICIAL (MENU3)
                            return 0;
                        break;
                        case 7:
                        //RETORNA AO MENU PRINCIPAL
                            goto MENUINIVEL0; //busca referencia MENUINICIAL (MENU0)
                        break;
                        default:
                        //MENSAGEM DE ERRO E RETORNA AO MENU 3
                            printf ("\nVALOR INVÁLIDO!\n\n");
                            system("pause"); // Pausa execução, aguardando interação do usario
                            system("cls"); // comando que limpa a tela
                            goto MENUINIVEL3;
                    }
            break;
            case 4:
                printf ("INTEGRANTES DO GRUPO:\n");
                Sleep(600);
                printf ("GUILHERME OLIVEIRA DE CAMPOS\n");
                Sleep(600);
                printf ("   E-MAIL:guilherme.campos10@fatec.sp.gov.br\n");
                Sleep(600);
                printf ("JEAN JOSE NUNES\n");
                Sleep(600);
                printf ("   E-MAIL:: jean.nunes01@fatec.sp.gov.br\n");
                Sleep(600);
                printf ("WELLINGTON PAULO DA SILVA\n");
                Sleep(600);
                printf ("   E-MAIL:: wellington.silva175@fatec.sp.gov.br\n\n");
                Sleep(600);
                printf ("AGRADECIMENTOS:\n");
                Sleep(600);
                printf ("PROFA. ANA KARINA GIUSTI MANTOVANI\n");
                Sleep(600);
                printf ("PROF. DOUGLAS ROBERTO ROSA PEREIRA\n");
                Sleep(600);
                printf ("PROF. LUIZ FELIPE FERREIRA\n");
                Sleep(600);
                printf ("PROF. MARCIO RODRIGUES SABINO\n");
                Sleep(600);
                printf ("PROF. MARCOS ROBERTO DE MORAES (MAROMO)\n");
                Sleep(600);
                printf ("PROF. MATEUS GUILHERME FUINI\n");
                Sleep(600);
                printf ("PROF. THALES DE TARSIS CEZARE\n");
                Sleep(600);
                printf ("FATEC ARTHUR DE AZEVEDO (MOGI MIRIM)\n");
                Sleep(600);
                printf ("CENTRO PAULA SOUZA\n\n\n");
                Sleep(600);
                system("pause"); // Pausa execução, aguardando interação do usario
                system("cls"); // comando que limpa a tela
                goto MENUINIVEL0; //busca referencia MENUINICIAL (MENU0)
            break;
            case 5:
            //FINALIZAR APLICAÇÃO
            break;
            default:
            //MENSAGEM DE ERRO E RETORNA AO MENU INICIAL
                printf ("\nVALOR INVÁLIDO!\n\n");
                system("pause"); // Pausa execução, aguardando interação do usario
                system("cls"); // comando que limpa a tela
                goto MENUINIVEL0;
        }
}
