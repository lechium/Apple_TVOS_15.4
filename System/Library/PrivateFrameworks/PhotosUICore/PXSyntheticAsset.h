//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSSecureCoding-Protocol.h>
#import <PhotosUICore/PXDisplayAsset-Protocol.h>
#import <PhotosUICore/PXLayoutItemInput-Protocol.h>
#import <PhotosUICore/PXMutableSyntheticAsset-Protocol.h>
#import <PhotosUICore/PXStoryDisplayAssetResource-Protocol.h>

@class NSData, NSDate, NSNumber, NSSet, NSString, PFVideoAdjustments, UIColor;
@protocol PXDisplayAsset;

@interface PXSyntheticAsset : NSObject <PXStoryDisplayAssetResource, PXMutableSyntheticAsset, PXDisplayAsset, NSSecureCoding, PXLayoutItemInput>
{
    NSString *_uuid;	// 8 = 0x8
    long long _playbackStyle;	// 16 = 0x10
    NSString *_label;	// 24 = 0x18
    UIColor *_tintColor;	// 32 = 0x20
    unsigned long long _mediaSubtypes;	// 40 = 0x28
    NSDate *_creationDate;	// 48 = 0x30
    NSSet *_sceneClassifications;	// 56 = 0x38
    double _curationScore;	// 64 = 0x40
    long long _faceCount;	// 72 = 0x48
    unsigned long long _hash;	// 80 = 0x50
    struct CGSize _size;	// 88 = 0x58
    struct CGRect _preferredCropRect;	// 104 = 0x68
    struct CGRect _acceptableCropRect;	// 136 = 0x88
    struct CGRect _bestPlaybackRect;	// 168 = 0xa8
    struct CGRect _faceAreaRect;	// 200 = 0xc8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000056e83d
+ (id)syntheticAssetWithSerializableDescription:(id)arg1;	// IMP=0x000000000056e711
- (void).cxx_destruct;	// IMP=0x000000000056e6c2
@property(readonly, nonatomic) struct CGRect faceAreaRect; // @synthesize faceAreaRect=_faceAreaRect;
@property(readonly, nonatomic) struct CGRect bestPlaybackRect; // @synthesize bestPlaybackRect=_bestPlaybackRect;
@property(readonly, nonatomic) struct CGRect preferredCropRect; // @synthesize preferredCropRect=_preferredCropRect;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly) unsigned long long hash; // @synthesize hash=_hash;
@property(readonly, nonatomic) long long faceCount; // @synthesize faceCount=_faceCount;
@property(readonly, nonatomic) double curationScore; // @synthesize curationScore=_curationScore;
@property(readonly, copy, nonatomic) NSSet *sceneClassifications; // @synthesize sceneClassifications=_sceneClassifications;
@property(readonly, copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (id)vcp_fingerprint:(id)arg1;	// IMP=0x000000000056e605
- (id)localIdentifier;	// IMP=0x000000000056e5f7
- (_Bool)hasAdjustments;	// IMP=0x000000000056e5ef
- (id)photoLibrary;	// IMP=0x000000000056e5e7
- (double)weightUsingCriterion:(long long)arg1;	// IMP=0x000000000056e5d5
@property(readonly, nonatomic) struct CGRect acceptableCropRect; // @synthesize acceptableCropRect=_acceptableCropRect;
@property(readonly, nonatomic) struct CGPoint positionOffset;
@property(readonly, nonatomic) struct CGAffineTransform transform;
@property(readonly, nonatomic) double weight;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
- (struct CGRect)suggestedCropForTargetSize:(struct CGSize)arg1 withOcclusionRegion:(struct CGRect)arg2 andOutputCropScore:(double *)arg3;	// IMP=0x000000000056e4fd
- (struct CGRect)suggestedCropForTargetSize:(struct CGSize)arg1 withFocusRegion:(struct CGRect)arg2;	// IMP=0x000000000056e34f
- (struct CGRect)bestCropRectForAspectRatioV2:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;	// IMP=0x000000000056e1f4
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;	// IMP=0x000000000056e09f
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;	// IMP=0x000000000056e078
@property(readonly, nonatomic) CDStruct_1b6d18a9 livePhotoVideoDuration;
@property(readonly, nonatomic) double duration;
- (long long)isContentEqualTo:(id)arg1;	// IMP=0x000000000056e038
@property(readonly, nonatomic) Class defaultImageProviderClass;
@property(readonly, nonatomic) unsigned long long thumbnailIndex;
@property(readonly, nonatomic) _Bool isEligibleForAutoPlayback;
@property(readonly, nonatomic) _Bool isInCloud;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) unsigned long long mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
- (void)setMediaSubtypes:(unsigned long long)arg1;	// IMP=0x000000000056dfc3
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000056deec
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000056de0e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000056dba3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000056da4c
- (void)setFaceCount:(long long)arg1;	// IMP=0x000000000056da42
- (void)setCurationScore:(double)arg1;	// IMP=0x000000000056da37
- (void)setSceneClassifications:(id)arg1;	// IMP=0x000000000056da0a
@property(readonly, nonatomic) NSString *serializableDescription;
- (void)setTintColor:(id)arg1;	// IMP=0x000000000056d8f5
- (void)setLabel:(id)arg1;	// IMP=0x000000000056d8c8
- (void)setPlaybackStyle:(long long)arg1;	// IMP=0x000000000056d8be
- (struct CGRect)_cropRectFromCropAssetRect:(struct CGRect)arg1;	// IMP=0x000000000056d7f3
- (struct CGRect)_cropAssetRectFromCropRect:(struct CGRect)arg1;	// IMP=0x000000000056d726
- (void)setFaceAreaAssetRect:(struct CGRect)arg1;	// IMP=0x000000000056d6c6
- (void)setBestPlaybackAssetRect:(struct CGRect)arg1;	// IMP=0x000000000056d666
- (void)setAcceptableCropAssetRect:(struct CGRect)arg1;	// IMP=0x000000000056d606
- (void)setPreferredCropAssetRect:(struct CGRect)arg1;	// IMP=0x000000000056d5a6
@property(readonly, nonatomic) struct CGRect faceAreaAssetRect;
@property(readonly, nonatomic) struct CGRect bestPlaybackAssetRect;
@property(readonly, nonatomic) struct CGRect acceptableCropAssetRect;
@property(readonly, nonatomic) struct CGRect preferredCropAssetRect;
- (void)setFaceAreaRect:(struct CGRect)arg1;	// IMP=0x000000000056d42a
- (void)setBestPlaybackRect:(struct CGRect)arg1;	// IMP=0x000000000056d40e
- (void)setAcceptableCropRect:(struct CGRect)arg1;	// IMP=0x000000000056d3f2
- (void)setPreferredCropRect:(struct CGRect)arg1;	// IMP=0x000000000056d3dc
- (void)setSize:(struct CGSize)arg1;	// IMP=0x000000000056d3cc
- (id)initWithConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x000000000056d21d
- (id)init;	// IMP=0x000000000056d204
@property(readonly, nonatomic) long long px_storyResourceFetchFaceCount;
@property(readonly, nonatomic) double px_storyResourceFetchCurationScore;
@property(readonly, nonatomic) NSSet *px_storyResourceFetchSceneClassifications;
@property(readonly, nonatomic) PFVideoAdjustments *px_storyResourceFetchVideoAdjustments;
@property(readonly, nonatomic) NSData *px_storyResourceFetchNormalizationData;
@property(readonly, nonatomic) struct CGRect px_storyResourceFetchBestPlaybackRect;
@property(readonly, nonatomic) CDStruct_e83c9415 px_storyResourceFetchBestPlaybackRange;
@property(readonly, nonatomic) id <PXDisplayAsset> px_storyResourceDisplayAsset;
@property(readonly, nonatomic) long long px_storyResourceKind;
@property(readonly, nonatomic) NSString *px_storyResourceIdentifier;

// Remaining properties
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *fetchColorNormalizationData;
@property(readonly, nonatomic) NSNumber *hdrGain;
@property(readonly, nonatomic) NSDate *importDate;
@property(readonly, nonatomic) _Bool isAutoPlaybackEligibilityEstimated;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long thumbnailVersion;

@end
