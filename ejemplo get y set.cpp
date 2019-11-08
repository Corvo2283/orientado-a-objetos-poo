#include<iostream>
 
using namespace std;
 
class Caja{
    int chocolates;
    private:
       int Chocolates;
       
    public:
        Caja();
        ~Caja();
        void set_chocolates(int choc)
        int get_chocolates();
        
    
};
Caja::Caja(){
}
 
Caja::~Caja(){
}
void Caja::set_chocolates(int choc){
    chocolates=choc;
}
 
int Caja::get_chocolates(){
    return chocolates;
}
 
int main(){
 
    int c,mc;
    Caja obj;
 
    cout<< "\n Ingrese numero de chocolates; "<<endl;
    cin>>c;
    obj.set_chocolates(c);
    cout<< "\n Numero de chocolates; "<< obj.get_chocolates()<<endl;
    cout<< "\n Ingrese numero de chocolates la segunda vez; "<<endl;
    cin>>mc;
    obj.set_chocolates(mc);
    cout<< "\n Nuevo numero de chocolates; " << obj.get_chocolates() <<endl;
 
    return 0 ;
 
 
}