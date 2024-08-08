#include <stdio.h>

void show_mat(int arr[3][3]){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
}

void add_mat(int mat_1[2][2], int mat_2[2][2]){
	int result[2][2] = {
		{0, 0},
		{0, 0}
	};
	
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			result[i][j] = mat_1[i][j] + mat_2[i][j];

	// show_mat(result);
}

void mult_mat_num(int mat[2][2], int n){
	int result[2][2] = {
		{0, 0},
		{0, 0}
	};

	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			result[i][j] = n * mat[i][j];

	// show_mat(result);
}

void mult_mat_mat(int mat_1[3][3], int mat_2[3][3]){
	int result[3][3] = {
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}
	};

	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			for(int k = 0; k < 3; k++)
				result[i][j] += mat_1[i][k] * mat_2[k][j];

	show_mat(result);
}

int main(){
	int mat_1[3][3] = {
		{3, 5, 6},
		{8, 7, 8},
		{8, 7, 2}
	};

	int mat_2[3][3] = {
		{1, 2, 4},
		{7, 3, 5},
		{7, 3, 5}
	};

	mult_mat_mat(mat_1, mat_2);

	return 0;
}
