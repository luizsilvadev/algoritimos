# include <stdio.h>
# define zero 48
# define MAX 8
# define TRUE 1
# define FALSE 0

//Funcao com os movimentos do peao
int peaobranco (char tabuleiro[MAX][MAX], int i, int j){
	int indicei = i;
	int indicej = j;

	if (tabuleiro[i + 1][j - 1] == 'P'){
		printf ("Rei Preto (%c,%d) - Peao Branco (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j - 1) + 'a'), (MAX - (i + 1)));
		return TRUE;
	}
	else if (tabuleiro[i + 1][j + 1] == 'P'){
		printf ("Rei Preto (%c,%d) - Peao Branco (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j + 1) + 'a'), (MAX - (i + 1)));
		return TRUE;
	}
	else
		return FALSE;
}// fim funcao peao branco

//Funcao com os movimentos do peao
int peaopreto (char tabuleiro[MAX][MAX], int i, int j){
	int indicei = i;
	int indicej = j;

	if (tabuleiro[i - 1][j + 1] == 'p'){
		printf ("Rei Branco (%c,%d) - Peao Preto (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j + 1) + 'a'), (MAX - (i - 1)));
		return TRUE;
	}
	else if (tabuleiro[i - 1][j - 1] == 'p'){
		printf ("Rei Branco (%c,%d) - Peao Preto (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j - 1) + 'a'), (MAX - (i - 1)));
		return TRUE;
	}
	else
		return FALSE;
}// fim funcao peao preto

//Funcao com os movimentos da Torre
int torre (char tabuleiro[MAX][MAX], int i, int j, char t){
	int k;
	int indicei = i;
	int indicej = j;

	for (k = i+1; k < MAX; k++) {
		if (tabuleiro[k][j] != '0' && tabuleiro[k][j] != t) {
			break;
		}
		else if (tabuleiro[k][j] == t) {
			if (tabuleiro[k][j] == 't'){
				printf ("Rei Branco (%c,%d) - Torre Preta (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (j + 'a'), (MAX - k));
			}
			else if (tabuleiro[k][j] == 'T'){
				printf ("Rei Preto (%c,%d) - Torre Branca (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (j + 'a'), (MAX - k));
			}
			return TRUE;
		}
	}//movimento inferior

	for (k = i-1; k >= 0; k--){
		if (tabuleiro[k][j] != '0' && tabuleiro[k][j] != t) {
			break;
		}
		else if (tabuleiro[k][j] == t) {
			if (tabuleiro[k][j] == 't'){
				printf ("Rei Branco (%c,%d) - Torre Preta (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (j + 'a'), (MAX - k));
			}
			else if (tabuleiro[k][j] == 'T'){
				printf ("Rei Preto (%c,%d) - Torre Branca (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (j + 'a'), (MAX - k));
			}
			return TRUE;
		}
	}// movimento superior

	for (k = j-1; k >= 0; k--){
		if (tabuleiro[i][k] != '0' && tabuleiro[i][k] != t) {
			break;
		}
		else if (tabuleiro[i][k] == t) {
			if (tabuleiro[i][k] == 't'){
				printf ("Rei Branco (%c,%d) - Torre Preta (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (k + 'a'), (MAX - i));
			}
			else if (tabuleiro[i][k] == 'T'){
				printf ("Rei Preto (%c,%d) - Torre Branca (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (k + 'a'), (MAX - i));
			}
			return TRUE;
		}
	}// movimento para a esquerda

	for (k = j+1; k < MAX; k++){
		if (tabuleiro[i][k] != '0' && tabuleiro[i][k] != t) {
			break;
		}
		else if (tabuleiro[i][k] == t) {
			if (tabuleiro[i][k] == 't'){
				printf ("Rei Branco (%c,%d) - Torre Preta (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (k + 'a'), (MAX - i));
			}
			else if (tabuleiro[i][k] == 'T'){
				printf ("Rei Preto (%c,%d) - Torre Branca (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (k + 'a'), (MAX - i));
			}
			return TRUE;
		}
	}// /movimento para a direita

	return FALSE;
}// fim funcao torre

//Funcao com os movimentos do Cavalo
int cavalobranco (char tabuleiro[MAX][MAX], int i, int j){
	int indicei = i;
	int indicej = j;

	if ((tabuleiro[i + 2][j + 1] == 'C') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Preto (%c,%d) - Cavalo Branco (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j + 1) + 'a'), (MAX - (i + 2)));
		return 1;
	}
	else if ((tabuleiro[i + 2][j - 1] == 'C') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Preto (%c,%d) - Cavalo Branco (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j - 1) + 'a'), (MAX - (i + 2)));
		return 1;
	}
	else if ((tabuleiro[i - 2][j + 1] == 'C') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Preto (%c,%d) - Cavalo Branco (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j + 1) + 'a'), (MAX - (i - 2)));
		return 1;
	}
	else if ((tabuleiro[i - 2][j - 1] == 'C') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Preto (%c,%d) - Cavalo Branco (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j - 1) + 'a'), (MAX - (i - 2)));
		return 1;
	}
	else if ((tabuleiro[i + 1][j + 2] == 'C') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Preto (%c,%d) - Cavalo Branco (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j + 2) + 'a'), (MAX - (i + 1)));
		return 1;
	}
	else if ((tabuleiro[i - 1][j + 2] == 'C') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Preto (%c,%d) - Cavalo Branco (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j + 2) + 'a'), (MAX - (i - 1)));
		return 1;
	}
	else if ((tabuleiro[i + 1][j - 2] == 'C') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Preto (%c,%d) - Cavalo Branco (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j - 2) + 'a'), (MAX - (i + 1)));
		return 1;
	}
	else if ((tabuleiro[i - 1][j - 2] == 'C') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Preto (%c,%d) - Cavalo Branco (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j - 2) + 'a'), (MAX - (i - 1)));
		return 1;
	}
	else
		return 0;
}//fim funcao cavalo branco

//Funcao com os movimentos do Cavalo
int cavalopreto (char tabuleiro[MAX][MAX], int i, int j){
	int indicei = i;
	int indicej = j;

	if ((tabuleiro[i + 2][j + 1] == 'c') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Branco (%c,%d) - Cavalo Preto (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j + 1) + 'a'), (MAX - (i + 2)));
		return 1;
	}
	else if ((tabuleiro[i + 2][j - 1] == 'c') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Branco (%c,%d) - Cavalo Preto (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j - 1) + 'a'), (MAX - (i + 2)));
		return 1;
	}
	else if ((tabuleiro[i - 2][j + 1] == 'c') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Branco (%c,%d) - Cavalo Preto (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j + 1) + 'a'), (MAX - (i - 2)));
		return 1;
	}
	else if ((tabuleiro[i - 2][j - 1] == 'c') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Branco (%c,%d) - Cavalo Preto (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j - 1) + 'a'), (MAX - (i - 2)));
		return 1;
	}
	else if ((tabuleiro[i + 1][j + 2] == 'c') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Branco (%c,%d) - Cavalo Preto (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j + 2) + 'a'), (MAX - (i + 1)));
		return 1;
	}
	else if ((tabuleiro[i - 1][j + 2] == 'c') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Branco (%c,%d) - Cavalo Preto (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j + 2) + 'a'), (MAX - (i - 1)));
		return 1;
	}
	else if ((tabuleiro[i + 1][j - 2] == 'c') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Branco (%c,%d) - Cavalo Preto (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j - 2) + 'a'), (MAX - (i + 1)));
		return 1;
	}
	else if ((tabuleiro[i - 1][j - 2] == 'c') && ((i < MAX) && (j < MAX) && (i >= 0) && (j >= 0))){
		printf ("Rei Branco (%c,%d) - Cavalo Preto (%c,%d)\n", (indicej + 'a'), (MAX - indicei), ((j - 2) + 'a'), (MAX - (i - 1)));
		return 1;
	}
	else
		return 0;
}//fim funcao cavalo preto

//Funcao com os movimentos do Bispo
int bispo (char tabuleiro[MAX][MAX], int i, int j, char B){
	int k, l;
	int indicei = i;
	int indicej = j;

	for (k = i-1, l = j+1; k >= 0 && l < MAX; k--, l++){
		if (tabuleiro[k][l] != '0' && tabuleiro[k][l] != B) {
			break;
		}
		else if (tabuleiro[k][l] == B) {
			if (tabuleiro[k][l] == 'b'){
				printf ("Rei Branco (%c,%d) - Bispo Preto (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
			else if (tabuleiro[k][l] == 'B'){
				printf ("Rei Preto (%c,%d) - Bispo Branca (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
			return TRUE;
		}
	}//movimento diagonal superior direita

	for (k = i-1, l = j-1; k >= 0 && l >= 0; k--, l--){
		if (tabuleiro[k][l] != '0' && tabuleiro[k][l] != B) {
			break;
		}
		else if (tabuleiro[k][l] == B) {
			if (tabuleiro[k][l] == 'b'){
				printf ("Rei Branco (%c,%d) - Bispo Preto (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
			else if (tabuleiro[k][l] == 'B'){
				printf ("Rei Preto (%c,%d) - Bispo Branco (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
			return TRUE;
		}
	}//movimento diagonal superior esquerda

	for (k = i+1, l = j+1; k < MAX && l < MAX; k++, l++){
		if (tabuleiro[k][l] != '0' && tabuleiro[k][l] != B) {
			break;
		}
		else if (tabuleiro[k][l] == B) {
			if (tabuleiro[k][l] == 'b'){
				printf ("Rei Branco (%c,%d) - Bispo Preto (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
			else if (tabuleiro[k][l] == 'B'){
				printf ("Rei Preto (%c,%d) - Bispo Branco (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
				return TRUE;
		}
	}//movimento diagonal inferior direita

	for (k = i+1, l = j-1; k < MAX && l >= 0; k++, l--){
		if (tabuleiro[k][l] != '0' && tabuleiro[k][l] != B) {
			break;
		}
		else if (tabuleiro[k][l] == B) {
			if (tabuleiro[k][l] == 'b'){
				printf ("Rei Branco (%c,%d) - Bispo Preto (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
			else if (tabuleiro[k][l] == 'B'){
				printf ("Rei Preto (%c,%d) - Bispo Branco (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
			return TRUE;
		}
	}//movimento diagonal inferior esquerda

	return FALSE;
}// fim funcao bispo

//Funcao com os movimentos da Dama
int dama (char tabuleiro[MAX][MAX], int i, int j, char d){
	int k, l;
	int indicei = i;
	int indicej = j;

	for (k = i-1, l = j+1; k >= 0 && l < MAX; k--, l++){
		if (tabuleiro[k][l] != '0' && tabuleiro[k][l] != d) {
			break;
		}
		else if (tabuleiro[k][l] == d) {
			if (tabuleiro[k][l] == 'd'){
				printf ("Rei Branco (%c,%d) - Dama Preta (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
			else if (tabuleiro[k][l] == 'D'){
				printf ("Rei Preto (%c,%d) - Dama Branca (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
			return TRUE;
		}
	}//movimento diagonal superior direita

	for (k = i-1, l = j-1; k >= 0 && l >= 0; k--, l--){
		if (tabuleiro[k][l] != '0' && tabuleiro[k][l] != d) {
			break;
		}
		else if (tabuleiro[k][l] == d) {
			if (tabuleiro[k][l] == 'd'){
				printf ("Rei Branco (%c,%d) - Dama Preta (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
			else if (tabuleiro[k][l] == 'D'){
				printf ("Rei Preto (%c,%d) - Dama Branca (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
			return TRUE;
		}
	}//movimento diagonal superior esquerda

	for (k = i+1, l = j+1; k < MAX && l < MAX; k++, l++){
		if (tabuleiro[k][l] != '0' && tabuleiro[k][l] != d) {
			break;
		}
		else if (tabuleiro[k][l] == d) {
			if (tabuleiro[k][l] == 'd'){
				printf ("Rei Branco (%c,%d) - Dama Preta (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
			else if (tabuleiro[k][l] == 'D'){
				printf ("Rei Preto (%c,%d) - Dama Branca (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
			return TRUE;
		}
	}//movimento diagonal inferior direita

	for (k = i+1, l = j-1; k < MAX && l >= 0; k++, l--){
		if (tabuleiro[k][l] != '0' && tabuleiro[k][l] != d) {
			break;
		}
		else if (tabuleiro[k][l] == d) {
			if (tabuleiro[k][l] == 'd'){
				printf ("Rei Branco (%c,%d) - Dama Preta (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
			else if (tabuleiro[k][l] == 'D'){
				printf ("Rei Preto (%c,%d) - Dama Branca (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (l + 'a'), (MAX - k));
			}
			return TRUE;
		}
	}//movimento diagonal inferior esquerda

	for (k = i+1; k < MAX; k++) {
		if (tabuleiro[k][j] != '0' && tabuleiro[k][j] != d) {
			break;
		}
		else if (tabuleiro[k][j] == d) {
			if (tabuleiro[k][j] == 'd'){
				printf ("Rei Branco (%c,%d) - Dama Preta (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (j + 'a'), (MAX - k));
			}
			else if (tabuleiro[k][j] == 'D'){
				printf ("Rei Preto (%c,%d) - Dama Branca (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (j + 'a'), (MAX - k));
			}
			return TRUE;
		}
	}//movimento inferior

	for (k = i-1; k >= 0; k--){
		if (tabuleiro[k][j] != '0' && tabuleiro[k][j] != d) {
			break;
		}
		else if (tabuleiro[k][j] == d) {
			if (tabuleiro[k][j] == 'd'){
				printf ("Rei Branco (%c,%d) - Dama Preta (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (j + 'a'), (MAX - k));
			}
			else if (tabuleiro[k][j] == 'D'){
				printf ("Rei Preto (%c,%d) - Dama Branca (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (j + 'a'), (MAX - k));
			}
			return TRUE;
		}
	}// movimento superior

	for (k = j-1; k >= 0; k--){
		if (tabuleiro[i][k] != '0' && tabuleiro[i][k] != d) {
			break;
		}
		else if (tabuleiro[i][k] == d) {
			if (tabuleiro[i][k] == 'd'){
				printf ("Rei Branco (%c,%d) - Dama Preta (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (k + 'a'), (MAX - i));
			}
			else if (tabuleiro[i][k] == 'D'){
				printf ("Rei Preto (%c,%d) - Dama Branca (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (k + 'a'), (MAX - i));
			}
			return TRUE;
		}
	}// movimento para a esquerda

	for (k = j+1; k < MAX; k++){
		if (tabuleiro[i][k] != '0' && tabuleiro[i][k] != d) {
			break;
		}
		else if (tabuleiro[i][k] == d) {
			if (tabuleiro[i][k] == 'd'){
				printf ("Rei Branco (%c,%d) - Dama Preta (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (k + 'a'), (MAX - i));
			}
			else if (tabuleiro[i][k] == 'D'){
				printf ("Rei Preto (%c,%d) - Dama Branca (%c,%d)\n", (indicej + 'a'), (MAX - indicei), (k + 'a'), (MAX - i));
			}
			return TRUE;
		}
	}// movimento para a direita

	return FALSE;
}// fim funcao dama

int main (void){
	int linha, i, j, Rsemxeque, rsemxeque;
	char tabuleiro[MAX][MAX], coluna, peca;

	do{

		// inicializando o tabuleiro
		for (i = 0; i < MAX; i++){
			for (j = 0; j < MAX; j++){
				tabuleiro[i][j] = '0';
			}//fim for j
		}//fim for i

		do{
			scanf ("%c", &peca);

			if (peca == zero){
				return 0;
			}

			scanf ("%c%d", &coluna, &linha);
			tabuleiro[MAX - linha][(coluna - 'a')] = peca;

		} while (getchar() != '\n');

		Rsemxeque = FALSE;
		rsemxeque = FALSE;
		for (i = 0; i < MAX; i++){
			for (j = 0; j < MAX; j++){
				if (tabuleiro[i][j] == 'R'){
					if (peaopreto (tabuleiro, i, j))
					;
					else if (torre (tabuleiro, i, j, 't'))
					;
					else if (cavalopreto (tabuleiro, i, j))
					;
					else if (bispo (tabuleiro, i, j, 'b'))
					;
					else if (dama (tabuleiro, i, j, 'd'))
					;
					else
					Rsemxeque = TRUE;
				}// fim if

				else if (tabuleiro[i][j] == 'r'){
					if (peaobranco (tabuleiro, i, j))
					;
					else if (torre (tabuleiro, i, j, 'T'))
					;
					else if (cavalobranco (tabuleiro, i, j))
					;
					else if (bispo (tabuleiro, i, j, 'B'))
					;
					else if (dama (tabuleiro, i, j, 'D'))
					;
					else
					rsemxeque = TRUE;
				}// fim else if

			}// fim for j
		}//fim for i

		if (Rsemxeque && rsemxeque)
			printf ("sem xeque\n");

	}while (TRUE); // fim do while

	return 0;
}// fim main
