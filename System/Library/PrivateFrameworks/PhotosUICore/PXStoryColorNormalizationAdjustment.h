//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGDisplayAssetAdjustment-Protocol.h>

@class NSData, NSString, PFStoryRecipeDisplayAssetNormalization, PIColorNormalizationFilter;

@interface PXStoryColorNormalizationAdjustment : NSObject <PXGDisplayAssetAdjustment>
{
    NSData *_colorCubeData;	// 8 = 0x8
    _Bool _useFalseColor;	// 16 = 0x10
    _Bool _useColorCube;	// 17 = 0x11
    double _intensity;	// 24 = 0x18
    PIColorNormalizationFilter *_filter;	// 32 = 0x20
}

+ (id)colorCubeForNormalization:(id)arg1 targetColorSpace:(struct CGColorSpace *)arg2;	// IMP=0x00000000001a869c
+ (id)_falseColorMatrixParameters;	// IMP=0x00000000001a8512
+ (id)autoAdjustmentForAsset:(id)arg1;	// IMP=0x00000000001a8492
+ (id)dummyNormalization;	// IMP=0x00000000001a8479
+ (id)dummyAdjustment;	// IMP=0x00000000001a8460
- (void).cxx_destruct;	// IMP=0x00000000001a8193
@property(readonly, nonatomic) PIColorNormalizationFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
@property(nonatomic) _Bool useColorCube; // @synthesize useColorCube=_useColorCube;
@property(nonatomic) _Bool useFalseColor; // @synthesize useFalseColor=_useFalseColor;
@property(readonly, nonatomic) NSString *adjustmentDetails;
@property(readonly, nonatomic) NSString *adjustmentSummary;
- (long long)contentModeForProposedContentMode:(long long)arg1;	// IMP=0x00000000001a80e7
- (struct CGSize)requestSizeForProposedTargetSize:(struct CGSize)arg1;	// IMP=0x00000000001a80e1
- (id)applyToImage:(id)arg1 targetSize:(struct CGSize)arg2;	// IMP=0x00000000001a7c47
@property(readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *normalization;
@property(readonly, nonatomic) _Bool wantsSingleHighQualityDelivery;
@property(readonly, nonatomic) _Bool allowsUnadjustedOpportunisticDelivery;
- (_Bool)isEqualToDisplayAssetAdjustment:(id)arg1;	// IMP=0x00000000001a7b43
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a7b31
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a7b26
@property(readonly) unsigned long long hash;
- (id)initWithNormalizationFilter:(id)arg1;	// IMP=0x00000000001a79ae
- (id)initWithNormalization:(id)arg1;	// IMP=0x00000000001a78c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

