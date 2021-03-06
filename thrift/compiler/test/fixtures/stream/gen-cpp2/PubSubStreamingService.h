/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/futures/Future.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include "src/gen-cpp2/PubSubStreamingServiceAsyncClient.h"
#include "src/gen-cpp2/module_types.h"
#include <yarpl/Flowable.h>

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class PubSubStreamingServiceSvAsyncIf {
 public:
  virtual ~PubSubStreamingServiceSvAsyncIf() {}
  virtual void async_tm_client(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) = 0;
  virtual folly::Future<folly::Unit> future_client(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) = 0;
  virtual void async_tm_server(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) = 0;
  virtual folly::Future<folly::Unit> future_server(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) = 0;
  virtual void async_tm_both(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) = 0;
  virtual folly::Future<folly::Unit> future_both(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) = 0;
  virtual void async_tm_returnstream(std::unique_ptr<apache::thrift::PubsubHandlerCallback<int32_t>> callback, int32_t i32_from, int32_t i32_to) = 0;
  virtual void async_tm_takesstream(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param) = 0;
  virtual folly::Future<folly::Unit> future_takesstream(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param) = 0;
  virtual void async_tm_clientthrows(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream) = 0;
  virtual folly::Future<folly::Unit> future_clientthrows(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream) = 0;
};

class PubSubStreamingServiceAsyncProcessor;

class PubSubStreamingServiceSvIf : public PubSubStreamingServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef PubSubStreamingServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual void client(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/);
  folly::Future<folly::Unit> future_client(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) override;
  void async_tm_client(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) override;
  virtual void server(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/);
  folly::Future<folly::Unit> future_server(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) override;
  void async_tm_server(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) override;
  virtual void both(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/);
  folly::Future<folly::Unit> future_both(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) override;
  void async_tm_both(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) override;
  virtual yarpl::Reference<yarpl::flowable::Flowable<int32_t>> returnstream(int32_t /*i32_from*/, int32_t /*i32_to*/);
  virtual void takesstream(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*instream*/, int32_t /*other_param*/);
  folly::Future<folly::Unit> future_takesstream(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param) override;
  void async_tm_takesstream(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param) override;
  virtual void clientthrows(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foostream*/);
  folly::Future<folly::Unit> future_clientthrows(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream) override;
  void async_tm_clientthrows(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream) override;
};

class PubSubStreamingServiceSvNull : public PubSubStreamingServiceSvIf {
 public:
  void client(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/) override;
  void server(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/) override;
  void both(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/) override;
  yarpl::Reference<yarpl::flowable::Flowable<int32_t>> returnstream(int32_t /*i32_from*/, int32_t /*i32_to*/) override;
  void takesstream(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*instream*/, int32_t /*other_param*/) override;
  void clientthrows(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foostream*/) override;
};

class PubSubStreamingServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
  using HasFrozen2 = std::false_type;
 protected:
  PubSubStreamingServiceSvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using BinaryProtocolProcessFunc = ProcessFunc<PubSubStreamingServiceAsyncProcessor, apache::thrift::BinaryProtocolReader>;
  using BinaryProtocolProcessMap = ProcessMap<BinaryProtocolProcessFunc>;
  static const PubSubStreamingServiceAsyncProcessor::BinaryProtocolProcessMap& getBinaryProtocolProcessMap();
 private:
  static const PubSubStreamingServiceAsyncProcessor::BinaryProtocolProcessMap binaryProcessMap_;
 public:
  using CompactProtocolProcessFunc = ProcessFunc<PubSubStreamingServiceAsyncProcessor, apache::thrift::CompactProtocolReader>;
  using CompactProtocolProcessMap = ProcessMap<CompactProtocolProcessFunc>;
  static const PubSubStreamingServiceAsyncProcessor::CompactProtocolProcessMap& getCompactProtocolProcessMap();
 private:
  static const PubSubStreamingServiceAsyncProcessor::CompactProtocolProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_client(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_client(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_client(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_client(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_server(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_server(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_server(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_server(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_both(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_both(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_both(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_both(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_returnstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_returnstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_returnstream(int32_t protoSeqId, apache::thrift::ContextStack* ctx, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_returnstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_takesstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_takesstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_takesstream(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_takesstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_clientthrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_clientthrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_clientthrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_clientthrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  PubSubStreamingServiceAsyncProcessor(PubSubStreamingServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~PubSubStreamingServiceAsyncProcessor() {}
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
