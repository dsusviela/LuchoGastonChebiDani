# --------------------------------------------------------------------
#  Makefile de la tarea 1.

#  Laboratorio del mejor grupo de P4.

# Define un conjunto de reglas.
# Cada regla tiene un objetivo, dependencias y comandos.
#objetivo: dependencia1 dependencia2...
#	comando1
#	comando2
#	comando3
# (antes de cada comando hay un tabulador, no espacios en blanco).
# Se invoca con
#make objetivo
# para que se ejecuten los comandos.
#
# Si `objetivo` es un archivo los comandos se ejecutan solo si no está
# actualizado (esto es, si su fecha de actualización es anterior a la de alguna
# de sus dependencias.
# Previamente se aplica la regla de cada dependencia.


# --------------------------------------------------------------------

# Objetivo predeterminado (no se necesita especificarlo al invocar `make`).
all: principal

# Objetivos que no son archivos.
.PHONY: all clean_bin clean_test clean testing


# directorios
HDIR    = include
CPPDIR  = cpp
ODIR    = obj

TESTDIR = test

MODULOS = clase DtClase DtEntrenamiento DtSocio DtSpinning entrenamiento fecha inscripcion socio spinning

# lista de archivos, con directorio y extensión
HS   = $(MODULOS:%=$(HDIR)/%.hpp)
CPPS = $(MODULOS:%=$(CPPDIR)/%.cpp)
OS   = $(MODULOS:%=$(ODIR)/%.o)

PRINCIPAL=principal
EJECUTABLE=principal

LIB=../tarea1p4.a

# compilador
CC = g++
# opciones de compilación
CCFLAGS = -Wall -Werror -I$(HDIR) -g #-DNDEBUG
# se debe remover o agregar la directiva -DNDEBUG para que las llamadas a
# `assert' tengan  efecto o no.

$(ODIR)/$(PRINCIPAL).o:$(PRINCIPAL).cpp
	$(CC) $(CCFLAGS) -c $< -o $@

# cada .o depende de su .cpp
# $@ se expande para tranformarse en el objetivo
# $< se expande para tranformarse en la primera dependencia
$(ODIR)/%.o: $(CPPDIR)/%.cpp $(HDIR)/%.hpp
	$(CC) $(CCFLAGS) -c $< -o $@
