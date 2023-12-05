#include "main.h"

/**
* append_text_to_file- add text at the end of a file
* @filename: Name of the file
* @text_content: text in the file
* Return: 1 succes, -1 faillure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int filedescriptor;
	ssize_t writing;


	if (filename == NULL)
	return (-1);


	filedescriptor = open(filename, O_APPEND | O_WRONLY);

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
