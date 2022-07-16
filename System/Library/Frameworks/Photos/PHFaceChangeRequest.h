//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSManagedObjectID, NSMutableArray, NSString, PHFaceprint, PHObjectPlaceholder;

@interface PHFaceChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    PHFaceprint *_faceprint;	// 16 = 0x10
    _Bool _didSetFaceprint;	// 24 = 0x18
    NSMutableArray *_detectionTraits;	// 32 = 0x20
    _Bool _didSetDetectionTraits;	// 40 = 0x28
    _Bool _shouldClearFaceCropGenerationState;	// 41 = 0x29
}

+ (void)deleteFaces:(id)arg1;	// IMP=0x000000000010bbcb
+ (id)changeRequestForFace:(id)arg1;	// IMP=0x000000000010bb96
+ (id)creationRequestForFace;	// IMP=0x000000000010bb6d
- (void).cxx_destruct;	// IMP=0x000000000010bb3c
@property(nonatomic) _Bool shouldClearFaceCropGenerationState; // @synthesize shouldClearFaceCropGenerationState=_shouldClearFaceCropGenerationState;
- (void)setDetectionTraits:(id)arg1;	// IMP=0x000000000010ba77
@property(retain, nonatomic) PHFaceprint *faceprint;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010b885
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010b23e
@property(readonly, nonatomic) NSString *managedEntityName;
@property(copy, nonatomic) id adjustmentVersion;
@property(retain, nonatomic) NSString *groupingIdentifier;
@property(nonatomic) double gazeCenterY;
@property(nonatomic) double gazeCenterX;
@property(nonatomic) unsigned short gazeType;
@property(nonatomic) _Bool hasFaceMask;
@property(nonatomic) unsigned short ethnicityType;
@property(nonatomic) unsigned short skintoneType;
@property(nonatomic) unsigned short poseType;
@property(nonatomic) unsigned short hairType;
@property(nonatomic) unsigned short headgearType;
@property(nonatomic) unsigned short faceExpressionType;
@property(nonatomic) unsigned short lipMakeupType;
@property(nonatomic) unsigned short eyeMakeupType;
@property(nonatomic) unsigned short glassesType;
@property(nonatomic) unsigned short hairColorType;
@property(nonatomic) unsigned short facialHairType;
@property(nonatomic) unsigned short smileType;
@property(nonatomic) unsigned short eyesState;
@property(nonatomic) unsigned short sexType;
@property(nonatomic) unsigned short ageType;
@property(nonatomic) double quality;
@property(nonatomic) long long qualityMeasure;
@property(nonatomic) long long clusterSequenceNumber;
@property(nonatomic) long long faceAlgorithmVersion;
@property(nonatomic) double poseYaw;
@property(nonatomic) long long nameSource;
@property(nonatomic, getter=isRightEyeClosed) _Bool rightEyeClosed;
@property(nonatomic, getter=isLeftEyeClosed) _Bool leftEyeClosed;
@property(nonatomic) double blurScore;
@property(nonatomic) _Bool hasSmile;
@property(nonatomic) _Bool manual;
@property(nonatomic, getter=isInTrash) _Bool inTrash;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(nonatomic) _Bool isInVIPModel;
@property(nonatomic) double yaw;
@property(nonatomic) double roll;
@property(nonatomic) double mouthY;
@property(nonatomic) double mouthX;
@property(nonatomic) double rightEyeY;
@property(nonatomic) double rightEyeX;
@property(nonatomic) double leftEyeY;
@property(nonatomic) double leftEyeX;
@property(nonatomic) long long sourceHeight;
@property(nonatomic) long long sourceWidth;
@property(nonatomic) short detectionType;
@property(nonatomic) double bodyHeight;
@property(nonatomic) double bodyWidth;
@property(nonatomic) double bodyCenterY;
@property(nonatomic) double bodyCenterX;
@property(nonatomic) double centerY;
@property(nonatomic) double centerX;
@property(nonatomic) double size;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedFace;
- (void)encodeToXPCDict:(id)arg1;	// IMP=0x0000000000105bb3
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;	// IMP=0x0000000000105760
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;	// IMP=0x0000000000105694
- (id)initForNewObject;	// IMP=0x0000000000105605

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

