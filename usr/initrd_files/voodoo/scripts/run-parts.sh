#!/bin/sh
export PATH=/system/bin:/sbin:/system/xbin:/bin
log "Executing run-parts on $*"
logwrapper /bin/run-parts $*
