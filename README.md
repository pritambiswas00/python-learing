# python-learing
Learning Python
Markdown

---
## Understanding GCC Compilation Workflow

This document explains how a simple C program is transformed into an executable using **GCC**. We use the classic `Hello, World!` program as an example.

---

## 📌 1. Source Code

File: `hello.c`

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
📌 2. Preprocessing
The preprocessor expands macros (#include, #define) and removes comments. It outputs a pure C file with all headers included.

Bash

gcc -E hello.c -o hello.i
Input: hello.c

Output: hello.i (preprocessed source code)

📌 3. Compilation (C → Assembly)
The compiler translates the preprocessed C code into assembly instructions for the target CPU.

Bash

gcc -S hello.i -o hello.s
Input: hello.i

Output: hello.s (assembly code, human-readable)

📌 4. Assembly (Assembly → Object Code)
The assembler converts the assembly code into machine code stored in an object file.

Bash

gcc -c hello.s -o hello.o
Input: hello.s

Output: hello.o (binary object file, not yet executable)

📌 5. Linking
The linker combines the object file with required libraries (like the C Standard Library for printf) to produce the final executable.

Bash

gcc hello.o -o hello
Input: hello.o

Output: hello (executable binary)

📌 6. Run the Program
Finally, run the generated binary:

Bash

./hello 
Output:

Hello, World!
🔁 Complete Workflow at a Glance
Bash

gcc -E hello.c -o hello.i     # Step 1: Preprocessing
gcc -S hello.i -o hello.s     # Step 2: Compilation
gcc -c hello.s -o hello.o     # Step 3: Assembly
gcc hello.o -o hello          # Step 4: Linking
./hello                       # Step 5: Execution
📝 Summary
Preprocessing → expands macros and headers → .i

Compilation → translates C to assembly → .s

Assembly → converts assembly to object code → .o

Linking → links objects + libraries → executable

Execution → run the binary → prints output


**3. Save the file:**

When you save the file, be sure to use the `.md` extension. For example, you can save it as `gcc_workflow.md`.

Now you have a Markdown file containing your document. You can open it with any text editor, and if you use a Markdown-aware editor (like Visual Studio Code or Atom), you can even get a live preview of the formatted output.


1. What is python 
2. What is the difference between interpreted language and compiled language
3. 