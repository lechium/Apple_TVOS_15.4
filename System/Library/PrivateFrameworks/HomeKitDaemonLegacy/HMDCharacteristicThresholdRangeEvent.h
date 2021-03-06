//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCharacteristicThresholdRangeEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver>
{
    NSNumber *_min;	// 8 = 0x8
    NSNumber *_max;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000066dfb1
+ (id)logCategory;	// IMP=0x000000000066df81
- (void).cxx_destruct;	// IMP=0x000000000066daeb
@property(retain, nonatomic) NSNumber *max; // @synthesize max=_max;
@property(retain, nonatomic) NSNumber *min; // @synthesize min=_min;
- (id)analyticsTriggerEventData;	// IMP=0x000000000066d9ad
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000066d9a7
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000066d6ae
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x000000000066d486
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000066d3b2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000066d2c3
- (_Bool)_evaluateNewValue:(id)arg1;	// IMP=0x000000000066ce59
- (_Bool)_isValueInRange:(id)arg1;	// IMP=0x000000000066ccf0
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x000000000066ca5c
- (id)emptyModelObject;	// IMP=0x000000000066c9a3
- (id)createPayload;	// IMP=0x000000000066c843
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x000000000066c6ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

