#include <stdio.h>
#include <string.h> 

#define R 99																			//Указать число строк матрицы
#define C 60																			//Указать число столбцов матрицы

const char *path =  "C:\\Users\\alekc\\OneDrive\\Science\\Project\\ampl_62min.txt";		//Указать путь к файлу с матрицей

int main(void) {
	int i,j;
	float M[R][C];
	float result[R*C];
	FILE *fp;
	fp=fopen(path, "r");
	if (fp==NULL) {
		printf ("No data!");
		return 0;
	}
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			if (0==fscanf(fp,"%f	", &M[i][j])) {
				printf ("Error size matrix: i=%d, j=%d\n", i, j);
				return 0;
			}	
		}
	}
	fclose(fp);
	printf ("\n");
	printf ("Matrix read - DONE\n");
	for (i=0;i<R;i++) {
		// printf ("\n");
		// for (j=0;j<C;j++) printf ("%0.3f ", M[i][j]);
	}

	for (int i = 0, n = 0, s = 0; i < R; ++i) {
		for (int j = 0; j < C; ++j, ++n) {
			result[n] = M[i][j];
		}
		++i;
		for (int j = C-1; j >= 0; --j, ++n) {
			result[n] = M[i][j];
		}
	}
	printf ("\n");

	char path_result[strlen(path)+10], str[strlen(path)];
	strcpy(str, path);
	for (int i = 0; i < 4; ++i) { str[strlen(str)-1] = '\0'; }
	sprintf (path_result, "%s-column.txt", str);
	// printf ("result path: %s\n", path_result);
	fp=fopen(path_result, "w");
	if (fp==NULL) {
		printf ("Error open file for result!");
		return 0;
	}
	for (j = 0; j < R*C; j++) {
		// printf ("%0.3f ", result[j]);
		if(0>=fprintf(fp, "%f\n", result[j])) {
			printf ("Error save result: j=%d\n", j);
			return 0;
		}
	} 
	fclose(fp);

	printf ("Column convert matrix - DONE\n\n");

	printf ("result path: %s\n", path_result);
	return 1;
}