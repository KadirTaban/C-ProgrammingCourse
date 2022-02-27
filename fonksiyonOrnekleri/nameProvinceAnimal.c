#include <stdio.h>
#include <string.h>

void nameProvinceAnimalFunction(char isimSehirHayvan[],int kisisayisi);

int main(){
    int N;
    printf("kaç kişi oynayacaksiniz ? ");
    scanf("%d",&N);
    char nameProvinceAnimal[N][3];

    for(int i = 0 ; i<N;i++){
        for(int j = 0 ; j<3 ; j++){
            printf("isim şehir hayvan giriniz sirasiyla: ")
            scanf("%c",nameProvinceAnimal[i][j]);
        }
        
    }
    nameProvinceAnimal(nameProvinceAnimal,N);

    
    


}

void nameProvinceAnimalFunction(char isimSehirHayvan[],int kisisayisi){

    for(int i = 0 ; i<kisisayisi ; i++){
        for(int j = 0 ; j<3 ; j++){
        
        
        }
    }
     

}