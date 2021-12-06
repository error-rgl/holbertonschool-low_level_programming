#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, num_letters;
	ssize_t res_write;

	if (!filename)
		return (1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		num_letters = 0;
		while ((text_content + num_letters) != '\0')
			num_letters++;
		res_write = write(file_desc, text_content, num_letters);

		if (res_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}
