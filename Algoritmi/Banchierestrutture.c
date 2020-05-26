int available[m]; 	//numero di istanze di Ri disponibili
int max[n][m]; 		//matrice delle richieste di risorse
int alloc[n][m]; 	//matrice di allocazione corrente
int need[n][m]; 	//matrice bisogno rimanente
			//need[i][j] = max[i][j] - alloc[i][j]
