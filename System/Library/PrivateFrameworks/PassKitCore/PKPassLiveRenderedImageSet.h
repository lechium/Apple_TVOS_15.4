//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKImage;

@interface PKPassLiveRenderedImageSet
{
    PKImage *_diffuseMaterialPropertyImage;	// 24 = 0x18
    PKImage *_ambientMaterialPropertyImage;	// 32 = 0x20
    PKImage *_specularMaterialPropertyImage;	// 40 = 0x28
    PKImage *_normalMaterialPropertyImage;	// 48 = 0x30
    PKImage *_reflectiveMaterialPropertyImage;	// 56 = 0x38
    PKImage *_emissionMaterialPropertyImage;	// 64 = 0x40
    PKImage *_transparentMaterialPropertyImage;	// 72 = 0x48
    PKImage *_multiplyMaterialPropertyImage;	// 80 = 0x50
    PKImage *_displacementMaterialPropertyImage;	// 88 = 0x58
    PKImage *_ambientOcclusionMaterialPropertyImage;	// 96 = 0x60
    PKImage *_selfIlluminationMaterialPropertyImage;	// 104 = 0x68
    PKImage *_metalnessMaterialPropertyImage;	// 112 = 0x70
    PKImage *_roughnessMaterialPropertyImage;	// 120 = 0x78
    PKImage *_overlayMaterialPropertyImage;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000038caa8
+ (unsigned int)currentVersion;	// IMP=0x000000000038c988
+ (id)archiveName;	// IMP=0x000000000038c97b
+ (_Bool)shouldCache;	// IMP=0x000000000038c973
+ (long long)imageSetType;	// IMP=0x000000000038c968
- (void).cxx_destruct;	// IMP=0x000000000038d81c
@property(retain, nonatomic) PKImage *overlayMaterialPropertyImage; // @synthesize overlayMaterialPropertyImage=_overlayMaterialPropertyImage;
@property(retain, nonatomic) PKImage *roughnessMaterialPropertyImage; // @synthesize roughnessMaterialPropertyImage=_roughnessMaterialPropertyImage;
@property(retain, nonatomic) PKImage *metalnessMaterialPropertyImage; // @synthesize metalnessMaterialPropertyImage=_metalnessMaterialPropertyImage;
@property(retain, nonatomic) PKImage *selfIlluminationMaterialPropertyImage; // @synthesize selfIlluminationMaterialPropertyImage=_selfIlluminationMaterialPropertyImage;
@property(retain, nonatomic) PKImage *ambientOcclusionMaterialPropertyImage; // @synthesize ambientOcclusionMaterialPropertyImage=_ambientOcclusionMaterialPropertyImage;
@property(retain, nonatomic) PKImage *displacementMaterialPropertyImage; // @synthesize displacementMaterialPropertyImage=_displacementMaterialPropertyImage;
@property(retain, nonatomic) PKImage *multiplyMaterialPropertyImage; // @synthesize multiplyMaterialPropertyImage=_multiplyMaterialPropertyImage;
@property(retain, nonatomic) PKImage *transparentMaterialPropertyImage; // @synthesize transparentMaterialPropertyImage=_transparentMaterialPropertyImage;
@property(retain, nonatomic) PKImage *emissionMaterialPropertyImage; // @synthesize emissionMaterialPropertyImage=_emissionMaterialPropertyImage;
@property(retain, nonatomic) PKImage *reflectiveMaterialPropertyImage; // @synthesize reflectiveMaterialPropertyImage=_reflectiveMaterialPropertyImage;
@property(retain, nonatomic) PKImage *normalMaterialPropertyImage; // @synthesize normalMaterialPropertyImage=_normalMaterialPropertyImage;
@property(retain, nonatomic) PKImage *specularMaterialPropertyImage; // @synthesize specularMaterialPropertyImage=_specularMaterialPropertyImage;
@property(retain, nonatomic) PKImage *ambientMaterialPropertyImage; // @synthesize ambientMaterialPropertyImage=_ambientMaterialPropertyImage;
@property(retain, nonatomic) PKImage *diffuseMaterialPropertyImage; // @synthesize diffuseMaterialPropertyImage=_diffuseMaterialPropertyImage;
- (unsigned long long)hash;	// IMP=0x000000000038d2ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000038d0a2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000038ce87
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000038cab0
- (void)preheatImages;	// IMP=0x000000000038c993
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;	// IMP=0x000000000038c3fd

@end

