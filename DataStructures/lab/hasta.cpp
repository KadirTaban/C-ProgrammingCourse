#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class hasta{
public:
    string ad;
    string soyad;
    int oncelik;
    hasta(string ad,string soyad, int oncelik){         
                 this->ad = ad;
                 this->soyad = soyad;
                 this->oncelik = oncelik;
    }
};
class siraEleman{
public:
      hasta* veri;
      siraEleman *sonraki; 
      siraEleman(hasta *yeni){
                       veri = yeni;
      }         
};
class sira{
public:
      siraEleman *ilk;
      sira(){
             ilk = NULL;
             perror("sira olustu");
      }
      void ekle(hasta *yeniHasta){
           if(ilk==NULL){
                         perror("ilk bos");
                    ilk = new siraEleman(yeniHasta);
                    ilk->sonraki = ilk; 
           }
           else if(ilk->veri->oncelik < yeniHasta->oncelik){
                perror("basa ekle");
                siraEleman *iter = ilk;
                while(iter->sonraki != ilk)
                                    iter = iter->sonraki;
                cout << iter->veri->ad << "sonrasina ekliyorum"<<endl;
                siraEleman *yeni= new siraEleman(yeniHasta);
                iter->sonraki = yeni;
                yeni->sonraki = ilk;
                ilk = yeni;
                cout << "yeni ilk " << ilk->veri->ad<<endl;
           }
           else{
                siraEleman *iter=ilk;
                siraEleman *gecici;
                while(iter->sonraki!=ilk && iter->sonraki->veri->oncelik > yeniHasta->oncelik){
                    cout << "onceligim : " << yeniHasta->oncelik << " baktigim: " << iter->veri->oncelik;
                
                    iter=iter->sonraki;
                }    
                if(iter!=ilk && iter->veri->oncelik < yeniHasta->oncelik)
                             iter= iter->sonraki;
                gecici=iter->sonraki;
                iter->sonraki=new siraEleman(yeniHasta);
                iter->sonraki->sonraki = gecici; 
           }
           perror("eklendi");
      }
      hasta * siradaki(){
            if(ilk==NULL)
                         return NULL;
            else if(ilk->sonraki==ilk){
                      hasta * temp = ilk->veri;
                      free(ilk);
                      ilk=NULL;
                      return temp;
            }      
            else{
                 siraEleman * silinecek=ilk;
                 hasta * temp = ilk->veri;
                 ilk=ilk->sonraki;
                 free(silinecek);
                 return temp;
            }
      }
      void bastir(){
           siraEleman *iter = ilk;
           while(iter->sonraki != ilk){
              cout << iter->veri->ad << " - " << iter->veri->soyad << " - " << iter->veri->oncelik << endl;                    
              iter=iter->sonraki;
           }
           cout << iter->veri->ad << " - " << iter->veri->soyad << " - " << iter->veri->oncelik << endl;                    
      }
};
int main(){
    char a[32];
    perror("basladi");
    sira s=sira();
    perror("sira olustu");
    s.ekle(new hasta("ali","demir",4));
    s.bastir();
    s.ekle(new hasta("veli","yilmaz",3));
    s.bastir();
    s.ekle(new hasta("sadi","seker",6));
    s.bastir();
    s.ekle(new hasta("cem","yildiz",5));
    s.bastir();
    s.ekle(new hasta("evren","seker",4));
    s.bastir();
    hasta *siradaki=s.siradaki();
    cout << siradaki->ad << " - " << siradaki->soyad << " - " << siradaki->oncelik << endl;                    
    siradaki=s.siradaki();
    cout << siradaki->ad << " - " << siradaki->soyad << " - " << siradaki->oncelik << endl;                    
    siradaki=s.siradaki();
    cout << siradaki->ad << " - " << siradaki->soyad << " - " << siradaki->oncelik << endl;                    
   /* while(siradaki!=NULL){
          cout << siradaki->ad << " - " << siradaki->soyad << " - " << siradaki->oncelik << endl;                    
        siradaki = s.siradaki();
    }*/
    scanf("%c",a);
}

            