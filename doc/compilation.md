# Stages of compilation

- Preprocessor 
    - gcc -E *.c -o *.i
        - process preprocessor directives --> #<...>

- Translator
    - gcc -S *.i -o *.s

- Assembler
    - gcc -c *.s -o *.o

- Linker 
    - gcc *.o -o exe

# Makefile Macros

$@ is the name of the file to be made. --> name on left of :
$? is the names of the changed dependents.
$< the name of the related file that caused the action.
* the prefix shared by target and dependent files
