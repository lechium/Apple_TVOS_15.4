//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMIHomePersonManagerDataSource-Protocol.h>

@class HMIHomePersonManager, NSString;

@interface HMDHomeAIHomePersonDataReceiver <HMFLogging, HMIHomePersonManagerDataSource>
{
    HMIHomePersonManager *_homePersonManager;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00000000006aa048
- (void).cxx_destruct;	// IMP=0x00000000006a9043
@property(readonly) HMIHomePersonManager *homePersonManager; // @synthesize homePersonManager=_homePersonManager;
- (void)handleFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2;	// IMP=0x00000000006a8e17
- (void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000006a8c99
- (void)handleUpdatedUnassociatedFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000006a8bde
- (void)removeFaceprintsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006a8b02
- (void)removeFaceCropsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006a8a26
- (void)removePersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006a894a
- (void)addFaceprints:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006a886e
- (void)addPersonFaceCrops:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006a885c
- (void)addFaceCrops:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006a8780
- (void)addPersons:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006a86a4
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006a85f3
- (void)fetchAllUnassociatedFaceCropsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006a8542
- (id)logIdentifier;	// IMP=0x00000000006a84c8
- (id)initWithHomePersonManager:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000006a844d
- (id)initWithPersonManagerUUID:(id)arg1 homeUUID:(id)arg2 workQueue:(id)arg3;	// IMP=0x00000000006a8397

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
