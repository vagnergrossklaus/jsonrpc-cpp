#include <iostream>

#include <jsonrpccpp/server/connectors/httpserver.h>

#include "stubserver.h"

using namespace std;

int main() {

  jsonrpc::HttpServer http(8383);
  StubServer server(http, jsonrpc::JSONRPC_SERVER_V1V2);
  server.StartListening();
  cout << "Hit enter to stop the server" << endl;
  getchar();

  server.StopListening();

  return 0;
}
