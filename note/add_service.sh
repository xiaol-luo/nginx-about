#!/bin/bash 

cp -f nginx /etc/init.d/
chkconfig --add nginx
chkconfig --level 2345 nginx on
chkconfig --list | grep nginx