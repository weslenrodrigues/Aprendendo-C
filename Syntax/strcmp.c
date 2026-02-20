#include <stdio.h>
#include <string.h>

int main () {

    int verificandoUsuario;

    char usuarioRegistro [50];
    int senhaRegistro;

    char usuarioLogin [50];
    int senhaLogin;

    puts("SEJA BEM-VINDO AO SISTEMA DE LOGIN");

    puts("Qual usuario voce quer registrar?");
    fgets(usuarioRegistro, 50, stdin);
    fflush(stdin);

    puts("Qual senha voce quer registrar?");
    scanf ("%d", &senhaRegistro);
    fflush(stdin);
    printf ("\n\n");

    puts("Parabens, sua conta foi registrada com sucesso\n");

    puts("Agora digite seu login para entrar na conta\n");

    puts("Qual seu usuario?");
    fgets(usuarioLogin, 50, stdin);
    fflush(stdin);

    puts("Qual sua senha?");
    scanf("%d", &senhaLogin);
    fflush(stdin);

    verificandoUsuario = strcmp (usuarioLogin, usuarioRegistro);

    if (verificandoUsuario == 0 && senhaLogin == senhaRegistro) {

        puts("Login realizado com sucesso");
    } else if (verificandoUsuario != 0) {

        puts("Usuario incorreto");
    } else if (senhaLogin != senhaRegistro) {

        puts("Senha incorreta");
    }
}