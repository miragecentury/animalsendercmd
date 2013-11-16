#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/528007964/QuardGamelleQeo.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=-m32

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-L/home/zeus/Documents/QeoSDK-0.15.0/c/lib/i686-linux -lcrypto -lcurl -ljansson -lqeo-openssl-engine-pkcs12 -lssl -lqeoutil -lqeo

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/senderqeo

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/senderqeo: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/senderqeo ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/528007964/QuardGamelleQeo.o: /home/zeus/NetBeansProjects/SenderQeo/QuardGamelleQeo.c 
	${MKDIR} -p ${OBJECTDIR}/_ext/528007964
	${RM} $@.d
	$(COMPILE.c) -g -I/home/zeus/Documents/QeoSDK-0.15.0/c/include -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/528007964/QuardGamelleQeo.o /home/zeus/NetBeansProjects/SenderQeo/QuardGamelleQeo.c

${OBJECTDIR}/main.o: main.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -I/home/zeus/Documents/QeoSDK-0.15.0/c/include -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/senderqeo

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
