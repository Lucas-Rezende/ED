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
 ![Frame 2](https://github.com/Lucas-Rezende/ED/assets/66080424/4d03d8eb-bc4e-49ca-a8a2-b92022a0fb19)
![Frame 3](https://github.com/Lucas-Rezende/ED/assets/66080424/afb62464-2a94-4916-b281-5235c1fa37ea)
![Pilhas comparação](https://github.com/Lucas-Rezende/ED/assets/66080424/78ed569d-5d54-4706-9222-02e1b6185596)

 ## Fontes
<ul>
 <li>https://www.geeksforgeeks.org/data-structures/</li>
 <li>https://www.geeksforgeeks.org/time-and-space-complexity-analysis-of-stack-operations/</li>
 <li>https://www.geeksforgeeks.org/implement-a-stack-using-singly-linked-list/</li>
</ul>
