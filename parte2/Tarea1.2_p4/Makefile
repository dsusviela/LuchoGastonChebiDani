# Objetivo predeterminado (no se necesita especificarlo al invocar `make`).
all: MAIN

# Objetivos que no son archivos.
.PHONY: all clean_bin clean_test clean testing


# directorios
HDIR    = include
CPPDIR  = cpp
ODIR    = obj

MODULOS = A B C
# lista de archivos, con directorio y extensión
#HS   = $(MODULOS:%=$(HDIR)/%.h)
#CPPS = $(MODULOS:%=$(CPPDIR)/%.cpp)
OS   = $(MODULOS:%=$(ODIR)/%.o)

MAIN=main
EJECUTABLE=main

# compilador
CC = g++
# opciones de compilación
CCFLAGS = -Wall -I$(HDIR) -g -frtti
# -DNDEBUG
# se agrega esta opción para que no las llamadas a assert no hagan nada.

$(ODIR)/$(MAIN).o:$(MAIN).cpp
	$(CC) $(CCFLAGS) -c $< -o $@

# cada .o depende de su .cpp
# $@ se expande para tranformarse en el objetivo
# $< se expande para tranformarse en la primera dependencia
$(ODIR)/%.o: $(CPPDIR)/%.cpp $(HDIR)/%.h
	$(CC) $(CCFLAGS) -c $< -o $@


# $^ se expande para tranformarse en todas las dependencias
$(EJECUTABLE): $(ODIR)/$(MAIN).o $(OS)
	$(CC) $(CCFLAGS) $^ -o $@
 