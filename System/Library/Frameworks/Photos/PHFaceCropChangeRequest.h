//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSData, NSManagedObjectID, NSString, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHFaceCropChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    NSString *_originatingFaceUUID;	// 16 = 0x10
    NSString *_originatingFaceCropUUID;	// 24 = 0x18
    PHRelationshipChangeRequestHelper *_faceHelper;	// 32 = 0x20
    PHRelationshipChangeRequestHelper *_personHelper;	// 40 = 0x28
}

+ (void)deleteFaceCrops:(id)arg1;	// IMP=0x00000000000b03af
+ (id)creationRequestsForFaceCropsWithOriginatingFace:(id)arg1 resourceData:(id)arg2;	// IMP=0x00000000000b0044
+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 person:(id)arg3;	// IMP=0x00000000000affa5
+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 personLocalIdentifier:(id)arg3;	// IMP=0x00000000000afe84
+ (id)creationRequestForFaceCropCopyFromFaceCrop:(id)arg1 withType:(short)arg2 onPerson:(id)arg3;	// IMP=0x00000000000afd4d
+ (id)changeRequestForFaceCrop:(id)arg1;	// IMP=0x00000000000afd34
- (void).cxx_destruct;	// IMP=0x00000000000afc39
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *personHelper; // @synthesize personHelper=_personHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *faceHelper; // @synthesize faceHelper=_faceHelper;
@property(copy, nonatomic) NSString *originatingFaceCropUUID; // @synthesize originatingFaceCropUUID=_originatingFaceCropUUID;
@property(copy, nonatomic) NSString *originatingFaceUUID; // @synthesize originatingFaceUUID=_originatingFaceUUID;
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000af849
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000aecca
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000aebc0
@property(readonly, nonatomic) NSString *managedEntityName;
- (void)encodeToXPCDict:(id)arg1;	// IMP=0x00000000000aea85
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;	// IMP=0x00000000000ae8dd
@property(nonatomic) short type;
@property(nonatomic) short state;
@property(retain, nonatomic) NSData *resourceData;
- (void)setFace:(id)arg1;	// IMP=0x00000000000ae253
- (id)_mutablePersonObjectIDsAndUUIDs;	// IMP=0x00000000000ae21d
- (id)_mutableFaceObjectIDsAndUUIDs;	// IMP=0x00000000000ae1e7
- (void)_preparePersonHelperIfNeeded;	// IMP=0x00000000000ae0e1
- (void)_prepareFaceHelperIfNeeded;	// IMP=0x00000000000adfdb
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedFaceCrop;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;	// IMP=0x00000000000ade47
- (id)initForNewObject;	// IMP=0x00000000000add5b

// Remaining properties
@property(readonly, nonatomic) long long accessScopeOptionsRequirement;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isNewRequest;
@property(readonly, getter=isMutated) _Bool mutated;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(nonatomic) _Bool shouldPerformConcurrentWork;
@property(readonly) Class superclass;

@end

