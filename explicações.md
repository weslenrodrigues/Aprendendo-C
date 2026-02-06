Aqui eu vou explicar para mim mesmo o que cada coisa faz na linguagem C

**📌 ESTRUTURA BÁSICA**
*//o #include coloca meio que uns mods no codigo*
#include <stdio.h>
#include <string.h>
#include <locale.h>

//é necessário para iniciar um codigo
int main() {
    return 0;
}





**📥 ENTRADA / SAÍDA**

*//se eu quiser colocar um texto + uma variavel eu uso o printf*
printf 
    printf("Texto\n");
    printf("Nome: %s\n", nome);
    printf("Numero: %d\n", x);


*//eu uso apenas em strings*
puts
puts("Texto");
puts(nome);

*//serve para fazer perguntas ao usuario relacionadas a variaveis tipo: int, float e double*
scanf
scanf("%d", &x); */ 
scanf("%f", &y);
--------------------------------
*//é um scanf voltado para strings*
fgets

fgets(nome, 100, stdin);


**📦 VARIÁVEIS**

int x;
--------------------------------
float y; //mostra virgulas
--------------------------------
double z; 
--------------------------------
char letra; //só pode botar 1 caractere
--------------------------------
char nome[100]; //oq está dentro do [] é para limitar quantos caracteres vai ter na palavra/frase

*// Existe 4 tipos de "%x"
%d é para int
--------------------------------
%f é para float
--------------------------------
% é para double
--------------------------------
%s é para char


**🔀 CONDIÇÕES**

if (condicao) { } *//se a condição i>10 oq tiver escrito entre as chaves, aquilo vai acontecer*
--------------------------------
else { } *//se o if não acontece, ele joga para o else*
--------------------------------
else if (outra_condicao) { } *//posso colocar um if dentro de um else*


**Operadores**

"==" se o "i" for igual a x
--------------------------------
"!=" se o "i" for diferente de x
--------------------------------
">" se o "i" for maior que x
--------------------------------
"<"  se o "i" for menor que x
--------------------------------
">=" se o "i" for maior ou igual a x
--------------------------------
"<=" se o "i" for menor ou igual a x

**🔁 LAÇOS**

while *//faça estas ações que estão na chave até que uma variavel chegue na condição. Exemplo:* while (i>x) {
    printf ("testando");
    i++ *//serve para aumentar o numero do "i" para que chegue na condição, caso contrario ele vai ficar repetindo infinitamente*
}
while (condicao) {}
--------------------------------

do while *//faça estas ações primeiro e depois veja se ele chegou na condição, ele serve pra rodar pelo menos uma vez no codigo, está é a diferença dele pro while normal*

do {
} while (condicao);

--------------------------------

for *//é um while mais clean*
for (int i = 0; i < 10; i++) {
}

--------------------------------

**🔤 STRINGS (conceito)**

char nome[20] = "Ana"; //é o jeito que a linguagem C guarda variaveis que são textos

📏 strlen
tamanho = strlen(nome); //me fala quantos caracteres tem a palavra/frase

📋 strcpy
strcpy(destino, origem); //eu consigo trocar a string1 (destino) pela string2 (origem), mesmo fazendo isto no meio do código

⚖️ strcmp
strcmp(str1, str2);

if (strcmp(str1, str2) == 0) {
}

➕ strcat
strcat(destino, origem);