//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LocalAuthentication/LAContextCallbackXPC-Protocol.h>
#import <LocalAuthentication/LAContextXPC-Protocol.h>

@class LACachedExternalizedContext, LAContext, NSData, NSError, NSMutableArray, NSNumber, NSString, NSUUID, NSXPCConnection;
@protocol LAContextXPC, LAUIDelegate;

__attribute__((visibility("hidden")))
@interface LAClient : NSObject <LAContextXPC, LAContextCallbackXPC>
{
    _Bool _shouldRecoverConnection;	// 8 = 0x8
    id <LAUIDelegate> _uiDelegate;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    NSError *_permanentError;	// 32 = 0x20
    NSXPCConnection *_serverConnection;	// 40 = 0x28
    NSObject<LAContextXPC> *_remoteContext;	// 48 = 0x30
    NSObject<LAContextXPC> *_synchronousRemoteContext;	// 56 = 0x38
    NSMutableArray *_invalidations;	// 64 = 0x40
    LACachedExternalizedContext *_cachedExternalizedContext;	// 72 = 0x48
    NSNumber *_userSession;	// 80 = 0x50
    NSData *_existingContext;	// 88 = 0x58
    LAContext *_context;	// 96 = 0x60
}

+ (void)_performInvalidationBlocks:(id)arg1;	// IMP=0x0000000000002b05
+ (id)createConnection:(const unsigned int *)arg1 legacyService:(_Bool)arg2;	// IMP=0x00000000000017ea
+ (id)_queue;	// IMP=0x0000000000001764
- (void).cxx_destruct;	// IMP=0x00000000000060ad
@property(readonly, nonatomic) __weak LAContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSData *existingContext; // @synthesize existingContext=_existingContext;
@property(readonly, nonatomic) NSNumber *userSession; // @synthesize userSession=_userSession;
@property _Bool shouldRecoverConnection; // @synthesize shouldRecoverConnection=_shouldRecoverConnection;
@property(retain) LACachedExternalizedContext *cachedExternalizedContext; // @synthesize cachedExternalizedContext=_cachedExternalizedContext;
@property(readonly, nonatomic) NSMutableArray *invalidations; // @synthesize invalidations=_invalidations;
@property(readonly, nonatomic) NSObject<LAContextXPC> *synchronousRemoteContext; // @synthesize synchronousRemoteContext=_synchronousRemoteContext;
@property(retain, nonatomic) NSObject<LAContextXPC> *remoteContext; // @synthesize remoteContext=_remoteContext;
@property(readonly, nonatomic) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain) NSError *permanentError; // @synthesize permanentError=_permanentError;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak id <LAUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
- (void)bootstrapServiceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005e3b
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005d65
- (void)notifyEvent:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005b95
- (void)resetWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005ad1
- (void)prearmTouchIdWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005996
- (void)authMethodWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000058d4
@property(readonly, nonatomic) NSData *externalizedContext;
- (id)synchronousExternalizedContextWithError:(id *)arg1;	// IMP=0x0000000000005630
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000556e
- (_Bool)setServerPropertyForOption:(long long)arg1 value:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000053fb
- (id)serverPropertyForOption:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000000051ba
- (void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000509a
- (void)serverPropertyForOption:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004fce
- (void)credentialOfType:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004e89
- (void)setCredential:(id)arg1 type:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004d03
- (void)isCredentialSet:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004bbe
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000000049e1
- (void)pauseProcessedEvent:(long long)arg1 pause:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000488a
- (void)resetProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004745
- (void)retryProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004600
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004471
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 synchronous:(_Bool)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000000003ebb
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000003e9f
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000003ddb
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 synchronous:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000000396a
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000003948
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000038b7
- (id)_updateOptions:(id)arg1;	// IMP=0x00000000000037cb
- (_Bool)_setPermanentError:(id)arg1;	// IMP=0x00000000000035f4
- (void)_performSynchronous:(_Bool)arg1 callBool:(CDUnknownBlockType)arg2 finally:(CDUnknownBlockType)arg3;	// IMP=0x00000000000033a8
- (void)_performSynchronous:(_Bool)arg1 callId:(CDUnknownBlockType)arg2 finally:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002c8c
- (void)_performCallBool:(CDUnknownBlockType)arg1 finally:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002c6f
- (void)_performCallId:(CDUnknownBlockType)arg1 finally:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002c52
- (void)_checkIdResultForTCC:(id)arg1 synchronous:(_Bool)arg2 error:(id)arg3 retryBlock:(CDUnknownBlockType)arg4 finally:(CDUnknownBlockType)arg5;	// IMP=0x0000000000002c3d
- (void)invalidateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002a25
- (void)_serializedInvalidateWithMessage:(id)arg1;	// IMP=0x0000000000002945
- (void)invalidateWithMessage:(id)arg1;	// IMP=0x000000000000281c
- (void)invalidatedWithError:(id)arg1;	// IMP=0x0000000000002708
- (void)tokenForTransferToUnknownProcess:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002646
- (void)allowTransferToProcess:(int)arg1 receiverAuditTokenData:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002527
- (void)_recoverConnection;	// IMP=0x00000000000022e2
- (void)_scheduleRecovery;	// IMP=0x0000000000002259
- (void)_handleConnectionResult:(id)arg1 uuid:(id)arg2 error:(id)arg3;	// IMP=0x0000000000002037
- (void)_synchronousRemoteObjectProxy:(const unsigned int *)arg1 performCall:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001e5e
- (void)_connectToServerWithRecovery:(_Bool)arg1 userSession:(const unsigned int *)arg2 legacyService:(_Bool)arg3;	// IMP=0x000000000000194f
- (void)dealloc;	// IMP=0x0000000000001611
- (id)initWithUUID:(id)arg1 token:(id)arg2 senderAuditTokenData:(id)arg3 context:(id)arg4;	// IMP=0x0000000000001322
- (id)initWithExternalizedContext:(id)arg1 userSession:(unsigned int *)arg2 context:(id)arg3;	// IMP=0x0000000000001075

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

