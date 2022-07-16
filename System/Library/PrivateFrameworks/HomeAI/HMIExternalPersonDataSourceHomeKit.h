//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMIExternalPersonManagerDataSource-Protocol.h>

@class HMPhotosPersonManager, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMIExternalPersonDataSourceHomeKit : HMFObject <HMIExternalPersonManagerDataSource, HMFLogging>
{
    HMPhotosPersonManager *_photosPersonManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x000000000001ec2e
- (void).cxx_destruct;	// IMP=0x000000000001ec75
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) HMPhotosPersonManager *photosPersonManager; // @synthesize photosPersonManager=_photosPersonManager;
- (id)logIdentifier;	// IMP=0x000000000001eba1
- (void)removeFaceprintsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e9b7
- (void)addFaceprints:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e6ab
- (void)performCloudPullWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e596
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e47f
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e0e7
- (void)fetchAllFaceprintsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001dd97
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d879
- (void)fetchAllPersonFaceCropsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d379
- (void)fetchPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d0be
- (void)fetchAllPersonsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ce04
- (id)initWithHMPhotosPersonManager:(id)arg1;	// IMP=0x000000000001cd08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

