# ♟️ Movimentando as Peças do Xadrez em C

## 🎯 Objetivo

Este programa em C simula o movimento de três peças de xadrez — **Torre**, **Bispo** e **Rainha** — utilizando as estruturas de repetição `for`, `while` e `do-while`.
O foco é praticar controle de fluxo e repetição, aplicando conceitos básicos de programação estruturada.

---

## 🧠 Conceitos Praticados

* Estruturas de repetição (`for`, `while`, `do-while`)
* Impressão sequencial de ações no console (`printf`)
* Organização e documentação de código
* Lógica de movimentação simples em um tabuleiro de xadrez

---

## 📜 Código-Fonte

Arquivo: `xadrez.c`

```c
#include <stdio.h>

int main() {
    
    // Simulação de Movimentos no Xadrez
    // Peças: Torre, Bispo e Rainha
    // Estruturas usadas: for, while e do-while
    

    // TORRE → Movimento em linha reta (horizontal ou vertical)
    // Usa estrutura de repetição FOR
   
    int movimentoTorre = 5;
    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    printf("\n");

   
    // BISPO → Movimento na diagonal
    // Usa estrutura WHILE
    
    int movimentoBispo = 5;
    int contador = 1;
    printf("=== Movimento do Bispo ===\n");
    while (contador <= movimentoBispo) {
        printf("Cima e Direita (%d casa)\n", contador);
        contador++;
    }

    printf("\n");

    
    // RAINHA → Movimento em todas as direções
    // Usa estrutura DO-WHILE
  
    int movimentoRainha = 8;
    int contadorRainha = 1;
    printf("=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda (%d casa)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    printf("\nMovimentos concluídos!\n");

    return 0;
}
```

---

## 🧩 Saída Esperada no Console

```
=== Movimento da Torre ===
Direita (1 casa)
Direita (2 casa)
Direita (3 casa)
Direita (4 casa)
Direita (5 casa)

=== Movimento do Bispo ===
Cima e Direita (1 casa)
Cima e Direita (2 casa)
Cima e Direita (3 casa)
Cima e Direita (4 casa)
Cima e Direita (5 casa)

=== Movimento da Rainha ===
Esquerda (1 casa)
Esquerda (2 casa)
Esquerda (3 casa)
Esquerda (4 casa)
Esquerda (5 casa)
Esquerda (6 casa)
Esquerda (7 casa)
Esquerda (8 casa)

Movimentos concluídos!
```

---

## ⚙️ Como Compilar e Executar

No terminal (Linux, macOS ou Windows com MinGW):

```bash
gcc xadrez.c -o xadrez
./xadrez
```

---

## 🧭 Estrutura do Código

| Peça       | Direção simulada | Estrutura usada | Movimento |
| ---------- | ---------------- | --------------- | --------- |
| **Torre**  | Direita          | `for`           | 5 casas   |
| **Bispo**  | Cima e Direita   | `while`         | 5 casas   |
| **Rainha** | Esquerda         | `do-while`      | 8 casas   |

---

## 🏁 Conclusão

O programa demonstra com clareza o uso das principais estruturas de repetição em C aplicadas a um contexto lúdico — o xadrez.
Cada peça segue um padrão de movimento simples e previsível, servindo como base para os desafios intermediário e avançado.

**Autor:** Deyvison Alcantara da Silva
**Linguagem:** C


