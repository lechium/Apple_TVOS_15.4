//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PLPrimaryResourceDataStoreVideoRecipe
{
    unsigned int _recipeID;	// 8 = 0x8
}

@property(nonatomic) unsigned int recipeID; // @synthesize recipeID=_recipeID;
- (id)description;	// IMP=0x00000000004be0bc
- (void)generateAndStoreForAssetWithPriority:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 isHighPriority:(_Bool)arg5 reason:(id)arg6 progress:(id *)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000004be08f
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 conversionServiceOptions:(id)arg5 deferredPhotoFinalizer:(id)arg6 progress:(id *)arg7 reason:(id)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000000004be054
- (id)expectedFileURLForVersion:(unsigned int)arg1 asset:(id)arg2;	// IMP=0x00000000004bdfb6
- (void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)arg1 version:(unsigned int)arg2 conversionClient:(id)arg3 conversionServiceOptions:(id)arg4 isHighPriority:(_Bool)arg5 progress:(id *)arg6 reason:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000004bd034
- (id)_mediaConversionServiceOptionsForAsset:(id)arg1 conversionServiceOptions:(id)arg2 adjustmentData:(id)arg3 largeAdjustmentData:(id)arg4 isHighPriority:(_Bool)arg5 reason:(id)arg6;	// IMP=0x00000000004bc97f
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;	// IMP=0x00000000004bc840
- (_Bool)isMarkedFullSize;	// IMP=0x00000000004bc802
- (id)supportedVersionsForLocalResourceGeneration;	// IMP=0x00000000004bc7d4
- (id)uti;	// IMP=0x00000000004bc6ff
- (id)codecFourCharCodeName;	// IMP=0x00000000004bc687
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;	// IMP=0x00000000004bc67f
- (id)initWithRecipeID:(unsigned int)arg1;	// IMP=0x00000000004bc59c

@end
