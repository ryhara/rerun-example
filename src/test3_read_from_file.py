# usage: python src/test3_read_from_file.py /path/to/log_file.log

import sys

import rerun as rr

rr.init("rerun_example_log_file", spawn=True)

rr.log_file_from_path(sys.argv[1])
