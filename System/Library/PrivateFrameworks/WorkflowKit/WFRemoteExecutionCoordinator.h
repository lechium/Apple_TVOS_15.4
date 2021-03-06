//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/IDSServiceDelegate-Protocol.h>
#import <WorkflowKit/WFRemoteExecutionSessionDelegate-Protocol.h>

@class IDSService, NSMapTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface WFRemoteExecutionCoordinator : NSObject <WFRemoteExecutionSessionDelegate, IDSServiceDelegate>
{
    _Bool _allowRunRequests;	// 8 = 0x8
    NSMutableArray *_activeSessions;	// 16 = 0x10
    NSMapTable *_completionsForSessions;	// 24 = 0x18
    IDSService *_service;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)sharedCoordinator;	// IMP=0x000000000008d18c
- (void).cxx_destruct;	// IMP=0x000000000008d119
@property(readonly, nonatomic) _Bool allowRunRequests; // @synthesize allowRunRequests=_allowRunRequests;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSMapTable *completionsForSessions; // @synthesize completionsForSessions=_completionsForSessions;
@property(retain, nonatomic) NSMutableArray *activeSessions; // @synthesize activeSessions=_activeSessions;
- (void)mapSelectorsForIncomingProtobuf;	// IMP=0x000000000008cd51
- (id)defaultIDSOptions;	// IMP=0x000000000008ccbf
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000000008c858
@property(readonly, nonatomic) NSString *pairedDeviceModelIdentifier;
- (id)pairedDevice;	// IMP=0x000000000008c440
- (_Bool)hasPairedDevice;	// IMP=0x000000000008c3f8
- (_Bool)shouldDropMessageDueToStaleness:(id)arg1;	// IMP=0x000000000008c28b
- (_Bool)messageCameFromPairedDevice:(id)arg1;	// IMP=0x000000000008c154
- (void)finishSessionWithRequest:(id)arg1;	// IMP=0x000000000008be83
- (void)sessionDidFinish:(id)arg1;	// IMP=0x000000000008bd03
- (id)sessionsOfClass:(Class)arg1;	// IMP=0x000000000008bca4
- (void)handleUnknownRequestMessage:(id)arg1;	// IMP=0x000000000008bafc
- (id)unknownRequestError;	// IMP=0x000000000008ba16
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000000008b98e
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000000008b604
- (id)unknownRequestMessageWithIdentifier:(id)arg1;	// IMP=0x000000000008b549
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x000000000008ae70
- (void)sendFileAtURL:(id)arg1 transferIdentifier:(id)arg2 requestIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000000008ad30
- (void)handleIncomingAceCommand:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000000008ab03
- (void)handleAskWhenRunRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000000008a81f
- (void)sendAskWhenRunRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008a6cc
- (void)handleStopRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000000008a4fd
- (void)handleAlertRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000000008a219
- (void)sendAlertRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008a0c6
- (void)sendRunRequestResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000089f29
- (void)handleRunRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000899e1
- (void)handleAceCommandResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000000089687
- (void)sendAceCommandDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000089506
- (void)handleAskWhenRunRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000000089288
- (_Bool)sendStopRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000089154
- (void)handleAlertRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000000088ed6
- (void)handleRunRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000000088b7c
- (void)sendRunRequest:(id)arg1 userInterface:(id)arg2 parameterInputProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000889dd
- (id)sessionFromRequestIdentifier:(id)arg1;	// IMP=0x0000000000088776
- (void)cancelRequest:(id)arg1;	// IMP=0x0000000000088699
- (void)cancelSessions:(id)arg1;	// IMP=0x000000000008838c
- (void)cancelPendingFileTransfers;	// IMP=0x000000000008832e
- (void)cancelAllSessions;	// IMP=0x00000000000882e2
- (id)initAndAllowRunRequests:(_Bool)arg1;	// IMP=0x00000000000881c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

