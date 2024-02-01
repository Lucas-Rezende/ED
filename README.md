# ED
 Repositório para armazenar exercícios e resumos das aulas de Estruturas de Dados, lecionadas na UFMG.

 ## O que são estruturas de dados?
 Estruturas de dados podem ser vistas como TADs responsáveis por armazenar e organizar dados. São formas de armazenar e acessar dados de forma eficiente.

 ## Listas
 Representação de um conjunto de elementos. Pode acessar, inserir e remover elementos em qualquer posição. Há duas abordagens para a criação de listas, elas são: sequenciais e encadeadas.
 Ambas possuem as seguintes operações:
 <ul>
 <li>Criar lista</li>
 <li>Get e Set</li>
 <li>Verificar se a listá está vazia</li>
 <li>Inserção (no início, no final, em uma posição x)</li>
 <li>Remoção (no início, no final, em uma posição x)</li>
 <li>Pesquisar por elemento</li>
 <li>Imprimir lista</li>
 <li>Limpar lista</li>
</ul>
 
 ### Listas Sequenciais
 Faz uso de arrays e possui alocação estática (a lista possui tamanho máximo). Os elementos são inseridos no array a partir da posição 0, ou seja, quaisquer x-ésimo elemento estará na posição (x-1).<br/><br/>
 A inserção e remoção, caso seja do pultimo elemento, tem custo O(1). Em demais posições, será O(1) no melhor caso e o O(n) no pior caso. Os gets e sets tem custo O(1), haja vista que irão direto a posição. A pesquisa, no melhor caso, será O(1), ou seja, o elemento procurado está na primeira posição, ou será O(n), quando o elemento pesquisado estiver na última posição. A impressão dos elementos sempre será O(n), já que irá percorrer toda a lista.<br/><br />
  **✅ Vantagens de listas sequenciais:** Fácil implementação, não faz uso de ponteiros, economiza memória e os acessos aos itens (gets e sets) são O(1).<br/><br/>
  **❌ Desvantagens de listas sequenciais:** Possui tamanho máximo fixado, ou seja, pode acarretar problemas em usos com muitos dados. Ademais, o custo de inserção e remoção, no pior caso, pode ser O(n).
  
![Frame 1](https://github.com/Lucas-Rezende/ED/assets/66080424/15cc3019-7f24-4985-a2c9-fa7de1ce976c)

 ### Listas Encadeadas
 Faz uso de ponteiros e possui alocação dnâmica.

 ## Pilhas
A Pilha, também conhecida como stack, é um tipo de estrutura de dados que segue o princípio do último a entrar, primeiro a sair (LIFO - Last In, First Out). Essa estrutura é caracterizada por operações de push e pop restritas a um único extremo, denominado topo da pilha. Elementos são adicionados ou removidos apenas do topo, e o acesso direto a elementos intermediários não é permitido. Mais detalhes e características podem ser observados a seguir:
 <div style="display: flex; justify-content: space-between;">
    <img src="https://github.com/Lucas-Rezende/ED/blob/main/img/Pilhas%20Arrays.png" alt="Imagem 1" style="width: 32%;">
    <img src="https://github.com/Lucas-Rezende/ED/blob/main/img/Pilhas%20Ponteiros.png" alt="Imagem 2" style="width: 32%;">
    <img src="https://github.com/Lucas-Rezende/ED/blob/main/img/Pilhas%20compara%C3%A7%C3%A3o.png" alt="Imagem 3" style="width: 32%;">
</div>

## Listas
Filas (queues) são estruturas de dados que seguem o princípio "First In, First Out" (FIFO), onde o primeiro elemento inserido é o primeiro a ser removido. Essa organização linear é essencial em situações em que a ordem de chegada dos elementos é crucial.
 <div style="display: flex; justify-content: space-between;">
    <img src="https://github.com/Lucas-Rezende/ED/blob/main/img/Filas%20Arrays.png" alt="Imagem 1" style="width: 98%;">
</div>

 ## Fontes
<ul>
 <li>https://www.geeksforgeeks.org/data-structures/</li>
 <li>https://www.geeksforgeeks.org/time-and-space-complexity-analysis-of-stack-operations/</li>
 <li>https://www.geeksforgeeks.org/implement-a-stack-using-singly-linked-list/</li>
</ul>
