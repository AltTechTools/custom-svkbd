#!/bin/sh
wc -l $(ls) | tail -n 1 - | awk '{print $1}'
