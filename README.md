# push_swapik
sort data

| instructions  | Description   |
|:-------------:|---------------|
| sa            | swap first two elements of stack A |
| sb            | swap first two elements of stack B |
| ss            | sa and sb at the same time |
| pa            | pops the first elememt on B and puts it on top of A |
| pb            | pops the first elememt on A and puts it on top of B |
| ra            | rotates stuck A up by one|
| rb            | rotates stuck B up by one |
| rr            | rotates both A and B up by one |
| rra           | rotates stuck A down by one |
| rrb           | rotates stuck B down by one |
| rrr           | rotates both A and B down by one |

make
ARG="random numbers"; /.push_swap $ARG // Печать всех интрукций которые потребовались для сортировки стека
ARG="random numbers"; ./push_swap $ARG | wc -l // Печать колличества инструкций которые потребовались для сортировки стека
ARG="random numbers"; ./push_swap $ARG | ./checker $ARG // Вывод "ОК" если стек отсортировался, иначе "Error!"

ft_number_availability - Проверяем строку на наличие цифр,
	тем самым обрабатываем навалидные строки.
	Например: строки содержащие только пробелы		
	и табы и строки состоящие только из '+' или '-'.