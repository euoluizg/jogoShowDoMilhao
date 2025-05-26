# 🎓 QuizMaster — Jogo de Perguntas e Respostas em C

**QuizMaster** é um jogo interativo estilo *Show do Milhão* desenvolvido em **linguagem C** para fins educacionais. O objetivo do projeto é reforçar conceitos de programação estruturada, modularização, uso de structs e arquivos `.h`, além de lógica condicional e manipulação de entrada do usuário.

---

## 🚀 Funcionalidades

- ✅ Menu interativo com opções para Jogar, Ver Ranking e Sair
- 🧠 5 Categorias com 20 perguntas cada:
  - Conhecimentos Gerais
  - Ciências
  ️- História
  - Geografia
  - Tecnologia
- 🎲 Sorteio aleatório de 5 perguntas da categoria selecionada
- 📝 Validação de entrada do usuário
- 📊 Sistema de ranking local com os 5 melhores jogadores
- 🔁 Possibilidade de jogar várias rodadas sem reiniciar o programa

---

## 🗂 Estrutura do Projeto

```text
📦 quizmaster/
├── main.c                 # Código principal e lógica do menu
├── perguntas.c            # Base de dados das perguntas por categoria
├── perguntas.h            # Definição de structs e protótipos
├── randomizer.c           # Lógica para sorteio aleatório (Fisher-Yates)
├── randomizer.h           # Header para randomizer
├── Makefile               # Script de build com gcc
└── README.md              # Este arquivo
```

---

## ⚙️ Compilação

### Usando `make` (recomendado)

```bash
make
./main
```

### Manual com `gcc`

```bash
gcc main.c perguntas.c randomizer.c -o quiz
./quiz
```

---

## 💻 Exemplo de Execução

```text
========= MENU PRINCIPAL =========
1. Jogar
2. Ver Ranking
3. Sair
Escolha uma opcao: 1

Digite seu nome: Luíz
Escolha uma categoria:
1. Conhecimentos Gerais
...

Pergunta 1: Qual é o maior planeta do sistema solar?
A) Terra
B) Júpiter
C) Saturno
D) Netuno
Sua resposta: B
Correto!

Você acertou 4 de 5 perguntas.

=== TOP 5 JOGADORES ===
1. Luíz - 4 pontos
2. Ana - 3 pontos
...
```

---

## 🧰 Tecnologias e Conceitos Aplicados

- Linguagem C (padrão ANSI C)
- Modularização com `.h` e `.c`
- Structs e arrays de structs
- Randomização com algoritmo de **Fisher-Yates**
- Manipulação de entrada segura
- Lógica condicional e controle de fluxo
- Menu com laço principal e validação de entrada
- Sistema de ranking local sem persistência externa

---

## 🎯 Objetivos Acadêmicos

Este projeto foi desenvolvido por um estudante de **Sistemas de Informação** com foco em:

- Praticar linguagem C de forma aplicada
- Reforçar uso de arrays, structs, funções e modularização
- Simular um fluxo completo de aplicação com interação de usuário
- Produzir um projeto pronto para publicação no GitHub

---

## 📄 Licença

Este projeto é de uso educacional e livre para modificações e redistribuições com os devidos créditos. Para fins comerciais, consulte o autor.

---

**Divirta-se testando seus conhecimentos com o QuizMaster!**
