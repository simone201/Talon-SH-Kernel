#!/bin/sh

/bin/sh /voodoo/scripts/run-parts.sh /bin/post-boot.d
/bin/sh /voodoo/scripts/run-parts.sh /system/etc/init.d
