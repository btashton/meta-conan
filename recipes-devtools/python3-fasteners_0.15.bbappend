RDEPENDS_${PN} += "\
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-monotonic \
    ${PYTHON_PN}-fcntl \
"

DEPENDS_class-native = "\
    ${PYTHON_PN}-six-native \
    ${PYTHON_PN}-monotonic-native \
"

inherit python3-dir
BBCLASSEXTEND = "native nativesdk"
