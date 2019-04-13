# Códigos do curso de Lógica de Programação - Ciência da Computação - UFT

Este documento reune um resumo das aulas presenciais.

# Ambiente 
O laboratório nos ofecerece os seguintes ambientes:

* GNU/Linux Ubuntu 16.04 
* Editor de textos `gedit`
* Terminal (ctrl + alt + t) para acionar o terminal 
* `gcc` compilador de códigos C

## Dicas com o terminal

* `pwd` este comando revela qual o caminho que o terminal está
* ao abrir um terminal, usualmente você estará na pasta home de seu usuário
* `cd` permite mudar de diretório
* `cd ..` retorna para a pasta acima
* `ls` exibe uma listagem dos arquivos na pasta corrente
* a tecla tab completa partes dos itens
* através das setas de navegação do teclado é possível navegar pelo histórico de comandos já digitados

## Passos para a compilação
Assume-se aqui que o terminal esteja aberto.

1. `gedit nomearquivo.c &` [enter]
...Uma janela do gedit vai abrir aqui, se o arquivo `nomearquivo.c` não existir, o gedit vai criá-lo como vazio, se existir, o gedit vai tentar abrir o arquivo.
2. Ao finalizar a edição do código, lembre-se de salvá-lo (ctrl+s) no gedit
3. Retorne ao terminal (alt+tab)
4. Entre com o comando: `gcc nomearquivo.c -o nomeexec` [enter]

Se seu código não possuir qualquer erro sintático, o compilador retornará *nada*. Indicando que deu tudo certo e o programa binário executável por nome `nomeexec` agora passa a existir. 

5. Para executá-lo no terminal: `./nomeexec` [enter]

Boa codificação. 