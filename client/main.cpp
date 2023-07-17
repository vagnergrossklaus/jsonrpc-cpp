#include <iostream>

#include "gen/stubclient.h"
#include <jsonrpccpp/client/connectors/httpclient.h>

using namespace jsonrpc;
using namespace std;

int main() {
  HttpClient httpclient("http://localhost:8383");
  StubClient c(httpclient, JSONRPC_CLIENT_V2); // json-rpc 2.0

  try {
    c.notifyServer();

    cout << c.sayHello("Peter Knafl") << endl;
    c.notifyServer();
    cout << c.sayHello("Vagner") << endl;

    c.sayHello(""); // expects a server error

  } catch (JsonRpcException &e) {
    cerr << e.what() << endl;
  }
}
