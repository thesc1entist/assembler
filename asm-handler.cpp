#include "asm-handler.h"
#include <stdio.h>
#include <stddef.h> // for size_t

namespace Tofu
{
	ASMhandler::ASMhandler() {}

	void ASMhandler::handle_line(const char *s, size_t len)
	{
		if (s[len - 1] == ':')
		{
			printf("label: %s\n", s);
		}
		else
		{
			printf("instruction: %s\n", s);
		}
	}

	void ASMhandler::read_opcode(const char *s, size_t len)
	{
	}
}
