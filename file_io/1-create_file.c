#include "main.h"

/**
* create_file- create a string
* @filename: Name of the file
* @text_content: text in the file
* Return: 1 succes, -1 faillure
*/

int create_file(const char *filename, char *text_content)
{
	int filedescriptor;
	ssize_t writing;


	if (filename == NULL)
	return (-1);


	filedescriptor = open(filename, O_CREAT
	| O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filedescriptor == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(filedescriptor);
		return (1);
	}


	if (text_content != NULL)
	{
		writing = write(filedescriptor, text_content, strlen(text_content));
		if (writing == -1)
			return (-1);

	close(filedescriptor);
	}
	return (1);
}
