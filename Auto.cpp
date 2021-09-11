#include <iostream>
#include <string>
using namespace std;

class Auto {
    private:
        string marka;
        int km;
        float vidBenzinaPaterins;

    public:
        Auto(){
            marka="Audi";
            km = 10;
            //cout<<"\nMasinas marka ir "<<marka<<" un nobraukums ir "<<km<<" km.";
        }
        ~Auto(){
            printAutoData();
            cout<<"\nAutomasina "<<marka<<" ar nobraukumu "<<km<<" km un benzina paterinu "<<Auto::getVidBenzinaPaterins()<<" litri tiek norakstita.\n";
            cin.get();
        };
        void setMarka (string marka);
        void setKm (int km);
        void setVidBenzinaPaterins (float vidBenzinaPaterins);

        string getMarka() const;
        int getKm() const;
        float getVidBenzinaPaterins() const;
        void printAutoData();
};

void Auto::setMarka(string marka){
    this-> marka=marka;
}
void Auto::setKm(int km){
    this->km=km;
}

void Auto::setVidBenzinaPaterins(float vidBenzinaPaterins){
    this->vidBenzinaPaterins=vidBenzinaPaterins;
}

string Auto::getMarka() const{
    return this->marka;
}
int Auto::getKm() const{
    return this->km;
}

float Auto::getVidBenzinaPaterins() const{
    int vidBenzinaPaterins = 0;
    if (this->km==1)
        vidBenzinaPaterins = 20;
    else
        vidBenzinaPaterins = km * 10;
    return vidBenzinaPaterins;
}
void Auto::printAutoData(){
    cout<<"\nPateretais benzina daudzums masinai "<<marka<<" ir "<< Auto::getVidBenzinaPaterins() <<" litri.";
}


Auto mansAuto;
Auto*skolasAuto;

int main(){
    mansAuto.setMarka("BMW");
    mansAuto.setKm(14);
    mansAuto.printAutoData();

    int km;
    skolasAuto = new Auto;
    skolasAuto -> setMarka("Audi");
    cout <<"\nKada ir celojuma distance: ";
    cin>>km;
    skolasAuto -> setKm(km);
    skolasAuto -> printAutoData();
    delete skolasAuto;
    cin.get();


};