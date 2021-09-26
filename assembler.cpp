#include <stdio.h>
#include <stddef.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

#include "assembler.h"
#include "asm-handler.h"

int main(int argc, char *argv[])
{
	char line[MAX_READ_LINE];
	Tofu::ASMhandler handle;

	size_t len;

	FILE *fp = fopen(g_filename, "r");
	if (fp == NULL)
	{
		perror("fopen()");
		return 1;
	}

	while (fgets(line, MAX_READ_LINE, fp))
	{
		len = strcspn(line, "\n");
		if (len == 0) // was only '\n'
		{
			continue;
		}
		if (len == MAX_READ_LINE - 1)
		{
			fclose(fp);
			goto error_state;
		}
		line[len] = '\0'; // discard '\n'
		handle.handle_line(line, len);
	}

	if (ferror(fp))
	{
		goto error_state;
	}

	fclose(fp);
	return 0;

error_state:
	perror("file error (line len to small on errno success)");
	exit(EXIT_FAILURE);
}
