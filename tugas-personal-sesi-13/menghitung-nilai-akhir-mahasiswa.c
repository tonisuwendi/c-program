#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertDataMahasiswa();
int inputNilaiMahasiswa();
void findScoreAndStatus();

struct mahasiswa {
    char name[50];
    int nim;
    char course[50];
    int present;
    int task;
    int quiz;
    int forum;
    int exam;
    float score;
};

struct mahasiswa binusian25[1000];

int main() {
    int menu;
    while(menu != 4){
        char menuChoosed [20];
        printf("---> MENGHITUNG NILAI AKHIR MAHASISWA <---\n");
        printf("1 -> Input data mahasiswa\n");
        printf("2 -> Input Nilai\n");
        printf("3 -> Lihat nilai mahasiswa dan status\n");
        printf("4 -> Keluar\n");
        printf("Pilih salah satu nomor diatas==> ");
        fgets(menuChoosed, 20, stdin);
        menu = atoi(menuChoosed);
        
        if(menu == 1){
            insertDataMahasiswa();
            menu = 0;
        }else if(menu == 2){
            inputNilaiMahasiswa();
            menu = 0;
        }else if(menu == 3){
            findScoreAndStatus();
            menu = 0;
        }
    }
    return 0;
}

void insertDataMahasiswa() {
    int count = 0;
    while(count == 0){
        char nim[20];
        printf("Masukkan NIM (max 10 digit): ");
        fgets(nim, 20, stdin);
        count = atoi(nim);
    }
    
    count %= 1000;
    if(strlen(binusian25[count].name) != 0) {
        printf("Data mahasiswa sudah ada!\n");
        printf("Nama: %s", binusian25[count].name);
        printf("Mata Kuliah: %s", binusian25[count].course);
    } else {
        binusian25[count].nim = count;
        printf("Masukkan nama: ");
        fgets(binusian25[count].name, 50, stdin);
        printf("Masukkan mata kuliah: ");
        fgets(binusian25[count].course, 50, stdin);
    }
}

int inputNilaiMahasiswa() {
    int count = 0;
    char score[20];
    char presentScore[20];
    char taskScore[20];
    char quizScore[20];
    char forumScore[20];
    char examScore[20];
    printf("Masukkan NIM: ");
    fgets(score, 20, stdin);
    count =atoi(score);
    count %= 1000;
    
    if(strlen(binusian25[count].name) == 0) {
     printf("Masukkan data mahasiswa dulu!\n");
     return 0;
    }
    
    printf("Nama: %s", binusian25[count].name);
    printf("Mata kuliah: %s", binusian25[count].course);
    
    while(binusian25[count].present == 0 || binusian25[count].present > 100) {
        printf("Nilai Hadir: ");
        fgets(presentScore, 20, stdin);
        binusian25[count].present = atoi(presentScore);
    }
    
    while(binusian25[count].task == 0 || binusian25[count].task > 100) {
        printf("Nilai Tugas: ");
        fgets(taskScore, 20, stdin);
        binusian25[count].task = atoi(taskScore);
    }
    
    while(binusian25[count].quiz == 0 || binusian25[count].quiz > 100) {
        printf("Nilai Quiz: ");
        fgets(quizScore, 20, stdin);
        binusian25[count].quiz = atoi(quizScore);
    }
    
    while(binusian25[count].forum == 0 || binusian25[count].forum > 100) {
        printf("Nilai keaktifan forum: ");
        fgets(forumScore, 20, stdin);
        binusian25[count].forum = atoi(forumScore);
    }
    
    while(binusian25[count].exam == 0 || binusian25[count].exam > 100) {
        printf("Nilai UAS: ");
        fgets(examScore, 20, stdin);
        binusian25[count].exam = atoi(examScore);
    }
    
    printf("Nilai berhasil dimasukkan\n");
    return 0;
}

void findScoreAndStatus() {
    int count = 0;
    char nim[20];
    printf("Masukkan NIM: ");
    fgets(nim, 20, stdin);
    count = atoi(nim);
    count %= 1000;
    
    if (binusian25[count].present == 0 && binusian25[count].task == 0 && binusian25[count].quiz == 0 && binusian25[count].forum == 0 && binusian25[count].exam == 0) {
        printf("Belum ada nilai untuk NIM %s", nim);
    } else {
        binusian25[count].score = (binusian25[count].present * 0.1 + binusian25[count].task * 0.2 + binusian25[count].quiz * 0.1 + binusian25[count].forum * 0.1 + binusian25[count].exam * 0.5);
        
        printf("Nama: %s", binusian25[count].name);
        printf("Mata Kuliah: %s", binusian25[count].course);
        printf("Nilai Hadir: %d\n", binusian25[count].present);
        printf("Nilai Tugas: %d\n", binusian25[count].task);
        printf("Nilai Quiz: %d\n", binusian25[count].quiz);
        printf("Nilai Forum: %d\n", binusian25[count].forum);
        printf("Nilai UAS: %d\n", binusian25[count].exam);
        printf("Nilai Akhir: %0.f\n", binusian25[count].score);
        
        if(binusian25[count].score >= 90) {
            printf("Selamat, kamu mendapat grade A dan lulus");
        }else if(binusian25[count].score >= 80) {
            printf("Selamat, kamu mendapat grade B dan lulus");
        }else if(binusian25[count].score >= 70) {
            printf("Selamat, kamu mendapat grade C dan lulus");
        }else if(binusian25[count].score >= 60) {
            printf("Selamat, kamu mendapat grade D dan lulus");
        }else if(binusian25[count].score >= 50) {
            printf("Mohon maaf, kamu mendapat grade E dan tidak lulus");
        }
        printf("\n");
    }
}
