#include<stdio.h>

int array[4] = {20, 30, 50, 65};

int read_full_array(int i, int array[]){

        for(i = 0; i < 4; i++)
        {
                printf("array[%d] = %d\n", i + 1, array[i]);
        }

	return 0;
}

int read_singel_indice(int array[], int position)
{

	printf("%d\n",array[position + 1]);
	return 0;
}

int searching_value(int i, int  array[], int value)
{
	for(i = 0; i < 4; i++)
        {
                if(array[i] == value)
		{
			return 1;
		}
	}
}

int updating_array(int array[], int update_position, int update_value)
{
	array[update_position] = update_value;
}

int delete_full_array(int i, int array[])
{
	array[0];
	return 0;
}

int main()
{
	int i;
	//int array[4] = {20, 30, 50, 65};

	read_full_array(i, array);

	int position = 2;
	read_singel_indice(array, position);

	int value = 30;
	int searching_result =  searching_value(i, array, value);

	if (searching_result == 1)
	{
		printf("Searching Value found in array\n");
	}
	else
	{
		printf("Searching Value not found in array\n");
	}
	
	int update_position = 3, update_value = 70;
	updating_array(array, update_position, update_value);
	
	read_full_array(i, array);
	
	delete_full_array(i, array);

	printf("now\n");

	read_full_array(i, array);
	return 0;
}

