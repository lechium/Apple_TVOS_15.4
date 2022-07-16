//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDPersonDataReceiver-Protocol.h>
#import <HomeKitDaemon/HMIPersonManagerDataSource-Protocol.h>

@class HMIExternalPersonManager, HMIHomePersonManager, HMIPersonManager, NSObject, NSString;
@protocol HMDPersonDataSource, OS_dispatch_queue;

@interface HMDHomeAIPersonDataReceiver : HMFObject <HMIPersonManagerDataSource, HMDPersonDataReceiver>
{
    HMIPersonManager *_personManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    id <HMDPersonDataSource> _dataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000095f11
@property __weak id <HMDPersonDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMIPersonManager *personManager; // @synthesize personManager=_personManager;
- (void)handleUpdatedIsDataSyncInProgress:(_Bool)arg1;	// IMP=0x0000000000095c9e
- (void)handleUpdatedIsCurrentDeviceAvailableResident:(_Bool)arg1;	// IMP=0x0000000000095a96
- (void)handleRemovedFaceprintWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000000959fe
- (void)handleRemovedFaceCropWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x0000000000095966
- (void)handleRemovedPersonWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000000958ce
- (void)handleUpdatedFaceprint:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x0000000000095813
- (void)handleUpdatedPersonFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x0000000000095758
- (void)handleUpdatedPerson:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x000000000009569d
- (void)configureWithDataSource:(id)arg1 home:(id)arg2;	// IMP=0x000000000009550f
- (void)performCloudPullWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000953b3
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009521b
- (void)fetchAllFaceprintsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000950bf
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000094f27
- (void)fetchAllPersonFaceCropsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000094dcb
- (void)fetchPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000094c33
- (void)fetchAllPersonsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000094ad7
- (id)initWithPersonManager:(id)arg1 workQueue:(id)arg2;	// IMP=0x0000000000094a35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMIHomePersonManager *homePersonManager;
@property(readonly) HMIExternalPersonManager *photosPersonManager;
@property(readonly) Class superclass;

@end
