#!/usr/bin/python3

import sys


size_file = 0
status_files = {'200': 0, '301': 0, '400': 0, '401': 0,
                '403': 0, '404': 0, '405': 0, '500': 0}
cont = 0

try:
    for fl in sys.stdin:
        metrics = fl.split(" ")
        status = metrics[-2]
        if status in status_files.keys():
            status_files[status] = status_files.get(status) + 1
        size_file += int(metrics[-1])
        cont += 1
        if cont % 10 == 0:
            print('File size: {}'.format(size_file))
            for k, v in sorted(status_files.items()):
                print("{}: {}".format(k, v))

except:
    pass
