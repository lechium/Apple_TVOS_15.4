//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDSharedHomeUpdateSessionDelegate-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

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

+ (id)logCategory;	// IMP=0x000000000052bd86
- (void).cxx_destruct;	// IMP=0x000000000052b5f2
@property(nonatomic) _Bool pendingRequestDataFromResident; // @synthesize pendingRequestDataFromResident=_pendingRequestDataFromResident;
@property(getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) _Bool firstFetchComplete; // @synthesize firstFetchComplete=_firstFetchComplete;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (id)dumpState;	// IMP=0x000000000052b491
- (void)didCompleteHomeUpdateSession:(id)arg1 withError:(id)arg2;	// IMP=0x000000000052b33c
@property(retain, nonatomic) HMDSharedHomeUpdateSession *pendingRequestDataFromResidentSession; // @synthesize pendingRequestDataFromResidentSession=_pendingRequestDataFromResidentSession;
- (void)_receivedHomeDataFromSourceVersion:(id)arg1 forceUpdateVersion:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000052abfd
- (void)receivedHomeDataFromSourceVersion:(id)arg1 forceUpdateVersion:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000052ab18
- (void)_evaluateNeedForSync;	// IMP=0x000000000052a5e7
- (void)requestHomeDataSync;	// IMP=0x000000000052a576
- (void)handleHomeCloudZoneReadyNotification:(id)arg1;	// IMP=0x000000000052a4c5
- (void)residentsChanged:(id)arg1;	// IMP=0x000000000052a454
- (void)resume;	// IMP=0x000000000052a3e3
- (void)pause;	// IMP=0x000000000052a372
- (id)logIdentifier;	// IMP=0x000000000052a296
- (void)registerForMessages;	// IMP=0x000000000052a1a8
- (void)configureWithHome:(id)arg1;	// IMP=0x000000000052a137
- (id)init;	// IMP=0x000000000052a0ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

