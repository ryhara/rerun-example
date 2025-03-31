.PHONY: init
init:
	cmake -B build
	cmake --build build -j

.PHONY: build
build:
	cmake --build build -j

.PHONY: example0001
example0001:
	./build/bin/example0001

.PHONY: example0002
example0002:
	./build/bin/example0002

# ====================
# example0001
# ====================
.PHONY: example0001
example0001: build/bin/example0001
	./build/bin/example0001
.PHONY: build/bin/example0001
build/bin/example0001:
	cmake --build build --target example0001

# ====================
# example0002
# ====================
.PHONY: example0002
example0002: build/bin/example0002
	./build/bin/example0002

.PHONY: build/bin/example0002
build/bin/example0002:
	cmake --build build --target example0002
