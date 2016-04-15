#ifndef DBLUI_CONSTANTS_HXX
#define DBLUI_CONSTANTS_HXX

#include <string>
#include <QtCore>

namespace dblui {

const unsigned short VERSION_MAJOR = 0;
const unsigned short VERSION_MINOR = 1;

const QString SOFTWARE_NAME = "DBL";

const QString SETTINGS_IDENT = "dbl-ui";
const QString SETTINGS_NAME = "ui";
const QString SETTINGS_GROUP_UI = "UI";
const QString SETTINGS_GROUP_SERVICE = "SERVICE";
const QString SETTINGS_GROUP_PREFERENCES = "PREFERENCES";
const QString SETTINGS_GROUP_HTTP_RESPONDER = "HTTP-RESPONDER";

const QString CFG_POSITION = "position";
const QString CFG_SIZE = "size";
const QString CFG_DISABLE_SERVICE_PASSWORD = "disableServicePassword";
const QString CFG_SAVE_SERVICE_PASSWORD = "saveServicePassword";
const QString CFG_SERVICE_PASSWORD = "servicePassword";
const QString CFG_SERVICE_ADDRESS = "serviceAddress";
const QString CFG_SERVICE_PORT = "servicePort";
const QString CFG_PREFERENCES_UPDATE_INTERVAL = "updateInterval";
const QString CFG_PREFERENCES_ENABLE_STATS_UPLOAD = "enableStatsUpload";
const QString CFG_PREFERENCES_ENABLE_STATS_UNIQUE_ID = "enableStatsUniqueID";
const QString CFG_HTTP_RESPONDER_ENABLE = "enabled";
const QString CFG_HTTP_RESPONDER_STATUS_CODE = "statusCode";
const QString CFG_HTTP_RESPONDER_STATUS_TEXT = "statusText";

const QString DEFAULT_SERVICE_ADDRESS = "127.0.0.1";
const int DEFAULT_SERVICE_PORT = 7654;

enum ConnectionStatus { FAILED, DISCONNECTED, CONNECTED, CONNECTING };

enum OperationStatus { OP_IN_PROGRESS, OP_FAILED, OP_SUCCESS };


} // dblui

#endif
