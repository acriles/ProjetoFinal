#include <string>
#include <vector>
using namespace std;


class Pizza{
    private:
     string sabor;
     string tamanho;
     vector <string> adicionais;

    public:
     Pizza(); //construtor 
     void setSabor(string _sabor);
     void setTamanho(string _tamanho);
     string getSabor();
     string getTamanho();
     void addAdicional(string _adicional);
    void setAdicionais(vector <string> _adicionais); 
    void imprimePizza();
    void imprimeAdicionais();
      ~Pizza(void); //destrutor 
   
};