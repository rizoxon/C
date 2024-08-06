// Matrix adding formula
// If A = [aij] and B = [bij], the sum of the two matrices A and B is given as:
// A+B = [aij] + [bij] = [aij + bij],
// where ij denotes the position of each element in ith row and jth column.

// Matrix multiplication
// Inorder to multiply matrix to N number, multiply each element with N:
// A * N = [aij * N]
// 2x2 matrix multiplication

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
	int result[2][2];
	
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			result[i][j] = mat_1[i][j] + mat_2[i][j];

	show_mat(result);
}

void mult_mat_num(int mat[2][2], int n){
	int result[2][2];

	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			result[i][j] = n * mat[i][j];

	show_mat(result);
}

// void mult_mat_mat(int mat_1[2][2], int mat_2[2][2]){
// 	int result[2][2];
//
// 	for(int i = 0; i < 2; i++){
// 		int i_1 = i + 1;
// 		for(int j = 0; j < 2; j++){
// 			int j_1 = j + 1;
// 			// result[i][j] = (mat_1[i][j] * mat_2[i][j]) + (mat_1[i][j_1] * mat_2[j_1][i]);
//
// 			printf("a[%d][%d]*b[%d][%d] + a[%d][%d]*b[%d][%d]\n", i, j, i, j, i, j_1, j_1, i);
// 		}
// 	}
//
// 	show_mat(result);
// }

int main(){
	int mat_1[2][2] = {
		{3, 5},
		{8, 7}
	};

	int mat_2[2][2] = {
		{1, 2},
		{7, 3}
	};

	// mult_mat_mat(mat_1, mat_2);

	return 0;
}

// {
// 	{38 21}
// 	{57 37}
// }
