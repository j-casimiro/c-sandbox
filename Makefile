# Compiler settings
CC = clang
CFLAGS = -Wall -Wextra -std=c11

# Default rule: print usage
all:
	@echo "Usage: make <project_name>"
	@echo "Example: make hello"
	@echo "This compiles hello/hello.c -> hello/hello"

# Generic rule: make <name> compiles <name>/<name>.c -> <name>/<name>
%:
	@dir=$@; \
	src=$$dir/$$dir.c; \
	out=$$dir/$$dir; \
	if [ -f $$src ]; then \
		echo "Compiling $$src -> $$out"; \
		$(CC) $(CFLAGS) $$src -o $$out; \
		echo "Build complete: $$out"; \
	else \
		echo "Error: $$src not found"; \
		exit 1; \
	fi

# Clean: removes all compiled binaries
clean:
	find . -type f -perm -111 -not -name "*.c" -not -name "Makefile" -exec rm -f {} \;
