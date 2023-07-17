#pragma once

#include <jsonrpccpp/server/abstractserverconnector.h>

#include "gen/abstractstubserver.h"

class StubServer : public AbstractStubServer {
public:
  StubServer(jsonrpc::AbstractServerConnector &connector,
             jsonrpc::serverVersion_t type);
  std::string sayHello(const std::string &name) override;
  void notifyServer() override;
};
