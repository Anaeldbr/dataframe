#ifndef CDATAFRAME_H
#define CDATAFRAME_H

typedef struct {
    int num_rows;        // Number of rows in the dataframe
    int num_columns;     // Number of columns in the dataframe
    int** data;          // 2D array to store data
    char** column_names;
} CDataframe;

CDataframe* create_cdataframe();
void delete_cdataframe(CDataframe* dataframe);
void display_cdataframe(CDataframe* dataframe);
void add_row_to_cdataframe(CDataframe* dataframe);
void add_column_to_cdataframe(CDataframe* dataframe);
void delete_column_from_cdataframe(CDataframe* dataframe, int column_index);
void rename_column_in_cdataframe(CDataframe* dataframe, int column_index, char* new_name);
int search_value_in_cdataframe(CDataframe* dataframe, int value);
void replace_value_in_cdataframe(CDataframe* dataframe, int row_index, int column_index, int new_value);
int count_rows_in_cdataframe(CDataframe* dataframe);
int count_columns_in_cdataframe(CDataframe* dataframe);
int count_cells_equal_to_x_in_cdataframe(CDataframe* dataframe, int x);
int count_cells_greater_than_x_in_cdataframe(CDataframe* dataframe, int x);
int count_cells_less_than_x_in_cdataframe(CDataframe* dataframe, int x);

#endif /* CDATAFRAME_H */
