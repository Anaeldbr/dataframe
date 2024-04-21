#include <stdio.h>
#include "cdataframe.h"
#include "column.h"

int main() {
    // Create a CDataframe
    CDataframe* dataframe = create_cdataframe();

    // Add rows and columns to the dataframe
    add_row_to_cdataframe(dataframe);
    add_column_to_cdataframe(dataframe);

    // Display column names
    display_cdataframe(dataframe);

    // Display analysis and statistics
    printf("Number of rows: %d\n", count_rows_in_cdataframe(dataframe));
    printf("Number of columns: %d\n", count_columns_in_cdataframe(dataframe));
    printf("Number of cells equal to 5: %d\n", count_cells_equal_to_x_in_cdataframe(dataframe, 5));
    printf("Number of cells greater than 10: %d\n", count_cells_greater_than_x_in_cdataframe(dataframe, 10));
    printf("Number of cells less than 3: %d\n", count_cells_less_than_x_in_cdataframe(dataframe, 3));

    // Delete the dataframe
    delete_cdataframe(dataframe);

    return 0;
}