//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAccount, AFAWDSiriRequestRecord, NSMutableArray, NSMutableSet, NSString, SASetAssistantData, SiriCoreConnectionType;
@protocol ADSessionDelegate, OS_dispatch_queue;

@interface ADSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADAccount *_account;	// 16 = 0x10
    NSString *_languageCode;	// 24 = 0x18
    NSString *_connectionMode;	// 32 = 0x20
    NSString *_pendingAssistantDataAnchor;	// 40 = 0x28
    NSMutableArray *_pendingCommands;	// 48 = 0x30
    NSMutableSet *_limboIds;	// 56 = 0x38
    NSMutableArray *_sendBuffer;	// 64 = 0x40
    SiriCoreConnectionType *_currentConnectionType;	// 72 = 0x48
    long long _state;	// 80 = 0x50
    id <ADSessionDelegate> _delegate;	// 88 = 0x58
    _Bool _shouldSendAssistantData;	// 96 = 0x60
    _Bool _assistantDataRequested;	// 97 = 0x61
    SASetAssistantData *_cachedAssistantData;	// 104 = 0x68
    NSString *_assistantDataRefId;	// 112 = 0x70
    _Bool _dormant;	// 120 = 0x78
    NSMutableArray *_dormantQueue;	// 128 = 0x80
    int _sessionType;	// 136 = 0x88
    NSString *_sessionId;	// 144 = 0x90
    NSMutableArray *_resultObjectsQueue;	// 152 = 0x98
    long long _resultUsefulnessScore;	// 160 = 0xa0
    _Bool _hasUsefulnessScore;	// 168 = 0xa8
    NSString *_requestId;	// 176 = 0xb0
    _Bool _canHandleRequest;	// 184 = 0xb8
    AFAWDSiriRequestRecord *_awdRequestRecord;	// 192 = 0xc0
    NSString *_sharedUserIdentifier;	// 200 = 0xc8
    NSString *_loggingSharedUserIdentifier;	// 208 = 0xd0
}

+ (int)_adSessionTypeFromString:(id)arg1;	// IMP=0x00200000001b3aa2
+ (Class)sessionClassForType:(int)arg1;	// IMP=0x00100000001b3278
- (void).cxx_destruct;	// IMP=0x00200000001b5941
@property(nonatomic) _Bool dormant; // @synthesize dormant=_dormant;
@property(nonatomic) __weak id <ADSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *connectionMode; // @synthesize connectionMode=_connectionMode;
@property(copy, nonatomic) NSString *loggingSharedUserIdentifier; // @synthesize loggingSharedUserIdentifier=_loggingSharedUserIdentifier;
@property(copy, nonatomic) NSString *sharedUserIdentifier; // @synthesize sharedUserIdentifier=_sharedUserIdentifier;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)hasUsefulnessScore;	// IMP=0x00100000001b5865
- (long long)usefulnessScore;	// IMP=0x00100000001b5858
- (_Bool)hasResultObjects;	// IMP=0x00100000001b5838
- (void)setOrUpdateUsefulnessScore:(id)arg1;	// IMP=0x00100000001b5801
- (id)dequeueResultObjects;	// IMP=0x00100000001b5797
- (void)queueResultObjects:(id)arg1;	// IMP=0x00100000001b572e
- (id)_currentConnectionType;	// IMP=0x00100000001b5720
- (void)_setCurrentConnectionType:(id)arg1;	// IMP=0x00100000001b569e
- (void)_handleAceObject:(id)arg1;	// IMP=0x00100000001b5698
- (id)_account;	// IMP=0x00100000001b568a
- (void)_resetServerConnectionSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b5684
- (void)_cancelSynchronously:(_Bool)arg1;	// IMP=0x00100000001b5619
- (id)connection;	// IMP=0x00100000001b5611
- (void)_startConnection;	// IMP=0x00100000001b560b
- (void)_startSession;	// IMP=0x00100000001b5605
- (void)sendRemoteGizmoDeviceToServer:(id)arg1;	// IMP=0x00100000001b55ff
- (id)sessionId;	// IMP=0x00100000001b55ee
- (_Bool)sessionIsWaitingForAssistantData;	// IMP=0x00100000001b55dc
- (_Bool)sessionIsAttemptingTryOrRetry;	// IMP=0x00100000001b55ce
- (_Bool)sessionIsActive;	// IMP=0x00100000001b55c0
- (_Bool)hasLoadedAssistant;	// IMP=0x00100000001b55b2
- (void)resetConnection;	// IMP=0x00100000001b5569
- (void)cancelSessionRequest:(id)arg1;	// IMP=0x00100000001b5420
- (void)cancelSynchronously;	// IMP=0x00100000001b5409
- (void)cancel;	// IMP=0x00100000001b53f5
- (void)retryNakedCommandsIfNeeded;	// IMP=0x00100000001b53ef
- (void)resetRetryManager;	// IMP=0x00100000001b53e9
- (void)startRetry;	// IMP=0x00100000001b53e3
- (void)prepareForRetry;	// IMP=0x00100000001b532c
- (id)currentConnectionPreCachedMetrics;	// IMP=0x00100000001b5324
- (void)getConnectionMetrics:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b530e
- (void)delegateDidHandleCommand:(id)arg1 didRecognizeSpeech:(_Bool)arg2;	// IMP=0x00100000001b5308
- (void)handleCommand:(id)arg1;	// IMP=0x00100000001b5260
- (void)sendCommands:(id)arg1 opportunistically:(_Bool)arg2;	// IMP=0x00100000001b50c4
- (void)sendCommand:(id)arg1 opportunistically:(_Bool)arg2;	// IMP=0x00100000001b4e0f
- (_Bool)canHandleRequest;	// IMP=0x00100000001b4e03
- (void)setCanHandleRequest:(_Bool)arg1;	// IMP=0x00100000001b4df7
- (void)setHasActiveRequest:(_Bool)arg1;	// IMP=0x00100000001b4df1
- (void)endRetryableRequestForCommandAceId:(id)arg1 refId:(id)arg2;	// IMP=0x00100000001b4deb
- (void)beginRetryableRequest:(id)arg1;	// IMP=0x00100000001b4de5
- (void)refreshValidationData;	// IMP=0x00100000001b4d47
- (void)beginUpdatingAssistantData;	// IMP=0x00100000001b4cd6
- (void)eagerlyFetchAssistantData;	// IMP=0x00100000001b4c12
- (void)preheatAndMakeQuiet:(_Bool)arg1;	// IMP=0x00100000001b4ab9
- (void)_probeSessionIfIdle;	// IMP=0x00100000001b4ab3
- (void)_releaseDormancySuspension;	// IMP=0x00100000001b4aad
- (void)_forceFastDormancy;	// IMP=0x00100000001b4aa7
- (void);	// IMP=0x00100000001b4969
- (void)_sendPendingDormantCommands;	// IMP=0x00100000001b4876
- (void)_pendDormantCommand:(id)arg1;	// IMP=0x00100000001b4810
- (void)_saGetAssistantData:(id)arg1;	// IMP=0x00100000001b478b
- (void)_setAssistantDataAnchorIfNeeded:(id)arg1;	// IMP=0x00100000001b451b
- (void)assistantDataManager:(id)arg1 didUpdateAssistantData:(id)arg2;	// IMP=0x00100000001b4221
- (void)_sendAssistantDataChangedSinceAnchor:(id)arg1 refId:(id)arg2;	// IMP=0x00100000001b3f7b
- (void)_removeRequestForAssistantData;	// IMP=0x00100000001b3f13
- (void)_requestForAssistantData;	// IMP=0x00100000001b3e99
- (_Bool)_waitingForAssistantData;	// IMP=0x00100000001b3e7c
- (_Bool)_shouldSendAssistantData;	// IMP=0x00100000001b3e73
- (void)_setPendingAssistantDataAnchor:(id)arg1;	// IMP=0x00100000001b3e62
- (id)_cachedAssistantData;	// IMP=0x00100000001b3e54
- (void)doSendPostProcessing:(id)arg1;	// IMP=0x00100000001b3e4e
- (void)doSendPreProcessing:(id)arg1;	// IMP=0x00100000001b3e48
- (void)_sendDestroyAssistant;	// IMP=0x00100000001b3dc1
- (void)_sendCommandFailedWithRefId:(id)arg1;	// IMP=0x00100000001b3d48
- (void)_sendServerCommands:(id)arg1;	// IMP=0x00100000001b3d16
- (void)_sendServerCommand:(id)arg1;	// IMP=0x00100000001b3ce4
- (void)_informDelegateCannotHandleRequest:(id)arg1 error:(id)arg2;	// IMP=0x00100000001b3c68
- (void)_informDelegateWillRetryOnError:(id)arg1;	// IMP=0x00100000001b3c0c
- (void)_informDelegateOfError:(id)arg1;	// IMP=0x00100000001b3bad
- (void)_passObjectToDelegate:(id)arg1;	// IMP=0x00100000001b3b51
- (id)awdRequestRecord;	// IMP=0x00100000001b3b40
- (void)setAWDRequestRecord:(id)arg1;	// IMP=0x00100000001b3b2c
- (id)_requestId;	// IMP=0x00100000001b3b1b
- (void)_setRequestId:(id)arg1;	// IMP=0x00100000001b3b07
- (id)_adSessionTypeString;	// IMP=0x00100000001b3a54
- (void)_setSessionId:(id)arg1;	// IMP=0x00100000001b3a40
- (id)_saConnectionType;	// IMP=0x00100000001b38db
- (void)barrier:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b38d5
- (void)_clearSendBuffer;	// IMP=0x00100000001b38bb
- (id)_sendBuffer;	// IMP=0x00100000001b38ad
- (void)_clearLimbo;	// IMP=0x00100000001b3874
- (void)_sendLimboCommand:(id)arg1;	// IMP=0x00100000001b376e
- (void)_sendAssistantDataAndPendingCommandsIfNeeded:(id)arg1;	// IMP=0x00100000001b3706
- (void)_sendPendingCommands;	// IMP=0x00100000001b34fe
- (void)_addPendingCommand:(id)arg1;	// IMP=0x00100000001b3486
- (_Bool)_refIdIsLimboId:(id)arg1;	// IMP=0x00100000001b3470
- (void)_removeLimboId:(id)arg1;	// IMP=0x00100000001b345a
- (void)_addLimboId:(id)arg1;	// IMP=0x00100000001b3400
- (id)_pendingCommands;	// IMP=0x00100000001b33c5
- (void)_setSessionOpened;	// IMP=0x00100000001b33ae
- (_Bool)supportsSync;	// IMP=0x00100000001b33a6
- (void)dealloc;	// IMP=0x00100000001b3377
- (id)initOnQueue:(id)arg1 withAccount:(id)arg2 languageCode:(id)arg3 connectionMode:(id)arg4 sharedUserIdentifier:(id)arg5 loggingSharedUserIdentifier:(id)arg6 instanceContext:(id)arg7;	// IMP=0x00100000001b3348
- (id)initOnQueue:(id)arg1 withAccount:(id)arg2;	// IMP=0x00100000001b32af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

