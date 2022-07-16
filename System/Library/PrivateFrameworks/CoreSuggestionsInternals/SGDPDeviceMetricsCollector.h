//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/IDSServiceDelegate-Protocol.h>

@class IDSService, NSString, SGQuickResponsesStore;
@protocol OS_dispatch_queue, SGXPCActivityManagerProtocol;

@interface SGDPDeviceMetricsCollector : NSObject <IDSServiceDelegate>
{
    id <SGXPCActivityManagerProtocol> _xpcActivityManager;	// 8 = 0x8
    IDSService *_idsService;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    SGQuickResponsesStore *_store;	// 32 = 0x20
}

+ (_Bool)sendEngagementToDPUsingData:(id)arg1;	// IMP=0x0000000000005c12
+ (CDUnknownBlockType)onCompletionWithXPCActivityManager:(id)arg1 activity:(id)arg2 engagementMetrics:(id)arg3 idsService:(id)arg4 destinationDevice:(id)arg5;	// IMP=0x0000000000005a80
+ (CDUnknownBlockType)onDeltaRowWithXPCActivityManager:(id)arg1 activity:(id)arg2 engagementMetrics:(id)arg3;	// IMP=0x0000000000005921
+ (id)recorderForKey:(id)arg1;	// IMP=0x0000000000005919
+ (id)getActiveTrialInformationWithWithXPCActivityManager:(id)arg1 activity:(id)arg2;	// IMP=0x000000000000590c
+ (_Bool)recordEngagementMetrics:(id)arg1 selectedRecorder:(id)arg2 ignoredRecorder:(id)arg3;	// IMP=0x00000000000053fb
+ (_Bool)recordResponse:(id)arg1 numTimesToLog:(unsigned long long)arg2 recorder:(id)arg3 prefix:(id)arg4;	// IMP=0x0000000000005064
+ (id)getPrefixFromRolloutID:(id)arg1 factorPackId:(id)arg2 experimentId:(id)arg3 treatmentId:(id)arg4;	// IMP=0x0000000000004edb
- (void).cxx_destruct;	// IMP=0x0000000000004e9d
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0000000000004e97
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000000004e91
- (_Bool)syncQREngagementToPairedDeviceWithActivity:(id)arg1;	// IMP=0x0000000000004e73
- (_Bool)collectDeviceQREngagement:(id)arg1;	// IMP=0x0000000000004e55
- (id)initWithActivityManager:(id)arg1 idsService:(id)arg2 queue:(id)arg3 store:(id)arg4;	// IMP=0x0000000000004d5b
- (id)initWithActivityManager:(id)arg1;	// IMP=0x0000000000004c8e
- (id)initAsDelegate;	// IMP=0x0000000000004be3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

