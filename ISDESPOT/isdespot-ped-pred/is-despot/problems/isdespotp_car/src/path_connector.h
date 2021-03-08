//
// Created by dikshant on 23.02.21.
//

#ifndef ISDESPOT_PED_PRED_PATH_CONNECTOR_H
#define ISDESPOT_PED_PRED_PATH_CONNECTOR_H

#endif //ISDESPOT_PED_PRED_PATH_CONNECTOR_H

#include "WorldModel.h"

class PathConnector {
public:
    void establish_connection();
    vector<PedHistory> getPredictedPath(vector<PedHistory>& ped_history);
    void closeConnection();

    int socket_desc;
    struct sockaddr_in server;
};
