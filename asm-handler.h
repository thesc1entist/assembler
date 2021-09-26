#pragma once
#include <stddef.h> // size_t

namespace Tofu
{
	struct opcode
	{
		char *instruction;
		char *dst_op;
		char *src_op;
	};

	class ASMhandler
	{
	public:
		ASMhandler();
		void handle_line(const char *line, size_t len);
		void read_opcode(const char *s, size_t len);
	};
}
