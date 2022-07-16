//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLCloudDeletable-Protocol.h>
#import <PhotoLibraryServices/PLSyncableObject-Protocol.h>

@class NSData, NSString, PLDetectedFace, PLManagedAsset, PLPerson;

@interface PLFaceCrop <PLSyncableObject, PLCloudDeletable>
{
    _Bool _needsPersistenceUpdate;	// 8 = 0x8
}

+ (void)resetCloudStateInPhotoLibrary:(id)arg1;	// IMP=0x000000000042c4ba
+ (id)insertOrUpdateWithCPLFaceCrop:(id)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x000000000042bd2b
+ (short)_localTypeFromCloudType:(long long)arg1;	// IMP=0x000000000042bcf0
+ (long long)_cloudTypeToPushFromLocalType:(short)arg1 cachedCloudType:(unsigned short)arg2;	// IMP=0x000000000042bc86
+ (id)listOfSyncedProperties;	// IMP=0x000000000042bc30
+ (int)_nameSourceForFaceFromFaceCrop:(id)arg1;	// IMP=0x000000000042bc01
+ (int)_trainingFaceTypeForFaceFromFaceCrop:(id)arg1;	// IMP=0x000000000042bbdc
+ (id)batchFetchFaceCropByFaceObjectIDWithFaceObjectIDs:(id)arg1 library:(id)arg2;	// IMP=0x000000000042ba18
+ (id)faceCropsToUploadInPhotoLibrary:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x000000000042b955
+ (id)faceCropsWithUUIDs:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x000000000042b8b8
+ (id)faceCropsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x000000000042b82f
+ (id)allFaceCropsInPhotoLibrary:(id)arg1;	// IMP=0x000000000042b7c9
+ (id)_faceCropsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3;	// IMP=0x000000000042b5e6
+ (id)cloudUUIDKeyForDeletion;	// IMP=0x000000000042b5d9
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;	// IMP=0x000000000042b5ce
+ (id)entityName;	// IMP=0x000000000042b5c1
+ (id)insertIntoManagedObjectContext:(id)arg1 withUUID:(id)arg2 resourceData:(id)arg3 type:(short)arg4;	// IMP=0x000000000042b45f
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 resourceData:(id)arg3 type:(short)arg4;	// IMP=0x000000000042b324
@property(nonatomic) _Bool needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
@property(readonly, copy) NSString *debugDescription;
- (id)cplFaceCropChange;	// IMP=0x000000000042af81
@property(readonly, retain, nonatomic) id localID;
- (id)momentShare;	// IMP=0x000000000042af67
- (id)cplFullRecord;	// IMP=0x000000000042af55
- (_Bool)isSyncableChange;	// IMP=0x000000000042adb7
- (_Bool)supportsCloudUpload;	// IMP=0x000000000042ab07
- (void)applyPropertiesToTrainingFace;	// IMP=0x000000000042a9ed
@property(readonly, copy) NSString *cloudUUIDForDeletion;
@property(readonly) long long cloudDeletionType;
- (void)prepareForDeletion;	// IMP=0x000000000042a935
- (void)willSave;	// IMP=0x000000000042a541

// Remaining properties
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(nonatomic) short cloudDeleteState; // @dynamic cloudDeleteState;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(nonatomic) unsigned short cloudType; // @dynamic cloudType;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) PLDetectedFace *face; // @dynamic face;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *invalidMergeCandidatePersonUUID; // @dynamic invalidMergeCandidatePersonUUID;
@property(retain, nonatomic) PLPerson *person; // @dynamic person;
@property(retain, nonatomic) NSData *resourceData; // @dynamic resourceData;
@property(nonatomic) short state; // @dynamic state;
@property(readonly) Class superclass;
@property(nonatomic) short type; // @dynamic type;
@property(copy, nonatomic) NSString *uuid; // @dynamic uuid;

@end

