SUMMARY = "Cross-platform colored terminal text."
HOMEPAGE = "https://github.com/tartley/colorama"
AUTHOR = "Arnon Yaari <tartley@tartley.com>"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=b4936429a56a652b84c5c01280dcaa26"

SRC_URI[md5sum] = "f927529cd1735f6f50ee2c61628e9c1f"
SRC_URI[sha256sum] = "05eed71e2e327246ad6b38c540c4a3117230b19679b875190486ddd2d721422d"

inherit pypi

REQUIRES_${PN} += "\
    ${PYTHON_PN}-contextlib \
"

BBCLASSEXTEND = "native nativesdk"
