/**
 * Retorna -1 caso não encontre ou a posição, caso encontre.
 * https://pt.wikipedia.org/wiki/Busca_linear
 */
 int procura(char vetor[], int tamanho, char elementoProcurado) {
     int i;
     for (i = 0; i < tamanho; i++) {
         if (vetor[i] == elementoProcurado) {
             return i;
         }
     }

     return -1;
 }
