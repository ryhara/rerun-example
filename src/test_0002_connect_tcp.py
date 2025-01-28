import rerun as rr

rr.init("test_client", spawn=True)
rr.connect_tcp(addr="0.0.0.0:9876")
rr.log("logs", rr.TextLog("Hello, world!"))
