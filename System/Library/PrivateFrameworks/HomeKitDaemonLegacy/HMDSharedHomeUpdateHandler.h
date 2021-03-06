//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDSharedHomeUpdateSessionDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDHome, HMDSharedHomeUpdateSession, HMFUnfairLock, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDSharedHomeUpdateHandler : HMFObject <HMDSharedHomeUpdateSessionDelegate, HMFLogging, HMFDumpState>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    _Bool _firstFetchComplete;	// 16 = 0x10
    _Bool _suspended;	// 17 = 0x11
    _Bool _pendingRequestDataFromResident;	// 18 = 0x12
    HMDSharedHomeUpdateSession *_pendingRequestDataFromResidentSession;	// 24 = 0x18
    HMDHome *_home;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00000000004d05b6
- (void).cxx_destruct;	// IMP=0x00000000004cfe22
@property(nonatomic) _Bool pendingRequestDataFromResident; // @synthesize pendingRequestDataFromResident=_pendingRequestDataFromResident;
@property(getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) _Bool firstFetchComplete; // @synthesize firstFetchComplete=_firstFetchComplete;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (id)dumpState;	// IMP=0x00000000004cfcc1
- (void)didCompleteHomeUpdateSession:(id)arg1 withError:(id)arg2;	// IMP=0x00000000004cfb6c
@property(retain, nonatomic) HMDSharedHomeUpdateSession *pendingRequestDataFromResidentSession; // @synthesize pendingRequestDataFromResidentSession=_pendingRequestDataFromResidentSession;
- (void)_receivedHomeDataFromSourceVersion:(id)arg1 forceUpdateVersion:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004cf42d
- (void)receivedHomeDataFromSourceVersion:(id)arg1 forceUpdateVersion:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004cf348
- (void)_evaluateNeedForSync;	// IMP=0x00000000004cee17
- (void)requestHomeDataSync;	// IMP=0x00000000004ceda6
- (void)handleHomeCloudZoneReadyNotification:(id)arg1;	// IMP=0x00000000004cecf5
- (void)residentsChanged:(id)arg1;	// IMP=0x00000000004cec84
- (void)resume;	// IMP=0x00000000004cec13
- (void)pause;	// IMP=0x00000000004ceba2
- (id)logIdentifier;	// IMP=0x00000000004ceac6
- (void)registerForMessages;	// IMP=0x00000000004ce9d8
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000004ce967
- (id)init;	// IMP=0x00000000004ce8fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

