#include <stdio.h>



int main() {
    int month;
    
    scanf("%d", &month);
    switch(month){
        case 1: // january
        case 3: // march
        case 5: // may
        case 7: // july
        case 8: // August
        case 10: // october
        case 12: // december
            printf("31\n");
            break;
        case 4: // april
        case 6: // june
        case 9: // september
        case 11: // november
            printf("30\n");
            break;
        case 2: // February 
            printf("28\n");
            break;
        default:
            printf("Invalid month\n");
            break;
    
    }
    return 0;
}