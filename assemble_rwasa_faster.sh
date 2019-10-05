#!/bin/bash
echo "Assembling rwasa HeavyThing v1.24 binaries using fasmpp..."
echo
echo "fasmpp..."
cd fasmpp
fasm -m 524288 fasmpp.asm && ld -o fasmpp fasmpp.o

cd ../rwasa
../fasmpp/fasmpp rwasa.asm >rwasa.tmp.asm
fasm -m 524288 rwasa.tmp.asm && ld -o rwasa rwasa.tmp.o
rm -f rwasa.tmp.asm

echo "Done."
