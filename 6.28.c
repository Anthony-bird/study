#include<stdio.h>

// -------------------    1  start     ---------------------------
// int main()
// {
//     const int maxNumber = 25;
//     int isPrime[maxNumber];
//     int i;
//     int x;
//     for ( i = 0; i < maxNumber; i++)
//     {
//         /* code 先遍历所有的素数*/ 
//         isPrime[i] = 1; 
//     }
//     // //for test
//     // printf("\t");
//     // for ( i = 2; i < maxNumber; i++)
//     // {
//     //     printf("%d\t",i);
//     // }
//     // printf("\n");
//     // //for test
//     for ( x = 2; x<maxNumber; x++)
//     {
      
//         if ( isPrime[x])
//         {
//             for (i = 2; i*x<maxNumber; i++)
//             {
//                 /* code素数的倍数 */
//                 isPrime[i*x] = 0;
//             }
            
//         }
//         // //for test
//         // printf("%d\t",x);
//         // for ( i = 2; i < maxNumber; i++)
//         // {
//         //     printf("%d\t",isPrime[i]);
//         // }
//         // printf("\n");
//         // //for test
//     }
//     for ( i = 2; i < maxNumber; i++)
//     {
//         if (isPrime[i])
//         {
//             printf("%d\t",i);
//         }
        
//     }
//     printf("\n"); 
// }
// -------------------    1  end     ---------------------------

// -------------------   2  start     ---------------------------
// int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes);

// int main(void)
// {
//     const int number = 10;
//     int prime[number] ={2};           //有bug
//     int count = 1;
//     int i = 3;

//     {
//         int i;
//         printf("\t\t\t\t");
//         for ( i = 0; i < number; i++)
//         {
//             printf("%d\t",i);
//         }
//         printf("\n");
//     }
//     while ( count<number)
//     {
//        if (isPrime(i,prime,count) )
//        {
//           prime[count++] = i;
//        }
//        {
//            printf("i=%d \tcnt=%d\t",i,count);
//            int i;
//            for ( i = 0; i < number; i++)
//            {
//               printf("%d\t",prime[i]);
//            }
//            printf("\n");
//        }
//        i++;
//     }
//     for ( i = 0; i < number; i++)
//     {
//        printf("%d",prime[i]);
//        if ( (i+1)%5 ) printf("\t");
//        else printf("\n");        
//     }
//     return 0; 
// }
// int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes)
// {
//     int ret = 1;
//     int i;
//     for ( i = 0; i < numberOfKnownPrimes; i++)
//     {
//         if ( x% knownPrimes[i] ==0 )
//         {
//             ret = 0;
//             break;
//         }   
//     }
//     return ret;
    
// }
// -------------------   2  end     ---------------------------
// -------------------   3 start     ---------------------------
int main()
{
    const int size = 3;
    int board[size][size];
    int i,j;
    int numOfX;
    int numOfO;
    int result = -1;    //-1:没人赢，1：X赢，0：0赢

    //读入矩阵
    for ( i = 0; i < size; i++)
    {
        for ( j = 0; i <size; j++)
        {
            scanf("%d",&board[i][j]);
        }   
    }
    //检查行
    for ( i = 0; i < size&& result == -1; i++)
    {
        numOfO = numOfX = 0;
        for ( j = 0; j < size; j++)
        {
            if (board[i][j] == 1) {
                numOfX++;
            } else{
                numOfO++;
            }
        }
        if ( numOfO == size)
        {
            result = 0;
        } else if (numOfX == size )
        {
            result = 1;
        }   
    }
    //检查列
    if (result == -1) {
    for (j = 0; j < size&& result == -1; j++)
    {
            numOfO = numOfX = 0;
            for ( i = 0; j < size; i++)
            {
                if (board[i][j] == 1) {
                    numOfX++;
                } else{
                    numOfO++;
                }
            }
            if ( numOfO == size)
            {
                result = 0;
            } else if (numOfX == size )
            {
                result = 1;
            }   
        }
     }

    // numOfO = numOfX = 0;
    // for ( i = 0; i < size; i++)
    // {
    //     /* code 正对角线*/     //这两个是分开代码
    //     if (board[i][i] == 1)
    //     {
    //        numOfX ++;
    //     } else
    //     {
    //         numOfO ++;
    //     }      
    // }
    // if ( numOfO == size )
    // {
    //     result = 0;
    // } else if (numOfX == size)
    // {
    //     result = 1;
    // } 
    // // 检查反对角线
    // numOfO = numOfX = 0;
    // for ( i = 0; i < size; i++)
    // {
    //    if (board[i][size-i-1]==1 )  
    //    {
    //        numOfX++;
    //    }else{
    //        numOfO++;
    //    }
       
    // } 
    return 0;
}
// -------------------   3 end     ---------------------------