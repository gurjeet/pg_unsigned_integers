EXTENSION = unsigned_integers
EXTVERSION = 0.0.1
EXTSQL = $(EXTENSION)--$(EXTVERSION).sql

MODULES = unsigned_integers
OBJS = unsigned_integers.o
DATA_built = unsigned_integers.sql
DATA = unsigned_integers.sql
DOCS = doc/unsigned_integers.md
REGRESS = unsigned_integers

SQL_IN = unsigned_integers.sql.in
EXTRA_CLEAN += $(SQL_IN) $(EXTSQL)

USE_EXTENSION = $(shell pg_config --version | grep -qE " 8\.|9\.0" && echo no || echo yes)

ifeq ($(USE_EXTENSION),yes)
all: $(EXTSQL)

$(EXTSQL): $(EXTENSION).sql
cp $< $@

DATA = $(EXTSQL)
endif

PGXS := $(shell pg_config --pgxs)
include $(PGXS)

$(SQL_IN): unsigned_integers.sql.in.c
	$(CC) -E -P $(CPPFLAGS) $< > $@
