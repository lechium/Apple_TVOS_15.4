//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDHome, HMDManagedObjectCodingModel, HMDManagedObjectContext, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDResidentSyncController : NSObject <HMFMessageReceiver, HMFLogging>
{
    HMDHome *_home;	// 8 = 0x8
    NSUUID *_homeUUID;	// 16 = 0x10
    HMDManagedObjectCodingModel *_codingModel;	// 24 = 0x18
    HMDManagedObjectContext *_context;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0000000000726317
- (void).cxx_destruct;	// IMP=0x000000000072623f
- (id)logIdentifier;	// IMP=0x0000000000726229
- (id)dispatchContextForMessage:(id)arg1;	// IMP=0x000000000072621b
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (_Bool)changeToken:(id)arg1 isAheadOf:(id)arg2;	// IMP=0x0000000000726198
- (id)decodeToken:(id)arg1 error:(id *)arg2;	// IMP=0x000000000072600a
- (id)encodeToken:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000725ea8
- (id)initWithHome:(id)arg1 codingModel:(id)arg2 persistence:(id)arg3;	// IMP=0x0000000000725cf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end

