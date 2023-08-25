#include<iostream>
#include "./include/Codigo/codigo.hpp"

enum Estado{
    ATIVO,
    DESLIGADO
};

int pesquisar(int pesquisa){
    CodeStorage code;
    switch (pesquisa)
    {
    case 0:
        code.carregar("fortran");
        code.mostrarInfo();
        break;
    case 1:
        code.carregar("lisp");
        code.mostrarInfo();
        break;
    case 2:
        code.carregar("cobol");
        code.mostrarInfo();
        break;
    case 3:
        code.carregar("algol60");
        code.mostrarInfo();
        break;
    case 4:
        code.carregar("basic");
        code.mostrarInfo();
        break;
    case 5:
        code.carregar("c");
        code.mostrarInfo();
        break;
    case 6:
        code.carregar("pascal");
        code.mostrarInfo();
        break;
    case 7:
        code.carregar("c++");
        code.mostrarInfo();
        break;
    case 8:
        code.carregar("perl");
        code.mostrarInfo();
        break;
    case 9:
        code.carregar("python");
        code.mostrarInfo();
        break;
    case 10:
        code.carregar("ruby");
        code.mostrarInfo();
        break;
    case 11:
        code.carregar("java");
        code.mostrarInfo();
        break;
    case 12:
        code.carregar("javascript");
        code.mostrarInfo();
        break;
    case 13:
        code.carregar("php");
        code.mostrarInfo();
        break;
    case 14:
        code.carregar("c#");
        code.mostrarInfo();
        break;
    case 15:
        code.carregar("swift");
        code.mostrarInfo();
        break;
    case 16:
        code.carregar("kotlin");
        code.mostrarInfo();
        break;
    case 17:
        code.carregar("rust");
        code.mostrarInfo();
        break;
    case 18:
        code.carregar("go");
        code.mostrarInfo();
        break;

    default:
        break;
    }
    return pesquisa;
}

void limparTela(){
    #ifdef _WIN32
        system("cls");  // Para sistemas Windows
    #else
        system("clear");  // Para sistemas Unix-like (Linux, macOS)
    #endif
}

int main(){
    std::string msg = "Hello World Em Varias Linguagens:\n"
    " - 0. Fortran\n - 1. Lisp\n - 2. Cobol\n - 3. Algol60\n - 4. Basic\n - 5. C\n - 6. Pascal\n - 7. C++\n - 8. Perl\n"
    " - 9. Python\n - 10. Ruby\n - 11. Java\n - 12 JavaScript\n - 13. PHP\n - 14. C#\n - 15. Swift\n - 16. Kotlin\n - 17. Rust\n - 18. Go (GoLang)\n - 1000. Sair\n > ";
    Estado atual = ATIVO;
    
    do{

        limparTela();
        int entrada;
        std::cout << msg;
        std::cin >> entrada;
        
        if(pesquisar(entrada) == 1000){
            atual = DESLIGADO;
        };
        system("pause");

    }while(atual == ATIVO);
    return 0;
}