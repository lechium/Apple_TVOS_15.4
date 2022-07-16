//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class CKRecordID, HMDBackingStoreCacheGroup, HMDCloudCache, HMDCloudRecord, HMDCloudZone, NSMutableDictionary, NSString, NSUUID;

@interface HMDCloudGroup : HMFObject <HMFLogging>
{
    _Bool _doRecordsExistInCache;	// 8 = 0x8
    HMDCloudCache *_cache;	// 16 = 0x10
    HMDCloudZone *_cloudZone;	// 24 = 0x18
    NSUUID *_ownerID;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
    HMDBackingStoreCacheGroup *_backingStoreGroup;	// 48 = 0x30
    NSMutableDictionary *_objectIDToRecordNameMap;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x000000000043274c
+ (id)shortDescription;	// IMP=0x000000000043273a
+ (void)createGroupWithRootRecordName:(id)arg1 owner:(id)arg2 subscriptionName:(id)arg3 cloudZone:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000432554
- (void).cxx_destruct;	// IMP=0x0000000000430c7c
@property(readonly, nonatomic) NSMutableDictionary *objectIDToRecordNameMap; // @synthesize objectIDToRecordNameMap=_objectIDToRecordNameMap;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *backingStoreGroup; // @synthesize backingStoreGroup=_backingStoreGroup;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSUUID *ownerID; // @synthesize ownerID=_ownerID;
@property(nonatomic) __weak HMDCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(nonatomic) __weak HMDCloudCache *cache; // @synthesize cache=_cache;
- (void)deleteCloudRecord:(id)arg1;	// IMP=0x0000000000430b19
- (void)deleteCloudRecordNames:(id)arg1;	// IMP=0x00000000004307c4
- (void)updateCloudRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004303eb
- (void)updateCloudRecord:(id)arg1;	// IMP=0x000000000043004e
- (void)addCloudRecord:(id)arg1;	// IMP=0x000000000043003c
- (id)__cloudRecordWithObjectID:(id)arg1;	// IMP=0x000000000042fd7d
- (id)cloudRecordWithObjectID:(id)arg1;	// IMP=0x000000000042fa56
- (id)cloudRecordWithName:(id)arg1;	// IMP=0x000000000042f72f
@property(readonly) _Bool doRecordsExistInCache;
@property(readonly, nonatomic) HMDCloudRecord *rootRecord;
- (void)rootRecordCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000042f32f
- (void)allDescendentsCloudRecordsForParentID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000042f264
- (void)cloudRecordsForParentID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000042f19c
- (void)_cloudRecordsForParentIDs:(id)arg1 recursive:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000042ee1b
- (void)cloudRecordWithObjectID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000042ece8
- (void)cloudRecordWithObjectIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000042ea3d
- (void)cloudRecordWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000042e90a
- (void)cloudRecordWithNames:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000042e65f
- (void)fetchCloudRecordMap:(CDUnknownBlockType)arg1;	// IMP=0x000000000042e57f
- (_Bool)isRootRecord:(id)arg1;	// IMP=0x000000000042e508
- (_Bool)isRootRecordName:(id)arg1;	// IMP=0x000000000042e491
@property(readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
- (id)rootRecordModelObject;	// IMP=0x000000000042e323
@property(readonly, nonatomic) NSUUID *rootRecordObjectID;
@property(readonly, nonatomic) NSUUID *parentIdentifier;
@property(readonly, nonatomic) NSString *rootRecordName;
- (id)logIdentifier;	// IMP=0x000000000042df54
@property(readonly, copy) NSString *description;
- (id)shortDescription;	// IMP=0x000000000042de4d
- (id)initWithBackingStoreCacheGroup:(id)arg1 cloudZone:(id)arg2;	// IMP=0x000000000042dd75
- (id)init;	// IMP=0x000000000042dccd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
