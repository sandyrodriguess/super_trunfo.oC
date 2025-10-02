# Super Trunfo de Cidades

![Linguagem C](https://img.shields.io/badge/Linguagem-C-blue)
![Nível](https://img.shields.io/badge/Nível-Iniciante-green)

## Descrição
Este projeto em **C** permite cadastrar cartas para um jogo de **Super Trunfo**, onde cada carta representa uma cidade com informações como estado, código, população, área, PIB e número de pontos turísticos.  

O objetivo é **praticar leitura de dados do usuário, armazenamento em variáveis e exibição de informações de forma organizada**.

## Funcionalidades
- Cadastro de **duas cartas de cidades**.
- Cada carta contém:
  - Estado
  - Código da carta
  - Nome da cidade
  - População
  - Área (km²)
  - PIB (bilhões)
  - Número de pontos turísticos
- Exibição das cartas em **formato de lista ou tabela**, fácil de ler.

## Exemplo de entrada
```txt
=== Carta 1 ===

Digite o nome do estado: Pará
Digite o código da carta (ex: A01): A01
Digite o nome da cidade: Marabá
Digite a população: 12325000
Digite a área (km²): 1521.11
Digite o PIB (bilhões): 699.28
Digite o número de pontos turísticos: 50

=== Carta 2 ===
Digite o nome do estado: Rio de Janeiro
Digite o código da carta (ex: B02): B02
Digite o nome da cidade: Maricá
Digite a população: 6748000
Digite a área (km²): 1200.25
Digite o PIB (bilhões): 300.50
Digite o número de pontos turísticos: 30
```


## Exemplo de saída (tabela estilo Super Trunfo)

| Atributo                   | Carta 1                  | Carta 2              |
|----------------------------|-------------------------|--------------------|
| Estado                     | Pará                    | Rio de Janeiro     |
| Código                     | A01                     | B02                |
| Nome da Cidade             | Marabá                  | Maricá             |
| População                  | 12.325.000              | 6.748.000          |
| Área (km²)                 | 1521.11                 | 1200.25            |
| PIB (bilhões)              | 699.28                  | 300.50             |
| Número de Pontos Turísticos| 50                      | 30                 |

## Como usar

Siga os passos abaixo para executar o programa:

1. **Clone o repositório:**
```bash
git clone https://github.com/sandyrodriguess/super_trunfo.oC
```

2. ***Compile o código:*** 
```bash
gcc SuperTrunfo.c -o SuperTrunfo.exe
```

```bash
# Linux/macOS
./SuperTrunfo.exe

# Windows
SuperTrunfo.exe
```

## Tecnologias Utilizadas:
Linguagem: C

Compilador: GCC (C/C++)

## Observações:
- Projeto de nível iniciante, focado em entrada e saída de dados.
- Não implementa lógica de comparação entre cartas nem funcionalidades avançadas do jogo.
- Ideal para praticar variáveis, leitura de dados e exibição organizada de informações.
