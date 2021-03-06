//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PHAPhotoVisionPhotoKitBridge : NSObject
{
}

+ (void)assignPropertiesOfPVFace:(id)arg1 toPHFaceChangeRequest:(id)arg2;	// IMP=0x0000000000085e95
+ (unsigned short)phFaceGlassesTypeFromPVFace:(id)arg1;	// IMP=0x0000000000085dd3
+ (id)vnFaceAttributeGlassesToPHFaceGlassesTypeMap;	// IMP=0x0000000000085da3
+ (unsigned short)phFaceBaldTypeFromPVFace:(id)arg1;	// IMP=0x0000000000085ce1
+ (id)vnFaceAttributeBaldToPHFaceBaldTypeMap;	// IMP=0x0000000000085cb1
+ (unsigned short)phFaceHairColorTypeFromPVFace:(id)arg1;	// IMP=0x0000000000085bef
+ (id)vnFaceAttributeHairColorToPHFaceHairColorTypeMap;	// IMP=0x0000000000085bbf
+ (unsigned short)phFaceFacialHairTypeFromPVFace:(id)arg1;	// IMP=0x0000000000085afd
+ (id)vnFaceAttributeFacialHairToPHFacialHairTypeMap;	// IMP=0x0000000000085acd
+ (unsigned short)phFaceSmileTypeFromPVFace:(id)arg1;	// IMP=0x0000000000085a0b
+ (id)vnFaceAttributeSmileToPHFaceSmileTypeMap;	// IMP=0x00000000000859db
+ (unsigned short)phFaceEyesStateFromPVFace:(id)arg1;	// IMP=0x0000000000085919
+ (id)vnFaceAttributeEyesToPHEyesStateMap;	// IMP=0x00000000000858e9
+ (unsigned short)phFaceSexFromPVFace:(id)arg1;	// IMP=0x0000000000085827
+ (id)vnFaceAttributeSexToPHFaceSexTypeMap;	// IMP=0x00000000000857f7
+ (unsigned short)phFaceAgeTypeFromPVFace:(id)arg1;	// IMP=0x0000000000085735
+ (id)vnFaceAttributeAgeToPHFaceAgeTypeMap;	// IMP=0x0000000000085705
+ (id)pvFaceCropFromPHFaceCrop:(id)arg1;	// IMP=0x000000000008563c
+ (id)phFaceCropsFromPVFaceCrops:(id)arg1 withFetchOptions:(id)arg2;	// IMP=0x00000000000853ee
+ (id)phFaceCropFromPVFaceCrop:(id)arg1 withFetchOptions:(id)arg2;	// IMP=0x00000000000852d2
+ (id)phFaceprintFromPVFaceprint:(id)arg1;	// IMP=0x0000000000085235
+ (id)pvFaceprintFromPHFaceprint:(id)arg1;	// IMP=0x0000000000085196
+ (id)pvFacesArrayFromPHFetchResult:(id)arg1 copyPropertiesOption:(long long)arg2;	// IMP=0x0000000000084fb4
+ (id)pvFaceFromPHFace:(id)arg1 copyPropertiesOption:(long long)arg2;	// IMP=0x00000000000846bf
+ (id)phFacesFromPVFaces:(id)arg1 withFetchOptions:(id)arg2;	// IMP=0x000000000008441b
+ (id)phFaceFromPVFace:(id)arg1 withFetchOptions:(id)arg2;	// IMP=0x00000000000842e7
+ (id)newVerifiedPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000084255
+ (id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000084203
+ (id)newVerifiedPersonsFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000084174
+ (id)newAllPersonsFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000084128
+ (id)newVisibleFacesFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x00000000000840eb
+ (id)newAllFacesFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x00000000000840ab
+ (id)newAssetFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000083ff5

@end

