/*
Eduardo Freire Mangabeira
Data: [16/10/2018]
*/

int preenche_matriz(char matriz[][N], gamemode);

void exibe_tabuleiro(char matriz[][N], int i, int j);

void bot_do_pandemonio(int gamemode, int p_horiz_circulo, int p_vert_circulo);

int horizontais(char matriz[][N], int gamemode);

int verticais(char matriz[][N], int gamemode);

int diagonal1(char matriz[][N], int gamemode);

int diagonal2(char matriz[][N], int gamemode);

int piramide(char matriz[][N], int gamemode);

int v_longo(char matriz[][N], int gamemode);

int v_curto(char matriz[][N], int gamemode);

void jogo_da_velha(char matriz[][N],int gamemode,int cpu_or_player);
