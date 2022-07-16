//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSDateComponents, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSignificantTimeEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSString *_significantEvent;	// 16 = 0x10
    NSDateComponents *_offset;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000498bdb
+ (id)logCategory;	// IMP=0x0000000000498bab
- (void).cxx_destruct;	// IMP=0x00000000004986dd
- (id)analyticsTriggerEventData;	// IMP=0x00000000004985ee
- (id)_nextTimerDate;	// IMP=0x0000000000497bdc
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000497bd6
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000049789d
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000497709
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000497635
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000497546
@property(retain) NSDateComponents *offset; // @synthesize offset=_offset;
@property(retain) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x0000000000497114
- (id)emptyModelObject;	// IMP=0x000000000049705b
- (id)createPayload;	// IMP=0x0000000000496f39
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x0000000000496d47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

