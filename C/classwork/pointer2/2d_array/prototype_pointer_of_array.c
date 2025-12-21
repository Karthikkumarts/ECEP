/*both row and column size */
void print_2D_array(int ptr[3][4]);

// fixed column size
void print_2D_array(int (*ptr)[4],int max_rows);
void print_2D_array(int ptr[][4],int max_rows);

//variable row and col size

void print_2D_array(int max_rows,int max_cols,int (*ptr)[max_cols]); //prototype
void print_2D_array(int max_rows,int max_cols,int ptr[max_rows] [max_cols]);//prototype
void print_2D_array(int max_rows,int max_cols,int ptr[][max_cols]); //prototype


