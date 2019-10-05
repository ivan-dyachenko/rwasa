FROM guitmz/fasm as assemble

RUN apk add --update alpine-sdk

WORKDIR /src
ADD . /src

RUN sh /src/assemble_rwasa_faster.sh