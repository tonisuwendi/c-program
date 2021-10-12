#include <stdio.h>
void zodiacSign(char name[50], int day, int month, int year);

int main(){
    char name[50];
    int day, month, year;
    printf("Masukkan Nama: ");
    fgets(name, sizeof(name), stdin);
    printf("Masukkan Tanggal Lahir (dd/mm/yyyy): ");
    scanf("%2d / %2d / %4d", &day, &month, &year);
    printf("===================\n");
    zodiacSign(name, day, month, year);
    return 0;
}

void zodiacSign(char name[50], int day, int month, int year){
    printf("Nama: %s", name);
    printf("Bintang: ");
    if(day < 1 || day > 31 || month < 1 || month > 12){
        printf("Tidak diketahui!");
    }else if((month == 3 && day >= 21) || (month == 4 && day <= 19)){
        printf("Aries");
    }else if((month == 4 && day >= 20 && day <= 30) || (month == 5 && day <= 20)){
        printf("Taurus");
    }else if((month == 5 && day >= 21) || (month == 6 && day <=20)){
        printf("Gemini");
    }else if((month == 6 && day >= 21 && day <= 30) || (month == 7 && day <= 22)){
        printf("Cancer");
    }else if((month == 7 && day >= 23) || (month == 8 && day <= 22)){
        printf("Leo");
    }else if((month == 8 && day >= 23) || (month == 9 && day <= 22)){
        printf("Virgo");
    }else if((month == 9 && day >= 23 && day <= 30) || (month == 10 && day <= 22)){
        printf("Libra");
    }else if((month == 10 && day >= 23) || (month == 11 && day <= 21)){
        printf("Scorpio");
    }else if((month == 11 && day >= 22 && day <= 30) || (month == 12 && day <= 21)){
        printf("Sagitarius");
    }else if((month == 1 && day >= 20) || (month == 2 && day <= 18)){
        printf("Aquarius");
    }else if((month == 2 && day <= 19 && day <= 29) || (month == 3 && day <= 20)){
        printf("Pisces");
    }else{
        printf("Tidak diketahui!");
    }
    printf("\n");
    printf("Tanggal lahir: %i/%i/%i", day, month, year);
}
