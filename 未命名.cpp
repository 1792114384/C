
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

void dayinqipan(char jiedian[3][3], int row, int col)
{
    int i = 0;
    int j = 0;
    int k = 0;
    for(k=0; k<col; k++)
    {
        for(i=0; i<col; i++)
        {
            printf("  %c  ", jiedian[i][j]);
            if(i<col-1)
                printf("|");
        }
        printf("\n");
        if(k<row-1)
        {
            for(j=0; j<row; j++)
            {
                printf("-----");
                if(j<row-1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
    printf("\n");
}

int panduan(char jiedian[ROW][COL], int i, int j, int row, int col)
{
    if(i<0 && i>row && j<0 && j>col)
    {
        printf("坐标非法\n");
    }else{
        if(jiedian[i-1][j-1] == ' ')
        {
            return 1;
        }
    }
    return 0;
}

void diannaozou(char jiedian[ROW][COL], int row, int col)
{
    while(1)
    {
        int i = 0;
        int j = 0;
        i = (rand()%row);      
        j = (rand()%col);
        printf("%d %d", i, j);
        if(jiedian[i][j] == ' ')
        { 
            jiedian[i][j] = 'O';
            break;
		}
    }
}

void play(char jiedian[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    int z = 0;
    do{
        printf("请输入你要走的位置：");
        scanf("%d%d", &i, &j);
        z = panduan(jiedian, i, j, row, col);
        if(z == 1)
        {
            jiedian[i-1][j-1] = 'X';
            break;
        }
    }while (1);
    dayinqipan(jiedian, row, col);
    diannaozou(jiedian, row, col);
    printf("电脑走\n");
    dayinqipan(jiedian, row, col);
}

void playgame()
{
    char jiedian[ROW][COL] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    dayinqipan(jiedian, ROW, COL);
    play(jiedian, ROW, COL);
}

void meau()
{
    printf("*****************************\n");
    printf("********** 0. EXIT **********\n");
    printf("********** 1. PLAY **********\n");
    printf("*****************************\n");
}

int main()
{
    int o = 0;
    
    srand((int)time(NULL));
    
    do{
        meau();
        scanf("%d", &o);
        switch (o) {
            case 0:
                break;
            case 1:
                playgame();
                break;
            default:
                printf("错误！请重新输入\n");
                break;
        }
        
    }while(o);
    
    return 0;
}

