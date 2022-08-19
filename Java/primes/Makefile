JC=javac
JFLAGS=-g -Werror -Xlint -d .
.SUFFIXES: .java .class

.java.class:
	$(JC) $(JFLAGS) $*.java

CLASSES=PrimesBrute.java PrimesFast.java

default: classes

classes: $(CLASSES:.java=.class)
