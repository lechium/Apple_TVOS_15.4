//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDSnapshotRequestHandlerProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDSnapshotCacheRequestHandler : HMFObject <HMFLogging, HMFTimerDelegate, HMDSnapshotRequestHandlerProtocol>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSMutableDictionary *_snapshotCacheMap;	// 16 = 0x10
    NSString *_logIdentifier;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000a9848e
- (void).cxx_destruct;	// IMP=0x0000000000a98117
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (_Bool)isSnapshotPresentForCharacteristicEventUUID:(id)arg1;	// IMP=0x0000000000a97f74
- (void)requestSnapshot:(id)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a97ea5
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000a97b7d
- (void)setSnapshotFileToCache:(id)arg1 snapshotCharacteristicEventUUID:(id)arg2;	// IMP=0x0000000000a9783b
- (void)removeSnapshotFileToCache:(id)arg1 error:(id)arg2;	// IMP=0x0000000000a975cb
- (void)addSnapshotFileToCache:(id)arg1;	// IMP=0x0000000000a97479
- (id)initWithWorkQueue:(id)arg1 logID:(id)arg2;	// IMP=0x0000000000a973a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

