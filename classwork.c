#include <stdio.h>
int main(){
const int NUM_CITIES=2;
const int NUM_DAYS=7;
int temperature[NUM_CITIES][NUM_DAYS];
char city_names[NUM_CITIES][20];

for(int i=0; i<NUM_CITIES; i++ ){
printf("Enter name of city %d:", i+1);
scanf("%s",city_names[1]);


}
for (int i=0; i<NUM_CITIES; i++){
printf("Enter temperature of city %s:\n", city_names[1]);
for(int j=0; j<NUM_DAYS; j++){
printf("Enter temperatures for day %d:", j+1);
scanf("%d", &temperature[1][j]);


}

}
printf("\ntemperature:\n");
printf("city\t");
for (int j=0; j<NUM_DAYS; j++){
    printf("%d\t", j+1);

}
printf("\n");
for (int i=0; i<NUM_CITIES; i++){
    printf("%s\t", city_names[1]);
    for(int j=0; j<NUM_DAYS; j++){
        printf("%d\t",temperature[i][j]);

    }
    printf("\n");
    }

return 0;
}