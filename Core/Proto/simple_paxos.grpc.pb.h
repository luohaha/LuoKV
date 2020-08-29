// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: simple_paxos.proto
#ifndef GRPC_simple_5fpaxos_2eproto__INCLUDED
#define GRPC_simple_5fpaxos_2eproto__INCLUDED

#include "simple_paxos.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace simplepaxos {

class SimplePaxos final {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status HandleAccept(::grpc::ClientContext* context, const ::simplepaxos::Accept& request, ::simplepaxos::AcceptRet* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::simplepaxos::AcceptRet>> AsyncHandleAccept(::grpc::ClientContext* context, const ::simplepaxos::Accept& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::simplepaxos::AcceptRet>>(AsyncHandleAcceptRaw(context, request, cq));
    }
    virtual ::grpc::Status HandlePrepare(::grpc::ClientContext* context, const ::simplepaxos::Prepare& request, ::simplepaxos::PrepareRet* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::simplepaxos::PrepareRet>> AsyncHandlePrepare(::grpc::ClientContext* context, const ::simplepaxos::Prepare& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::simplepaxos::PrepareRet>>(AsyncHandlePrepareRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::simplepaxos::AcceptRet>* AsyncHandleAcceptRaw(::grpc::ClientContext* context, const ::simplepaxos::Accept& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::simplepaxos::PrepareRet>* AsyncHandlePrepareRaw(::grpc::ClientContext* context, const ::simplepaxos::Prepare& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status HandleAccept(::grpc::ClientContext* context, const ::simplepaxos::Accept& request, ::simplepaxos::AcceptRet* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::simplepaxos::AcceptRet>> AsyncHandleAccept(::grpc::ClientContext* context, const ::simplepaxos::Accept& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::simplepaxos::AcceptRet>>(AsyncHandleAcceptRaw(context, request, cq));
    }
    ::grpc::Status HandlePrepare(::grpc::ClientContext* context, const ::simplepaxos::Prepare& request, ::simplepaxos::PrepareRet* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::simplepaxos::PrepareRet>> AsyncHandlePrepare(::grpc::ClientContext* context, const ::simplepaxos::Prepare& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::simplepaxos::PrepareRet>>(AsyncHandlePrepareRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::simplepaxos::AcceptRet>* AsyncHandleAcceptRaw(::grpc::ClientContext* context, const ::simplepaxos::Accept& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::simplepaxos::PrepareRet>* AsyncHandlePrepareRaw(::grpc::ClientContext* context, const ::simplepaxos::Prepare& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::RpcMethod rpcmethod_HandleAccept_;
    const ::grpc::RpcMethod rpcmethod_HandlePrepare_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status HandleAccept(::grpc::ServerContext* context, const ::simplepaxos::Accept* request, ::simplepaxos::AcceptRet* response);
    virtual ::grpc::Status HandlePrepare(::grpc::ServerContext* context, const ::simplepaxos::Prepare* request, ::simplepaxos::PrepareRet* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_HandleAccept : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_HandleAccept() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_HandleAccept() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HandleAccept(::grpc::ServerContext* context, const ::simplepaxos::Accept* request, ::simplepaxos::AcceptRet* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHandleAccept(::grpc::ServerContext* context, ::simplepaxos::Accept* request, ::grpc::ServerAsyncResponseWriter< ::simplepaxos::AcceptRet>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_HandlePrepare : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_HandlePrepare() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_HandlePrepare() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HandlePrepare(::grpc::ServerContext* context, const ::simplepaxos::Prepare* request, ::simplepaxos::PrepareRet* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHandlePrepare(::grpc::ServerContext* context, ::simplepaxos::Prepare* request, ::grpc::ServerAsyncResponseWriter< ::simplepaxos::PrepareRet>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_HandleAccept<WithAsyncMethod_HandlePrepare<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_HandleAccept : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_HandleAccept() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_HandleAccept() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HandleAccept(::grpc::ServerContext* context, const ::simplepaxos::Accept* request, ::simplepaxos::AcceptRet* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_HandlePrepare : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_HandlePrepare() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_HandlePrepare() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HandlePrepare(::grpc::ServerContext* context, const ::simplepaxos::Prepare* request, ::simplepaxos::PrepareRet* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_HandleAccept : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_HandleAccept() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::StreamedUnaryHandler< ::simplepaxos::Accept, ::simplepaxos::AcceptRet>(std::bind(&WithStreamedUnaryMethod_HandleAccept<BaseClass>::StreamedHandleAccept, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_HandleAccept() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status HandleAccept(::grpc::ServerContext* context, const ::simplepaxos::Accept* request, ::simplepaxos::AcceptRet* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedHandleAccept(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::simplepaxos::Accept,::simplepaxos::AcceptRet>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_HandlePrepare : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_HandlePrepare() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::StreamedUnaryHandler< ::simplepaxos::Prepare, ::simplepaxos::PrepareRet>(std::bind(&WithStreamedUnaryMethod_HandlePrepare<BaseClass>::StreamedHandlePrepare, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_HandlePrepare() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status HandlePrepare(::grpc::ServerContext* context, const ::simplepaxos::Prepare* request, ::simplepaxos::PrepareRet* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedHandlePrepare(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::simplepaxos::Prepare,::simplepaxos::PrepareRet>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_HandleAccept<WithStreamedUnaryMethod_HandlePrepare<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_HandleAccept<WithStreamedUnaryMethod_HandlePrepare<Service > > StreamedService;
};

}  // namespace simplepaxos


#endif  // GRPC_simple_5fpaxos_2eproto__INCLUDED
