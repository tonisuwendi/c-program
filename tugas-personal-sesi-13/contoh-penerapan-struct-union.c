#include <stdio.h>
#include <string.h>

struct contoh_struct {
    int integer;
    float decimal;
    char name[20];
};

union contoh_union {
    int integer;
    float decimal;
    char name[20];
};

void main() {
    struct contoh_struct struktur = {5, 10, "Toni"};
    union contoh_union persatuan = {3, 8, "Suwendi"};
    
    printf("Struktur (struct):%d %.2f %s\n\n", struktur.integer, struktur.decimal, struktur.name);
    
    printf("Persatuan (union): %d %.2f %s\n\n", persatuan.integer, persatuan.decimal, persatuan.name);

    printf("sizeof structure : %d\n", sizeof(struktur));
    printf("sizeof union : %d\n\n", sizeof(persatuan));
    
    printf("Mengakses semua anggota sekaligus:\n");
    struktur.integer = 100;
    struktur.decimal = 200;
    strcpy(struktur.name, "Toni");
    
    printf("Struktur (struct): %d %.2f %s\n\n", struktur.integer, struktur.decimal, struktur.name);
    
    persatuan.integer = 250;
    persatuan.decimal = 150;
    strcpy(persatuan.name, "Toni");
    
    printf("Persatuan (union): %d %.2f %s\n\n", persatuan.integer, persatuan.decimal, persatuan.name);
    
    printf("Mengakses satu anggota pada satu waktu:\n");
    printf("Struktur (struct):\n");
    
    struktur.integer = 300;
    printf("struktur.integer: %d\n", struktur.integer);
    struktur.decimal = 80;
    printf("struktur.decimal: %f\n", struktur.decimal);
    strcpy(struktur.name, "Aku suka C\n");
    printf("struktur.name: %s\n", struktur.name);
    printf("Persatuan (union):\n");
    persatuan.integer = 300;
    printf("persatuan.integer: %d\n", persatuan.integer);
    persatuan.decimal = 80;
    printf("persatuan.decimal: %f", persatuan.decimal);
    strcpy(persatuan.name, "Aku suka C\n");
    printf("persatuan.name: %s\n\n", persatuan.name);

    printf("Mengubah nilai anggota:\n");
    struktur.integer = 800;
    printf("Struktur (struct): %d %2.f %s\n", struktur.integer, struktur.decimal, struktur.name);

    persatuan.integer = 800;

    printf("Persatuan (union): %d %2.f %s", persatuan.integer, persatuan.decimal, persatuan.name);
}
