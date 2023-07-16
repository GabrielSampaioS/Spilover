# Spilover
Objetivo do projeto é o desenvolvimento de uma simulçao de trasmição de um virus
Utilizando como base o Modelo SIR, e algumas ideias sobre o virus
Como mutação do mesmo, virulencia e infectividade

<H1> Modelo SIR </H1>
O modelo SIR é um modelo bem conhecido na literatura, é uma visão de alto nivel sobre a evolução de uma população em epidemias, onde temos:
<li> Suscetível (S)  : indivíduos ainda não expostos e que podem adquirir a infecção. </li>
<li> Infectada  (I)  : indivíduos infectados, doentes ou não, que podem transmitir para outras pessoas. </li>
<li> Recuperada (R)  : indivíduos que se infectaram e se recuperaram, adquirindo imunidade </li>

<br> Inicialmente os parâmetros são estimados com base no conhecimento acumulado em epidemias anteriores ou, da própria epidemia e do seu desenvolvimento em outros locais

<br> A equação do modelo: 

![modeloSIR](https://github.com/GabrielSampaioS/Spilover/assets/89399378/e527e0df-a809-4218-b55a-4d04a6b92454)

<br>onde temos:

<li> β e γ são positivos </li>
<li> β a taxa de infecção </li> 
<li> γ  a taxa de recuperação dos indivíduos, </li> 
<li> N = S + I + R = População total </li> 

<br> Um detalhe importante, β é a taxa de infecção entre os hospedeiros e <strong> NÂO </strong> a taxa de infecção do virus para o hospedeiro. Para isso vamos utilizar algumas outras ideas para simular o virus

<H1> Vírus </H1>
Vamos começar com uma definição por David Quammen no livro dele: Virulência é um conceito tão relativo e caleidoscópico que alguns especialistas se recusam a usar essa palavra. Eles preferem "patogenicidade", que é quase um sinônimo, mas não exatamente. Patogenicidade é a capacidade de um micróbio de causar uma doença. Virulência é o grau mensurável da tal doença, especialmente quando a medida em relação a outras cepas de patógenos semelhantes.

<br> E um velho clichê sobre a virulência: A primeira regra de sucesso para um parasita é "não mate seus hospedeiro" 
porem o que os dados vem mostrando é que na verdade a regra é "Só queime as pontes depois de atravessá-lá"

4 desafios básicos(não vamos nos preocuprar com essas partes no código):
<ol type="1">
<li>Como passar de um hospedeiro para outro</li>
<li>Como penetrar numa célula dentro desse hospedeiro</li>
<li>Como se apoderar do equipamento e dos recursos da célula para produzir várias cópias de si mesmo</li>
<li>Como sair novamente - sair da célula, sair do hospedeiro, e como entrar no próximo</li>



<H1> Links utilizados de apoio neste projeto: </H1>
  
https://wp.ufpel.edu.br/fentransporte/2020/04/09/a-evolucao-epidemica-do-covid-19-modelo-sir/

<H1> Livros : </H1>

Contágio: Infecções de origem animal, por David Quammen (Autor)

