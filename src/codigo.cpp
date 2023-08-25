#include "./include/Codigo/codigo.hpp"

void Codigo::mostrarInfo(){
    carregar("null");
    std::cout << "Nome: " << nome << '\n' 
              << "Data De Criacao: " << data << '\n'
              << "Exemplo:\n"
              <<'\n' << exemplo
              << "\n \n";
}

void replaceEscapeSequences(std::string& text) {
    size_t pos = 0;
    while ((pos = text.find("\\n", pos)) != std::string::npos) {
        text.replace(pos, 2, "\n");
    }
}

void CodeStorage::carregar(std::string pesquisar){
    if(pesquisar != "null"){
        std::ifstream file("codigos.config");
        int linha;
        std::string conteudo;
        while(std::getline(file, conteudo)){
            std::istringstream ss(conteudo);
            std::string _n,_d,_ex;
            std::getline(ss,_n,';');
            std::getline(ss,_d,';');
            std::getline(ss,_ex,'|');
            replaceEscapeSequences(_ex);
            if(_n == pesquisar){
                this->nome = _n;
                this->data = _d;
                this->exemplo = _ex;
                break;
            }
        }

    }
}