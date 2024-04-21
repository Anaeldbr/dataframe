#ifndef COLUMN_H
#define COLUMN_H

typedef struct {
    int* data;      // Array to store data in the column
    int size;       // Size of the column
    char* title;    // Title of the column
} Column;

Column* create_column(char* title);
void delete_column(Column* column);
void insert_value(Column* column, int value);
int count_occurrences_in_column(Column* column, int x);
int count_values_greater_than_x_in_column(Column* column, int x);
int count_values_less_than_x_in_column(Column* column, int x);

#endif /* COLUMN_H */
