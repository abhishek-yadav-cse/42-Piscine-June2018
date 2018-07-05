ldapsearch -x -L "(uid=Z*)" cn | grep '^cn:' | sort -r --ignore-case | cut -c5-999
