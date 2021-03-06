#pragma once

// https://docs.microsoft.com/en-us/previous-versions/dotnet/netframework-1.1/4ksaf9z5(v=vs.71)

using namespace System;
using namespace System::Data;

namespace Client
{
    public ref class FbConnection : IDbConnection
    {
    public:
        FbConnection();
        FbConnection(String^ connectionString);
        ~FbConnection();

        virtual property String^ ConnectionString {
            String^ get() {
                throw gcnew NotImplementedException();
            }
            void set(String^ value)
            {
                throw gcnew NotImplementedException();
            }
        }

        virtual property int ConnectionTimeout {
            int get() {
                throw gcnew NotImplementedException();
            }
        }

        virtual property String^ Database {
            String^ get() {
                throw gcnew NotImplementedException();
            }
        }

        virtual property ConnectionState State {
            ConnectionState get() {
                throw gcnew NotImplementedException();
            }
        }

        virtual IDbTransaction^ BeginTransaction();
        virtual IDbTransaction^ BeginTransaction(IsolationLevel isolationlevel);
        virtual void Close();
        virtual void Open();
        virtual void ChangeDatabase(String^ databaseName);
        virtual IDbCommand^ CreateCommand();
    };
}
