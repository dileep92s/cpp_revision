# Stages of compilation

- Preprocessor 
    - gcc -E *.c -o *.i
        - process preprocessor directives --> #<...>

- Translator
    - gcc -S *.i -o *.s

- Assembler
    - gcc -c *.s -o *.o

- Linker gcc *.o -o exe
