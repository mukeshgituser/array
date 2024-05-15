#include <stdio.h>
#include <time.h>
#include <stdbool.h>

void unique_ele(int b[],int n);

int main(){
        struct timespec start_time, end_time;
        long seconds,nanoseconds;
        double elapsed_time;
        clock_gettime(CLOCK_MONOTONIC, &start_time);
        int a[10];
        printf("Enter the array elments\n");
        for(int i=0;i<10;i++){
                scanf("%d",&a[i]);
                }

        unique_ele(a,10);
        clock_gettime(CLOCK_MONOTONIC, &end_time);

        seconds = end_time.tv_sec - start_time.tv_sec;
        nanoseconds = end_time.tv_nsec - start_time.tv_nsec;
        elapsed_time = seconds + nanoseconds * 1e-9;

        printf("Elapsed time: %f seconds \n", elapsed_time);

return 0;
}

void unique_ele(int b[], int n){
        //bool flag = false;
        int i,j;
        for( i=0;i<n;i++){
                bool flag = true;
           for( j=0;j<n;j++){
                if(/*i != j &&*/ b[i] == b[j]){
                        //printf("The unique elemets are : %d\n",b[i]);
                        flag = false;
                        break;
                        }
                }
        if(flag)
                printf("The unique elements are : %d\n ",b[i]);
        }
        printf("\n");
}
