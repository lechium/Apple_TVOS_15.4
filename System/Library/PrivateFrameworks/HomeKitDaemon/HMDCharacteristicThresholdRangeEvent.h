//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCharacteristicThresholdRangeEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver>
{
    NSNumber *_min;	// 8 = 0x8
    NSNumber *_max;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000006e532c
+ (id)logCategory;	// IMP=0x00000000006e52fc
- (void).cxx_destruct;	// IMP=0x00000000006e4e66
@property(retain, nonatomic) NSNumber *max; // @synthesize max=_max;
@property(retain, nonatomic) NSNumber *min; // @synthesize min=_min;
- (id)analyticsTriggerEventData;	// IMP=0x00000000006e4d28
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000006e4d22
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000006e4a29
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000006e4801
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006e472d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006e463e
- (_Bool)_evaluateNewValue:(id)arg1;	// IMP=0x00000000006e41d4
- (_Bool)_isValueInRange:(id)arg1;	// IMP=0x00000000006e406b
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x00000000006e3dd7
- (id)emptyModelObject;	// IMP=0x00000000006e3d1e
- (id)createPayload;	// IMP=0x00000000006e3bbe
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x00000000006e3a28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

