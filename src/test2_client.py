import rerun as rr

rr.init("test", spawn=True)
rr.connect(addr="0.0.0.0:9876")