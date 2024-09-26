
#ifndef CLIENTE.H
#define CLIENTE.H

    typedef struct
    {
        char nome[100];
        char cpf[15];
        char email[100];
}Cliente;

int validar_cpf (char *cpf);
int validar_email(char *email);

#endif