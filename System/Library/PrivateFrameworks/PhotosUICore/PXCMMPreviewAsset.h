//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayAsset-Protocol.h>

@class NSData, NSDate, NSNumber, NSString, PHAsset, PHMomentShare, UIImage;

@interface PXCMMPreviewAsset : NSObject <PXDisplayAsset>
{
    UIImage *_cachedImage;	// 8 = 0x8
    PHMomentShare *_momentShare;	// 16 = 0x10
    PHAsset *_underlyingAsset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005c8182
@property(readonly, nonatomic) PHAsset *underlyingAsset; // @synthesize underlyingAsset=_underlyingAsset;
@property(readonly, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;	// IMP=0x00000000005c7ef6
@property(readonly, nonatomic) double aspectRatio;
- (struct CGSize)size;	// IMP=0x00000000005c7dfd
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;	// IMP=0x00000000005c7dd6
@property(readonly, nonatomic) UIImage *previewImage;
@property(readonly, nonatomic) NSData *previewImageData;
@property(readonly, nonatomic) _Bool isPreviewImageDataAvailable;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005c7b9e
- (long long)isContentEqualTo:(id)arg1;	// IMP=0x00000000005c7ab7
@property(readonly, nonatomic) Class defaultImageProviderClass;
@property(readonly, nonatomic) unsigned long long thumbnailIndex;
@property(readonly, nonatomic) struct CGRect faceAreaRect;
@property(readonly, nonatomic) struct CGRect acceptableCropRect;
@property(readonly, nonatomic) struct CGRect preferredCropRect;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) _Bool isEligibleForAutoPlayback;
@property(readonly, nonatomic) _Bool isInCloud;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
- (id)init;	// IMP=0x00000000005c78fe
- (id)initWithMomentShare:(id)arg1 underlyingAsset:(id)arg2;	// IMP=0x00000000005c7865

// Remaining properties
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSData *fetchColorNormalizationData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *hdrGain;
@property(readonly, nonatomic) NSDate *importDate;
@property(readonly, nonatomic) _Bool isAutoPlaybackEligibilityEstimated;
@property(readonly, nonatomic) CDStruct_1b6d18a9 livePhotoVideoDuration;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long thumbnailVersion;
@property(readonly, nonatomic) NSString *uuid;

@end

