# exercicios-programacao-1-e-desafio
Para cada questão abaixo, responda às três perguntas (o que quero resolver, o 
que preciso para resolver, como vou resolver), construa o fluxograma e depois
faça o código C que condiz com o fluxograma.

1. Você foi contratado para ajudar a equipe de uma gráfica que produz adesivos
circulares. Antes de imprimir cada lote, o operador precisa conferir duas
informações para planejar a produção:
● quanto material será necessário para cobrir o adesivo;
● qual será o comprimento da borda onde será aplicado o acabamento.
Crie um algoritmo que receba as informações necessárias do adesivo e mostre,
como resultado, os dois valores calculados para um único modelo de adesivo.

2. Uma marcenaria está padronizando a fabricação de placas quadradas de
madeira para prateleiras. Para registrar cada peça no sistema e calcular alguns
parâmetros de corte e acabamento, o responsável precisa informar apenas
uma medida da placa e, a partir disso, obter automaticamente:
● o tamanho total das quatro bordas que receberão acabamento,
● a quantidade de área que será coberta por verniz,
● e o comprimento da medida de canto a canto para conferir o esquadro
durante o corte.
Faça um algoritmo que leia as informações necessárias e imprima, na tela,
esses três resultados.

3. Em um laboratório de calibração, dois sensores fornecem leituras reais para a
medição da vibração de um motor em um mesmo instante: uma leitura vem do
sensor A e a outra do sensor B. Para analisar a divergência entre eles, o
técnico calcula duas medidas diferentes no relatório:
● O indicador C que considera a diferença entre as leituras antes de ampliar
o efeito ao quadrado;
● O indicador D que considera o efeito de cada leitura separadamente,
ampliando-as ao quadrado e depois calculando a diferença entre os
resultados.
Escreva um algoritmo que leia as informações necessárias e imprima os dois
indicadores calculados. A saída deve deixar claro qual valor corresponde a cada
medida do relatório.

Desafio.
Essa questão NÃO entra no critério de entrega e NÃO é obrigatória sua resolução.
O propósito é trazer uma questão difícil para aqueles que aceitarem o desafio.
4. Em um banco digital, as contas-correntes de um certo sistema são identificadas
por um número com exatamente três dígitos. Para reduzir erros de digitação, o
sistema calcula automaticamente um dígito verificador a partir desse número
e o utiliza para validar a conta informada.
Sua tarefa é implementar um algoritmo do cálculo desse dígito verificador. O
programa deve ler o número da conta (considere que sempre serão digitados 3
dígitos) e imprimir apenas o dígito verificador correspondente, seguindo o
procedimento usado pelo banco:
● Forme o inverso do número da conta.
● Some o número original com o seu inverso.
● Pegue o resultado da soma e, considerando seus dígitos da esquerda para a
direita, multiplique:
○ o 1º dígito por 1,
○ o 2º dígito por 2,
○ o 3º dígito por 3,
○ (se o resultado tiver 4 dígitos, continue: 4º dígito por 4),
○ e some todos esses produtos.
O último dígito dessa soma final é o dígito verificador.
Use o exemplo abaixo como referência para conferir se seu programa está
seguindo o mesmo padrão do sistema:
● Número da conta: 235
● Inverso: 532
● Soma: 235 + 532 = 767
● Cálculo posicional: 7×1 + 6×2 + 7×3 = 40
● Dígito verificador: 0
