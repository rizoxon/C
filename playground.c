#include <stdio.h>

void show_mat(int arr[2][2]){
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("%3d", arr[i][j]);
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

	show_mat(result);
}

void mult_mat_num(int mat[2][2], int n){
	int result[2][2] = {
		{0, 0},
		{0, 0}
	};

	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			result[i][j] = n * mat[i][j];

	show_mat(result);
}

void mult_mat_mat(int mat_1[2][2], int mat_2[2][2]){
	int result[2][2] = {
		{0, 0},
		{0, 0}
	};

	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			for(int k = 0; k < 2; k++)
				result[i][j] += mat_1[i][k] * mat_2[k][j];

	show_mat(result);
}

int main(){
	int mat_1[2][2] = {
		{3, 5},
		{8, 7}
	};

	int mat_2[2][2] = {
		{1, 2},
		{7, 3}
	};

	mult_mat_mat(mat_1, mat_2);

	return 0;
}
