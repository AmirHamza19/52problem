#include <stdio.h>
#include <string.h>
#include <math.h>

// Problem -1- Solved
// int main()
// {
//     int T, n, i;
//     scanf("%d", &T);
//     for ( i = 1; i <= T; i++)
//     {
//        scanf("%d", &n);
//        if (n%2 == 0 )
//        {
//         printf("even\n");
//        }
//        else
//        printf("odd\n");
//     }
//     return 0;
// }

// Problem -2 - solved

// int main()
// {
//     char num[101];
//     int T;

//     scanf("%d", &T);
//     for(int i =1; i<=T; i++)
//     {
//         scanf("%s", &num);
//         int size = strlen(num);
//         int cal = num[size-1]%2;
//         if(cal==0)
//             printf("even\n");
//         else
//             printf("odd\n");
//     }

//     return 0;
// }

// problem --- 3 - solved

// int main()
// {
//     int i, count;
//     for ( i = 1000; i > 0; i--)
//     {
//         printf("%d\t", i);
//         count+=1;
//         if (count%5==0)
//             printf("\n");

//     }

//     return 0;
// }

// problem - 4 - solved

// int main()
// {
//   int T, num, i, j;
//   scanf("%d", &T);

//     for ( i = 1; i <= T; i++)
//     {
//         scanf("%d", &num);
//             printf("Case %d:", i);
//         for ( j = 1; j <=num ; j++)
//           {
//             if(num%j==0)
//               printf(" %d",j);
//           }
//         printf("\n");
//     }
//     return 0;
// }

// Problem -5- solved

// int main()
// {
//     int T, num, i, row, col;
//     scanf("%d", &T);
//     for ( i = 1; i <= T; i++)
//     {
//         scanf("%d", &num);
//         for(row=1; row<=num; row++)
//         {
//             for ( col = 1; col<=num; col++)
//                 printf("*");
//             printf("\n");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Problem -6- solved

// int main()
// {
//     int T, i, n, msd, lsd;
//     scanf("%d", &T);
//     for ( i = 1; i <= T; i++)
//         {
//             scanf("%d", &n);
//             msd = n/10000;
//             lsd = n%10;
//             printf("Sum = %d\n", msd+lsd);
//         }
//     return 0;
// }

// Problem -6- solved (in 2nd way)

// int main()
// {
//     int T, i, n,lsd, msd, num;
// scanf("%d", &T);
// for ( i = 1; i <= T; i++)
//     {
//             scanf("%d", &n);
//             lsd = n%10;
//             while(n/10!=0)
//             {
//                 num = n/10;
//                 n=num;
//             }
//             printf("Sum = %d\n", n+lsd);
//         }
//     return 0;
// }


// Problem -08 - solved

// int main()
// {
//     int T,n1, n2, n3, temp;
//     scanf("%d", &T);
//     for(int i=1; i<=T; i++)
//     {
//         scanf("%d %d %d", &n1, &n2, &n3);
//         if (n1>n2)
//         {
//             temp = n1;
//             n1 = n2;
//             n2 = temp;
//         }
//         if (n1>n3)
//         {
//             temp = n1;
//             n1 = n3;
//             n3 = temp;
//         }
//         if (n2>n3)
//         {
//             temp = n2;
//             n2 = n3;
//             n3 = temp;
//         }
//         printf("Case %d: %d %d %d\n", i, n1, n2, n3);
//     }
//     return 0;
// }

// Problem 09 - solved

// int main()
// {
//     int T, n1;
//     scanf("%d", &T);
//     for(int i=1; i<=T; i++)
//     {
//         scanf("%d", &n1);
//         int res = sqrt(n1);
//         int res2 = res*res;
//         if (n1==res2)
//             printf("YES\n");
//         else
//             printf("NO\n");
//     }
//     return 0;
// }

// Problem 09 - solved

// int main()
// {
//     int T, i, r1, r2, B, ball_played;
//     double current_rr, asking_rr;
//     scanf("%d", &T);
//     while(T--)
//     {
//         scanf("%d %d %d", &r1, &r2, &B);
//         ball_played = (300- B)*1.0;
//         current_rr = (r2*1.0/ball_played)*6*1.0;
//         if(r2>r1)
//             asking_rr = 0;
//         else
//             asking_rr = ((r1-r2*1.0+1)/B)*6*1.0;
//         printf("%.2lf %.2lf\n", current_rr, asking_rr);
//     }
//     return 0;
// }

// problem - 11 - solved

// int main()
// {
//     int T, num;

//     scanf("%d", &T);
//     for( int i=1; i<=T; i++)
//     {
//         long long int factorial = 1, i;
//         scanf("%d", &num);
//         for( i = 2; i<=num ; i++ )
//             factorial = (i*factorial);
//         printf("%lld\n", factorial);
//     }
//     return 0;
// }

// problem - 12 - solved

// int main()
// {
//     int T;
//     scanf("%d", &T);
//     while( T--)
//     {
//         int count = 0, i, num;
//         scanf("%d", &num);
//         for ( i = 5; i <= num; i*=5)
//             count+=num/i;
//         printf("%d\n", count);
//     }
//     return 0;
// }

// problem - 13 -

// int main()
// {
//     int T;
//     scanf("%d", &T);
//     while (T--)
//     {
//         int a,i, j,  b, count = 0;
//         scanf("%d %d", &a, &b);
//         for ( i = a; i <= b; i++)
//         {

//         }
//         printf("%d\n", count);
//     }

// }

// 42 - solved

// int main()
// {
//     int T, i, k;
//     scanf("%d", &T);
//     for ( i = 0; i < T; i++)
//     {
//         int num;
//         scanf("%d", &num);
//         for ( k = num; k >= 0; k--)
//             {
//                 if(k==0)
//                     printf("1");
//                 else if(k == 1)
//                     printf("2 + ");
//                 else
//                     printf("2^%d + ", k);
//             }
//         printf("\n");
//     }
//     return 0;
// }

// 46 - solved
// int main()
// {
//     int T;
//     scanf("%d", &T);
//     for(int i=0; i< T; i++)
//     {
//         double a, b, c;
//         scanf("%lf %lf %lf", &a, &b, &c);
//         double s = (a+b+c)/2.00;
//         double area = sqrt(s*(s-a)(s-b)(s-c));
//         printf("Area = %.3lf\n", area);
//     }
//     return 0;
// }

// 50

// int main()
// {
//     int i, T; //L=76 ; R=82
//     scanf("%d", &T);
//     for(i = 1; i<=T; i++)
//     {
//         char arr[50];
//         scanf("%s", &arr);
//         for(i= 0; i<50; i++)
//         {
//             if(arr[i]==76)
//                 arr[i] = arr[i-1];
//             else if(arr[i]==82)
//                 arr[i]==arr[i+1];
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 48 - solved

// int main()
// {
//     int i , N, T;
//     scanf("%d", &T);
//     for(int j = 0; j<T; j++)
//     {
//         scanf("%d", &N);
//         int a[N];
//         int sum=0, sum2=0;
//         for ( i = 0; i < N-1; i++)
//         {
//             scanf("%d", &a[i]);
//             sum+=a[i];
//         }
//         for(i=1; i<=N; i++)
//             sum2+=i;
//         int miss = sum2 - sum;
//         printf("%d\n", miss);
//     }
//     return 0;
// }

// 47

// int main()
// {
//     int T;
//     scanf("%d", &T);
//     for (int i = 0; i < T; i++)
//     {
//         int ar1[100], ar[100];
//         for(int j = 0; j<100; j++)
//         scanf("")
//     }

// }

// 41 - solved

// long long int fact(long long int n)
// {
//     long long int i, product = 1;
//     for (i = 1; i <= n; i++)
//         product *= i;
//     return product;
// }

// int main()
// {
//     int T, n;
//     scanf("%d", &T);
//     for (int i = 0; i < T; i++)
//     {
//         double sum = 0.0;
//         scanf("%d", &n);

//         for (int i = 1; i <= n; i++)
//         {
//             for (i = 1; i <= n; i++)
//                 sum += (double)i / fact(i);
//         }
//         printf("%0.4lf\n", sum);
//     }
//     return 0;
// }


// 40 -

// int main()
// {
//     int T, n;
//     scanf("%d", &T);
//     for (int i = 0; i < T; i++)
//     {
//         int j, sum = 1, power=1, x, k;
//         scanf("%d %d", &x, &k);
//         for( j = 1; j<=k; j++)
//         {
//             power=power*x;
//             sum += power;
//         }
//         printf("Result = %d\n", sum);
//     }
//     return 0;
// }

//  39 -

// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while(t--)
//     {
//         char str[2];
//         int flag=0;
//         scanf("%s", &str);
//         for(int i=0, j=2; i<=2, j>=0; i++, j--)
//         {
//             if(str[i] != str[j])
//                 flag = 1;
//                 break;
//         }
//         if(flag == 0)
//             printf("Yes! It is Palindrome!\n");
//         else
//             printf("Sorry! It is not Palindrome!\n");
//     }
//     return 0;
// }

// 30 - solved

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int num, sum=0, i;
        scanf("%d", &num);
        for(i=1; i<=num/2; i++)
        {
            if(num%i==0)
               sum+=i;
        }
        if(num==sum)
            printf("Perfect\n");
        else
            printf("Not perfeto\n");
    }
    return 0;
}