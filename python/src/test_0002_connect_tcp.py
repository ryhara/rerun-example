import rerun as rr

rr.init("test_client", spawn=True)
rr.connect_grpc(url="rerun+http://127.0.0.1:9876/proxy")
rr.log("logs", rr.TextLog("Hello, world!"))
