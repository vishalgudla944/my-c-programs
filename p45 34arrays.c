 #include<stdio.h>
int main()
{
    int i,j,k;
    int sum=0;
    int marks[3][2][4]= {
                        {{1,2,3,4},{45,65,89,56} },

                        {{7,9,10,11},{15,56,65,69}},

                        {{15,18,78,65},{78,98,65,45}}
                        };
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<4;k++)
            {
                sum=sum+marks[i][j][k];
                printf("%d\n",marks[i][j][k]);

            }


        }
    }
         printf("\nSum is: %d",sum);


                        return 0;


}
