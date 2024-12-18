#!/usr/bin/env bash
set -euxo pipefail


if [[ $# == 0 ]]; then
    ./tinycc/tcc main.c -I./tinycc/include -L./tinycc -o out
elif [[ $1 == 'clean' ]]; then
    rm out
fi
