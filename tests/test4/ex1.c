#include <stdio.h>

int main(){
    //quotations of a month
    double quotations[32]={16674.6, 15886.9, 18527.4, 20589.0, 20916.3, 21301.6, 21145.9, 20206.4, 20154.4, 20483.5, 20496.3, 20626.3, 20809.8, 20594.4, 20292.9, 20769.5, 20082.7, 19331.5, 19571.2, 19204.8, 19162.6, 19042.9, 19123.9, 19328.2, 19548.2, 19261.9, 19068.7, 19181.8, 19379.8, 19154.8, 19059.1, 19134.6};

    int i;
    printf("Type the number of the day of the month to learn about bitcoin quotations (0-31).\n");
    scanf("%d",&i);

    while(i>=0 && i<=31){
        
        printf("Daily quotation value %d: %g\n", i, quotations[i]);

        double mean = 0.0;
        for(int j=0; j <= i; j++) {
          mean += quotations[j];
          mean = mean / (i + 1);
        }
          

        printf("Mean of quotations up until day %d: %g\n", i, mean);

        printf("Type another day\n");
        scanf("%d",&i);
    }
}