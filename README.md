
# Super Trunfo - Jogo de Comparação de Países

Este programa implementa um jogo estilo "Super Trunfo" onde dois países são comparados em base a diversos atributos. O jogador escolhe dois atributos para comparar e a carta com a maior soma de valores vence.

## Funcionalidades

- Cadastro dos dados de dois países (nome, população, área, PIB, pontos turísticos).
- Comparação entre dois atributos de cada país, com possibilidade de escolher atributos diferentes para cada rodada.
- Cálculo da densidade demográfica para comparação, considerando que a menor densidade vence.
- O programa exibe o vencedor da comparação com base na soma dos valores dos dois atributos escolhidos.

## Atributos para Comparação

Os atributos disponíveis para a comparação são:

1. **População** (número de habitantes)
2. **Área** (em km²)
3. **PIB** (em bilhões de dólares)
4. **Pontos Turísticos** (número de pontos turísticos)
5. **Densidade Demográfica** (população / área, sendo que a menor densidade vence)

## Como Compilar e Executar

### Requisitos

- Um compilador de C (ex: GCC).
- Sistema operacional: Linux, macOS, ou Windows (com compilador adequado).

### Passos

1. **Compilar o código**:

   Se você está usando o GCC, abra o terminal ou prompt de comando e execute o seguinte comando para compilar o código:

   ```
   gcc super_trunfo.c -o super_trunfo
   ```

2. **Executar o programa**:

   Após a compilação, execute o programa com o seguinte comando:

   ```
   ./super_trunfo
   ```

3. **Seguir as instruções do menu**:

   O programa pedirá para você inserir os dados dos países e escolher os atributos para a comparação.

### Exemplo de Execução

Após iniciar o programa, você verá algo assim:

```
Informe os dados do primeiro país:
Nome do país: Portugal
População: 10276617
Área (em km²): 92212.3
PIB (em bilhões): 238.3
Pontos Turísticos: 28

Informe os dados do segundo país:
Nome do país: Espanha
População: 46719142
Área (em km²): 505992
PIB (em bilhões): 1402.6
Pontos Turísticos: 58

Escolha o primeiro atributo para comparação:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica
3
Comparação 1:
PIB: Portugal = 238.30 | Espanha = 1402.60

Escolha o segundo atributo (diferente do primeiro):
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica
1
Comparação 2:
População: Portugal = 10276617 | Espanha = 46719142

Resultado final:
Portugal - Soma: 1640.30
Espanha - Soma: 46719.14
Vitória de Espanha!
```

## Explicação do Funcionamento

1. **Cadastro dos Dados**: O programa solicita os dados de dois países, como nome, população, área, PIB e pontos turísticos.
2. **Escolha dos Atributos**: O jogador escolhe dois atributos a serem comparados. O primeiro menu exibe todas as opções de atributos e o segundo menu permite escolher um atributo diferente.
3. **Comparação dos Atributos**: O programa compara os dois atributos escolhidos, e para cada um, exibe os valores dos países.
4. **Cálculo e Exibição do Resultado**: A soma dos valores dos dois atributos é calculada para cada país, e o vencedor é determinado pela maior soma. Caso haja empate, a mensagem "Empate!" é exibida.

## Considerações Finais

Este programa é uma implementação simples de um jogo baseado no conceito de "Super Trunfo". 
