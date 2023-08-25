#ifndef CODIGO_HPP
#define CODIGO_HPP

#include<iostream>
#include<fstream>
#include<sstream>
class Codigo{
    public:
        void mostrarInfo();

    protected:
        virtual void carregar(std::string pesquisar) = 0;
        std::string nome; // Nome Da Linguagem;
        std::string data; // Data De Criaçao;
        std::string exemplo; // Exemplo Da Linguagem De Programaçao;
};

class CodeStorage: public Codigo{
    public:
        void carregar(std::string pesquisar) override;
};
#endif