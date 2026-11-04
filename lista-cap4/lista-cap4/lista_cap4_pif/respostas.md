Respostas teóricas 

a) Em `if (x = 0)`, o operador `=` faz uma atribuição: o valor zero é armazenado em `x`. Depois, a expressão é avaliada. Como o resultado é zero, a condição é falsa e o bloco do `if` não é executado. Já `x == 0` compara o valor de `x` com zero, sem alterar a variável.
b) Em C, uma condição é falsa quando seu valor é igual a zero e verdadeira quando é diferente de zero. Isso vale para valores inteiros e reais. Portanto, qualquer número diferente de zero é considerado verdadeiro.

c) Em `if (x = -5)`, o valor -5 é atribuído a `x`. Como -5 é diferente de zero, a condição é verdadeira e o bloco associado ao `if` será executado. Isso segue a regra da linguagem C de que valores diferentes de zero representam verdadeiro.

 Questão 02 

a) Será impressa a mensagem `Opção B`. A condição `x > 10` é verdadeira, então o segundo `if` é avaliado. Como `y > 10` é falso, seu `else` é executado e imprime `Opção B`.

b)Em C, a cláusula `else` é associada ao `if` mais próximo que ainda não tenha um `else`, respeitando as regras de aninhamento.

c)Uma forma de garantir que `Opção B` seja impressa somente quando `x <= 10` é:

```c
if (x > 10) {
    if (y > 10) {
        printf("Opção A\\n");
    }
} else {
    printf("Opção B\\n");
}
```

 Questão 03 

a)A expressão `media >= 7.0` é testada. Se for verdadeira, o caractere `'A'` é atribuído a `situacao`; caso contrário, é atribuído `'R'`. Se `media = 6.8`, a condição é falsa e `situacao` recebe `'R'`.

b)A reescrita com `if-else` é:

```c
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

c) Não. O operador ternário é adequado para escolher entre duas expressões e produzir um único valor. Ele não substitui diretamente blocos `if-else` que executam vários comandos ou envolvem operações mais complexas. Nesses casos, a estrutura tradicional é mais clara.

Questão 04

a) A saída exata será:

```text
Prata
Ouro
```

O valor de `codigo` é 2, então a execução começa no `case 2`. Como não há `break` depois de `printf("Prata\\n")`, a execução continua no `case 3` e imprime `Ouro`.

b) O `break` encerra a execução do bloco `switch` e impede que os próximos casos sejam executados. Quando ele é omitido e a execução continua para os casos seguintes, ocorre o fenômeno chamado *fall-through*.

c)O argumento de `switch` deve ter tipo inteiro ou enumerado, incluindo tipos como `char`, `short` e `int` (e suas variantes inteiras). Não é permitido usar `float` ou `double`, pois a seleção dos `case` é baseada em valores constantes inteiros.

Questão 05

a) A saída será:

```text
a = 0, b = 5, c = 8
```

Como `a != 0` é falso, o operador `&&` não avalia a segunda parte. Portanto, `++b` não é executado. O `else` é executado e `c` passa de 10 para 8.

b) No operador `&&`, se a primeira condição for falsa, a expressão inteira já será falsa e a segunda condição não será avaliada. No operador `||`, se a primeira condição for verdadeira, a expressão inteira já será verdadeira e a segunda condição não será avaliada. Esse comportamento é chamado de avaliação de curto-circuito.

c) Com `if (a == 0 || ++b > 5)`, a primeira condição é verdadeira. Assim, a segunda não é avaliada. O bloco do `if` é executado, mas não altera `c` nesse trecho; logo, `b = 5` e `c = 20`? **Não:** considerando o código original, o bloco do `if` executa `c += 10`, então `c` passa de 10 para 20. Portanto, os valores finais são `b = 5` e `c = 20`.

Questão 06

a) Para `idade = 65`, serão impressas as mensagens:

```text
Idoso
Adulto
Jovem
```

As três condições independentes (`idade >= 60`, `idade >= 18` e `idade >= 12`) são verdadeiras. O `else` pertence apenas ao último `if`, e não é executado porque `idade >= 12` é verdadeiro.

b) Em uma sequência de `if` independentes, cada condição é verificada separadamente e mais de um bloco pode ser executado. Em uma cadeia `if`, `else if` e `else`, apenas o primeiro bloco cuja condição for verdadeira é executado; as alternativas seguintes são ignoradas.

c) Uma versão correta é:

```c
if (idade >= 60) {
    printf("Idoso\\n");
} else if (idade >= 18) {
    printf("Adulto\\n");
} else if (idade >= 12) {
    printf("Jovem\\n");
} else {
    printf("Criança\\n");
}
```
