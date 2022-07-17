# convert_matrix_to_column
Программа для преобразования двумерной матрицы значений в столбец. Значения переносятся построчно с 1 строки слева направо, вторая строка справа налево (змейкой) и т.д. до конца.

## Step 1: Размерность двумерной матрицы значений
R = Указать число строк матрицы (например: 99)
C = Указать число столбцов матрицы (например: 60)

## Step 2: Путь к файлу с матрицей
*path =  Указать путь к файлу с матрицей (например: "C:\\Users\\alekc\\OneDrive\\Science\\Project\\ampl_62min.txt")

## Step 3: Скомпилировать проект
gcc convert_matrix_to_column.c -o convert_matrix_to_column

## Step 4: Запустить
./convert_matrix_to_column.exe

## Step 5: Получить результат
В случае успешного выполнения программы в консоли отобразиться (например):
*
* Matrix read - DONE
*
* Column convert matrix - DONE
*
* result path: C:\Users\alekc\OneDrive\Science\Project\ampl_62min-column.txt
*
где result path - путь к файлу с результатом преобразования матрицы
