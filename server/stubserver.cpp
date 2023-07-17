#include "stubserver.h"

#include <iostream>

using namespace jsonrpc;
using namespace std;

StubServer::StubServer(jsonrpc::AbstractServerConnector &connector,
                       jsonrpc::serverVersion_t type)
    : AbstractStubServer(connector, type) {}

std::string StubServer::sayHello(const std::string &name) {
  if (name == "")
    throw JsonRpcException(-32100, "Name was empty");
  return "Hello " + name;
}

void StubServer::notifyServer() { cout << "Server got notified" << endl; }
