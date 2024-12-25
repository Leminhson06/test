#include <stdio.h>

struct Book {
    char id[50];
    char title [50];
    float price;
};

int main (){
    FILE *file;
    struct Book book1;
    // mo file
    file = fopen("vd3.bin", "wb");
    if (file = NULL) {
        printf("Khong mo duoc file");
        return 1;
    }
    // thao tac voi file
    fread(&book1, sizeof(book1), 1, file);
    
    printf("Ma so sach: %s", book1.id);
    printf("Ten sach: %s", book1.title);
    printf("Ma sach: %0.f", book1.price);

    // Dong file
    fclose(file);

    return 0;
}
