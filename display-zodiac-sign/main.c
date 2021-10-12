#include <stdio.h>

void zodiacSign(char name[], int day, int month){
    printf("Nama: %s", name);
    printf("Bintang: ");
    if(day < 1 || day > 31 || month < 1 || month > 12){
        printf("Tidak diketahui!");
    }else if((month == 3 && day >= 21) || (month == 4 && day <= 19)){
        printf("Aries");
    }else if((month == 4 && day >= 20) || (month == 5 && day <= 20)){
        printf("Taurus");
    }else if((month == 5 && day >= 21) || (month == 6 && day <=20)){
        printf("Gemini");
    }else if((month == 6 && day >= 21) || (month == 7 && day <= 22)){
        printf("Cancer");
    }else if((month == 7 && day >= 23) || (month == 8 && day <= 22)){
        printf("Leo");
    }else if((month == 8 && day >= 23) || (month == 9 && day <= 22)){
        printf("Virgo");
    }else if((month == 9 && day >= 23) || (month == 10 && day <= 22)){
        printf("Libra");
    }else if((month == 10 && day >= 23) || (month == 11 && day <= 21)){
        printf("Scorpio");
    }else if((month == 11 && day >= 22) || (month == 12 && day <= 21)){
        printf("Sagitarius");
    }else if((month == 1 && day >= 20) || (month == 2 && day <= 18)){
        printf("Aquarius");
    }else if((month == 2 && day <= 19) || (month == 3 && day <= 20)){
        printf("Pisces");
    }else{
        printf("Tidak diketahui!");
    }
    printf("\n");
    printf("Tanggal lahir: %i/%i", day, month);
}

int main() {
    
    char name[50];
    int day, month;
    
    printf("Masukkan Nama: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Masukkan Tanggal Lahir (1-31): ");
    scanf("%i", &day);
    
    printf("Masukkan Bulan Lahir (1-12): ");
    scanf("%i", &month);
    
    printf("===================\n");
    
    zodiacSign(name, day, month);
    
    return 0;
}
