#include "FbConnection.h"

namespace Client
{
    FbConnection::FbConnection() {
        throw gcnew NotImplementedException();
    }

    FbConnection::FbConnection(String^ connectionString) {
        throw gcnew NotImplementedException();
    }

    FbConnection::~FbConnection() {
        throw gcnew NotImplementedException();
    }

    IDbTransaction^ FbConnection::BeginTransaction() {
        throw gcnew NotImplementedException();
    }

    IDbTransaction^ FbConnection::BeginTransaction(IsolationLevel isolationLevel) {
        throw gcnew NotImplementedException();
    }

    void FbConnection::Close() {
        throw gcnew NotImplementedException();
    }

    void FbConnection::Open() {
        throw gcnew NotImplementedException();
    }

    void FbConnection::ChangeDatabase(String^ databaseName) {
        throw gcnew NotImplementedException();
    }

    IDbCommand^ FbConnection::CreateCommand() {
        throw gcnew NotImplementedException();
    }
}