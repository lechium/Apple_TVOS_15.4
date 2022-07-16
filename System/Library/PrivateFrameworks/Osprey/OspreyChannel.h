//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Osprey/OspreyRPC-Protocol.h>

@class NSError, NSString, NSURL, NSURLSessionConfiguration, OspreyChannelRequestOptions, OspreyConnectionPreferences, OspreyDeviceAuthentication, OspreyGRPCChannel, OspreyPreferences;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface OspreyChannel : NSObject <OspreyRPC>
{
    NSURL *_url;	// 8 = 0x8
    NSURLSessionConfiguration *_configuration;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    OspreyGRPCChannel *_channel;	// 32 = 0x20
    OspreyDeviceAuthentication *_deviceAuthenticator;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_validationGroup;	// 48 = 0x30
    _Bool _waitingForSignature;	// 56 = 0x38
    NSError *_signatureError;	// 64 = 0x40
    OspreyPreferences *_preferences;	// 72 = 0x48
    OspreyConnectionPreferences *_connectionPreferences;	// 80 = 0x50
    OspreyChannelRequestOptions *_defaultRequestOptions;	// 88 = 0x58
    _Bool _enableDeviceAuthentication;	// 96 = 0x60
    CDUnknownBlockType _connectionMetricsHandler;	// 104 = 0x68
    NSString *_clientTraceId;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000000b89b
@property(copy, nonatomic) NSString *clientTraceId; // @synthesize clientTraceId=_clientTraceId;
@property(copy, nonatomic) CDUnknownBlockType connectionMetricsHandler; // @synthesize connectionMetricsHandler=_connectionMetricsHandler;
@property(nonatomic) _Bool enableDeviceAuthentication; // @synthesize enableDeviceAuthentication=_enableDeviceAuthentication;
- (void)performBidirectionalStreamingRequest:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b65a
- (void)performRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b4d3
- (void)initializeAbsintheSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b4c1
@property(nonatomic) _Bool useAbsinthe;
- (void)_prepareDeviceAuthenticationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b44e
- (void)_prepareChannelWithRequest:(id)arg1 continueWith:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b195
- (id)_buildRequestWithMethodName:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b0c0
- (void)cancel;	// IMP=0x000000000000b0aa
- (void)close;	// IMP=0x000000000000b094
- (void)initializeDeviceAuthenticationSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ae8f
- (void)preconnect;	// IMP=0x000000000000ae79
- (id)bidirectionalStreamingRequestWithMethodName:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 streamingResponseHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000acf3
- (id)clientStreamingRequestWithMethodName:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a8d1
- (void)serverStreamingRequestWithMethodName:(id)arg1 requestData:(id)arg2 requestBuilder:(CDUnknownBlockType)arg3 streamingResponseHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000a6b6
- (void)unaryRequestWithMethodName:(id)arg1 requestData:(id)arg2 requestBuilder:(CDUnknownBlockType)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000a4f9
- (CDUnknownBlockType)getConnectionMetricsHandler;	// IMP=0x000000000000a4e3
- (void)setUseCompression:(_Bool)arg1;	// IMP=0x000000000000a4b7
@property(nonatomic) _Bool forceHTTPv2;
- (void)dealloc;	// IMP=0x000000000000a44d
- (id)initWithURL:(id)arg1 configuration:(id)arg2 useCache:(_Bool)arg3;	// IMP=0x000000000000a1b8
- (id)initWithURL:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000000a1a3
- (void)ocp_setAssociatedHandle:(id)arg1;	// IMP=0x000000000000e68f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

