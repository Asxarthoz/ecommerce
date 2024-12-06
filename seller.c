#include <stdio.h>

int JumlahBaris(char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Gagal membuka file: %s\n", filename);
         // Kode -1 untuk error
    }
    int jumlahBaris = 0;
    char buffer[1024];

    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        jumlahBaris++;
    }
    fclose(file);
    return jumlahBaris;
    
}

void SellerData()
{
    int jumlahBaris = JumlahBaris("database\\seller.txt");
    FILE *seller = fopen("database\\seller.txt", "r");
    if (seller == NULL) {
        printf("Gagal membuka file: Seller\n");
         // Kode -1 untuk error
    }
        char username[jumlahBaris][20];
        
        for(int i = 0; i < jumlahBaris; i++)
        {
            int jumlahProduk;
            int checkNewline = 0;
            fscanf(seller, "%d|", &jumlahProduk);
            fscanf(seller, "%[^|]", &username[i]);
            if(checkNewline == 0){
                
            }
        }
        for(int i = 0; i < jumlahBaris; i++)
        {
            printf("%s\n", username[i]);
        }
    fclose(seller);
}



int main()
{
    SellerData();
    return 0;
}