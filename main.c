#include <stdio.h>
#include <stdlib.h>
/*
    Nama        :Aldo Marcelino
    Nim         :A11.2017.10596
    Kelompok    :A11.4113
    Materi      :Looping
    Tugas       :PDP-7
*/


int main()
{
    /*
        a. Buatlah program untuk mencetak angka integer, dengan ketentuan :
           Variabel loop1 : mencetak angka mulai dari 1 hingga 50
           Variable loop2 : mencetak angka mulai dari 50 hingga 1
           Variable loop3 : mencetak selisih dari loop1 dan loop2
    */
    ///loop1
    int i,x;     //iterator
    ///algoritma
    printf("======================MENCETAK ANGKA 1-50===================================\n");
    for(i=1;i<=50;i++)  ///-> i++ = ingkrement
    {
        printf(" %d ",i);
    }
    printf("\n\n");
    ///loop2
    ///Algoritma
    printf("======================MENCETAK ANGKA 50-1====================================\n");
    for(x=50;x>=1;x--)///->  1-- = difrement
    {
        printf(" %d ",x);
    }
    printf("\n\n");
    ///loop3
    ///Algoritma
    printf("======================Mencetak Selisih Dari loop1 dan loop2=====================");
    for(i=1,x=50;i<=50,x>=1;i++,x--)
    {
        printf(" %d | %d ",i,x);
    }
    printf("\n");
    return 0;
}
