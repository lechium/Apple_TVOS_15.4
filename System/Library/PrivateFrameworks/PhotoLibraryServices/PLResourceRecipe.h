//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@interface PLResourceRecipe : NSObject <NSCopying>
{
}

+ (id)recipeFromID:(unsigned int)arg1;	// IMP=0x0000000000339178
+ (Class)classFromRecipeID:(unsigned int)arg1;	// IMP=0x00000000003390b9
- (void)populateAdjustedRecipeIngredients:(id)arg1 asset:(id)arg2 version:(unsigned int)arg3;	// IMP=0x0000000000338987
- (id)recipeErrorWithCode:(long long)arg1 version:(unsigned int)arg2 underlyingError:(id)arg3 debugDescription:(id)arg4;	// IMP=0x00000000003387cf
- (unsigned short)recipeClassID;	// IMP=0x00000000003387b9
- (_Bool)isDerivative;	// IMP=0x00000000003387a4
- (_Bool)isMarkedFullSize;	// IMP=0x000000000033879c
- (id)maxPixelCountForAssetWidth:(long long)arg1 height:(long long)arg2;	// IMP=0x0000000000338794
- (id)expectedFileURLForVersion:(unsigned int)arg1 asset:(id)arg2;	// IMP=0x000000000033878c
- (id)supportedVersionsForLocalResourceGeneration;	// IMP=0x000000000033877f
- (_Bool)colorSpaceIsNativeForDisplay;	// IMP=0x0000000000338777
- (id)uti;	// IMP=0x000000000033876f
- (id)expectedSizeFromWidth:(long long)arg1 height:(long long)arg2;	// IMP=0x0000000000338767
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 conversionServiceOptions:(id)arg5 deferredPhotoFinalizer:(id)arg6 progress:(id *)arg7 reason:(id)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x0000000000338707
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;	// IMP=0x00000000003386a4
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;	// IMP=0x0000000000338641
- (id)codecFourCharCodeName;	// IMP=0x00000000003385de
- (unsigned int)recipeID;	// IMP=0x000000000033857b
- (id)initWithRecipeID:(unsigned int)arg1;	// IMP=0x000000000033850c
- (unsigned long long)hash;	// IMP=0x00000000003384f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033844e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000338443

@end

