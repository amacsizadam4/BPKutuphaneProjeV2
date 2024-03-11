// libraries
#include <stdio.h> // main library
#include <stdlib.h> // cls for now
#include <locale.h> // for localization
#include "headers.h"


//global variables
int globalisAdmin;
char globaluserName[50];
// defines
#define maxBuffer 1024
#define clearConsole printf("\e[1;1H\e[2J");

// structs
struct User {
    char username[50];
    char password[50];
    int isAdmin;
};

struct Book {
    char title[256];
    char author[256];
    char genre[256];
    int pages;
};

// functions

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Read characters until newline or EOF
}

void invalidOption() {
    printf("Geçersiz Seçim, ana menüye dönülüyor...\n");
    mainMenu();
}

void debugFunctions(){
    int option;
    puts("1.loginScreen");
    puts("2.mainMenu");
    puts("choose function: ");

    scanf("%d", &option);

    switch(option) {
        case 1:loginScreen();
            break;
        case 2:mainMenu();
            break;
        case 3:
            break;
        default:
            debugFunctions();
    }

}

void loginScreen(){
    int option;
    puts("1. Giriş Yap");
    puts("2. Kayıt Ol");
    puts("3. Uygulamayı Kapat");

    scanf("%d", &option);

    switch(option) {
        case 1: 
            break;
        case 2:
            break;
        case 3:
            break;
        case 666: debugFunctions();
            break;
        default:
            invalidOption();
    }
}

void authenticateUser() {

}

void mainMenu() {
    int option;
    printf("Hoşgeldiniz: testing. \n");
    puts("1. Tüm Kitapları Göster");
    puts("2. Kitap Ara");
    puts("3. Ödünç Aldığım Kitapları Listele");
    puts("4. Kitap Ödünç Al");

    if (globalisAdmin==1) {
        puts("-------YÖNETİCİ AYARLARI-------");
        puts("5. Kitap Ekle");
        puts("6. Kitap Sil");
        puts("7. Ödünç Alınan Tüm Kitapları Listele");
        puts("8. Kullanıcı Sorgula");
    }

    puts("10. Çıkış Yap");

    printf("Lütfen seçiminizi yapınız: ");
    scanf("%d", &option);

    switch(option) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            break;
        default:
            invalidOption();
            break;
    }

}

// main code
int main () {
    globalisAdmin=3; // invalid until logged on
    setlocale(LC_ALL,"tr_TR.UTF-8");
    system("cls");
    loginScreen();


    return 0;
}