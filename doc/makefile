TEX = pdflatex -file-line-error
BIB = bibtex
caps = 0_Portada.tex 2_Preeliminares.tex 1_Introduccion.tex
bibs = bibliography/bibliography.bib bibliography/images.bib
filename = memoria

all: $(filename).aux $(filename).pdf

$(filename).aux: $(filename).tex $(caps)
	$(TEX) $(filename)

$(filename).pdf: $(filename).tex $(caps) $(bibs) $(filename).aux $(filename).bbl
	$(TEX) $(filename)
	$(TEX) $(filename)

$(filename).bbl: $(bibs)
	$(BIB) $(filename)

clean:
	rm $(filename).log $(filename).aux $(filename).lof $(filename).toc
	#rm $(filename).lot 

clean-all:
	rm $(filename).bbl $(filename).blg $(filename).pdf

