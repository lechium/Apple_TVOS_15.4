//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDDataStreamDelegate-Protocol.h>
#import <HomeKitDaemon/HMDDataStreamHAPSetupOperationDelegate-Protocol.h>
#import <HomeKitDaemon/HMDDataStreamSocketController-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDDataStream, HMDDataStreamSetupOperation, HMDHAPAccessory, HMDService, HMFTimer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface HMDDataStreamController : NSObject <HMDDataStreamHAPSetupOperationDelegate, HMFLogging, HMFTimerDelegate, HMDDataStreamDelegate, HMDDataStreamSocketController>
{
    _Bool _supportsDataStreamOverTCP;	// 8 = 0x8
    _Bool _supportsDataStreamOverHAP;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDHAPAccessory *_accessory;	// 24 = 0x18
    HMDService *_transferManagementService;	// 32 = 0x20
    HMDDataStream *_defaultDataStream;	// 40 = 0x28
    NSMutableArray *_pendingSocketRequests;	// 48 = 0x30
    HMDDataStreamSetupOperation *_setupInProgress;	// 56 = 0x38
    CDUnknownBlockType _dataStreamFactory;	// 64 = 0x40
    NSString *_logIdentifier;	// 72 = 0x48
    unsigned long long _maxControllerTransportMTU;	// 80 = 0x50
    HMFTimer *_idleTimer;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x00000000003adcfa
- (void).cxx_destruct;	// IMP=0x00000000003ad297
@property(retain, nonatomic) HMFTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(nonatomic) unsigned long long maxControllerTransportMTU; // @synthesize maxControllerTransportMTU=_maxControllerTransportMTU;
@property(nonatomic) _Bool supportsDataStreamOverHAP; // @synthesize supportsDataStreamOverHAP=_supportsDataStreamOverHAP;
@property(nonatomic) _Bool supportsDataStreamOverTCP; // @synthesize supportsDataStreamOverTCP=_supportsDataStreamOverTCP;
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, nonatomic) CDUnknownBlockType dataStreamFactory; // @synthesize dataStreamFactory=_dataStreamFactory;
@property(retain, nonatomic) HMDDataStreamSetupOperation *setupInProgress; // @synthesize setupInProgress=_setupInProgress;
@property(retain, nonatomic) NSMutableArray *pendingSocketRequests; // @synthesize pendingSocketRequests=_pendingSocketRequests;
@property(retain, nonatomic) HMDDataStream *defaultDataStream; // @synthesize defaultDataStream=_defaultDataStream;
@property(nonatomic) __weak HMDService *transferManagementService; // @synthesize transferManagementService=_transferManagementService;
@property(nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000003acf60
- (void)_stopIdleTimer;	// IMP=0x00000000003acdf5
- (void)_startIdleTimer;	// IMP=0x00000000003acb4a
- (void)invalidate;	// IMP=0x00000000003acad9
- (void)openBulkSendSessionForFileType:(id)arg1 reason:(id)arg2 metadata:(id)arg3 queue:(id)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x00000000003ac88a
- (void)dataStreamDidUpdateActiveStatus:(id)arg1;	// IMP=0x00000000003ac7ec
- (void)dataStreamDidReceiveRawFrame:(id)arg1;	// IMP=0x00000000003ac77b
- (void)dataStreamDidOpen:(id)arg1;	// IMP=0x00000000003ac6aa
- (void)dataStreamDidClose:(id)arg1;	// IMP=0x00000000003ac5d9
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000003ac4da
- (void)_resetDefaultDataStream;	// IMP=0x00000000003ac476
- (void)_createBulkStreamProtocol;	// IMP=0x00000000003ac2c5
- (void)_cancelStreamTransportWithError:(id)arg1;	// IMP=0x00000000003ac0c2
- (void)dataStreamSetupOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000003abf6f
- (void)dataStreamSetupOperation:(id)arg1 didSucceedWithTransport:(id)arg2 sessionEncryption:(id)arg3;	// IMP=0x00000000003abd01
- (void)dataStreamInitializationSetupOperation:(id)arg1 didCompleteSupportReadWithStatus:(_Bool)arg2;	// IMP=0x00000000003aba81
- (void)_initiateStreamSetup;	// IMP=0x00000000003ab6b1
- (_Bool)setupRequiresCharactertisticReads;	// IMP=0x00000000003ab596
- (_Bool)_isDataStreamCapable;	// IMP=0x00000000003ab55d
- (void)_createStreamSocketWithStreamProtocol:(id)arg1 applicationProtocolName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003ab3c0
- (id)_getStreamProtocol;	// IMP=0x00000000003ab224
- (void)_failPendingSocketRequestsWithError:(id)arg1;	// IMP=0x00000000003ab067
- (void)_processPendingSocketRequests;	// IMP=0x00000000003aae00
- (void)openStreamSocketWithApplicationProtocol:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003aad24
- (void)sendTargetControlWhoAmIWithIdentifier:(unsigned int)arg1;	// IMP=0x00000000003aab6c
- (void)removeBulkSendListener:(id)arg1;	// IMP=0x00000000003aa72f
- (void)addBulkSendListener:(id)arg1 fileType:(id)arg2;	// IMP=0x00000000003aa2e1
- (_Bool)canAcceptBulkSendListeners;	// IMP=0x00000000003aa2cf
- (id)_getActiveProtocolWithName:(id)arg1;	// IMP=0x00000000003aa226
- (void)handleAccessoryDisconnected:(id)arg1;	// IMP=0x00000000003aa175
- (void)_handleAccessoryConnected;	// IMP=0x00000000003a9e97
- (void)_readRequiredTransportCharacteristicsIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a99e9
- (_Bool)_isDataStreamConfigurationValid;	// IMP=0x00000000003a8a88
- (void)handleAccessoryConnected;	// IMP=0x00000000003a8a17
- (void)_resetTransportInfo;	// IMP=0x00000000003a89d6
- (void)handleAccessoryConnected:(id)arg1;	// IMP=0x00000000003a89c4
- (void)deRegisterFromNotifications;	// IMP=0x00000000003a8971
- (void)registerForNotifications;	// IMP=0x00000000003a883c
- (id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3 dataStreamFactory:(CDUnknownBlockType)arg4;	// IMP=0x00000000003a8687
- (id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3;	// IMP=0x00000000003a866e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

