#pragma once

size_t A_full_rows = 3;
size_t A_full_cols = 7;
elem_t A_full[21] = {
	1.00294, 0.00425196, -0.0350826, 0.000203077, 0.997073, -0.956365, -4.38917e-16, 
	0.00426444, 1.00657, -0.053216, -0.993475, -0.00400951, -0.0355353, 2.77596e-15, 
	-0.0351856, -0.0537147, 1.15591, -0.0457315, 0.0300771, -0.895779, 6.86623e-17
};

size_t x_full_rows = 3;
size_t x_full_cols = 1;
elem_t x_full[3] = {
	-1.39308e-15, 
	-1.11813e-16, 
	-8.97818e-18
};

size_t y_full_rows = 3;
size_t y_full_cols = 1;
elem_t y_full[3] = {
	-4.38917e-16, 
	2.77596e-15, 
	6.86623e-17
};

size_t dim_I = 3;
size_t dim_J = 3;
size_t A_r1 = 3;
size_t A_c1 = 0;
size_t x_c1 = 0;
size_t y_c1 = 0;
size_t stride_A = 7;
scale_t scale_factor_A = -1;

size_t y_correct_rows = 3;
size_t y_correct_cols = 1;
elem_t y_correct[3] = {
	-3.35735e-16, 
	1.3912e-15, 
	2.75192e-19
};

