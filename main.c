/************* COPYRIGHT AND CONFIDENTIALITY INFORMATION *********************
 **                                                                          **
 ** Copyright (c) 2012 Technicolor                                           **
 ** All Rights Reserved                                                      **
 **                                                                          **
 ** This program contains proprietary information which is a trade           **
 ** secret of TECHNICOLOR and/or its affiliates and also is protected as     **
 ** an unpublished work under applicable Copyright laws. Recipient is        **
 ** to retain this program in confidence and is not permitted to use or      **
 ** make copies thereof other than as permitted in a written agreement       **
 ** with TECHNICOLOR, UNLESS OTHERWISE EXPRESSLY ALLOWED BY APPLICABLE LAWS. **
 **                                                                          **
 ******************************************************************************/

#include <pwd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>

#include <qeo/api.h>

#include "QuardGamelleQeo.h"

int sendGamelle(qeo_factory_t* qeo, int argc, const char **argv) {
    org_animall_home_GamelleMessage_t message;
    qeo_event_writer_t *msg_writer;
    if (argc == 5) {
        printf("%s %s %s %s", argv[1], argv[2], argv[3], argv[4]);
        message.from = argv[2];
        message.timestamp = atoi(argv[4]);
        message.weight = atof(argv[3]);
        msg_writer = qeo_factory_create_event_writer(qeo, org_animall_home_GamelleMessage_type, NULL, 0);
        qeo_event_writer_write(msg_writer, &message);
        return 0;
    } else {
        printf("Send Gamelle arguments manquants : type uuid weight timestamp");
        return -1;
    }
}

int sendBalance(qeo_factory_t* qeo, int argc, const char **argv) {
    org_animall_home_BalanceMessage_t message;
    qeo_event_writer_t *msg_writer;
    if (argc == 5) {
        printf("%s %s %s %s", argv[1], argv[2], argv[3], argv[4]);
        message.from = argv[2];
        message.timestamp = atoi(argv[4]);
        message.weight = atof(argv[3]);
        msg_writer = qeo_factory_create_event_writer(qeo, org_animall_home_BalanceMessage_type, NULL, 0);
        qeo_event_writer_write(msg_writer, &message);
        return 0;
    } else {
        printf("Send Balence arguments manquants : type uuid weight timestamp");
        return -1;
    }
}

int main(int argc, const char **argv) {
    org_animall_home_GamelleMessage_t message;
    qeo_factory_t *qeo;
    int type;
    int returnValue = 0;
    //Check le nombre de paramétre
    if (argc >= 1) {
        qeo = qeo_factory_create();
        type = atoi(argv[1]);
        switch (type) {
            case 0:
                returnValue = sendGamelle(qeo, argc, argv);
                break;
            case 1:
                returnValue = sendBalance(qeo, argc, argv);
                break;
            case 2:

                break;
            default:
                break;
        };
        qeo_factory_close(qeo);
        return returnValue;
    } else {
        printf("argument manquant : type ... \n");
        return -1;
    }
}