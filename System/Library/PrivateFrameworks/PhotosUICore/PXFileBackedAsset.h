//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayAsset-Protocol.h>
#import <PhotosUICore/PXLayoutItemInput-Protocol.h>
#import <PhotosUICore/PXMetadataAsset-Protocol.h>

@class CLLocation, NSData, NSDate, NSNumber, NSString, NSURL, PXFileBackedAssetDescription, _PXFileBackedAssetMetadata;

@interface PXFileBackedAsset : NSObject <PXDisplayAsset, PXLayoutItemInput, PXMetadataAsset>
{
    _PXFileBackedAssetMetadata *_metadata;	// 8 = 0x8
    PXFileBackedAssetDescription *_description;	// 16 = 0x10
    NSString *_fileBackedUUID;	// 24 = 0x18
    NSURL *_url;	// 32 = 0x20
    NSString *_uniformTypeIdentifier;	// 40 = 0x28
}

+ (id)_globalCache;	// IMP=0x00000000004960af
+ (id)_locationFromImageProperties:(id)arg1;	// IMP=0x0000000000495e85
+ (id)_creationDateFromImageProperties:(id)arg1;	// IMP=0x0000000000495d0f
+ (id)_exifDateFormatter;	// IMP=0x0000000000495cdf
- (void).cxx_destruct;	// IMP=0x0000000000495c96
@property(readonly, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) _Bool isAnimatedImage;
@property(readonly, nonatomic) _Bool canPlayPhotoIris;
@property(readonly, nonatomic) _Bool canPlayLoopingVideo;
- (void)_loadFileMetadataIfNeeded;	// IMP=0x000000000049581c
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;	// IMP=0x00000000004956c9
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) struct CGPoint positionOffset;
@property(readonly, nonatomic) struct CGAffineTransform transform;
@property(readonly, nonatomic) struct CGRect faceAreaRect;
@property(readonly, nonatomic) struct CGRect acceptableCropRect;
@property(readonly, nonatomic) struct CGRect preferredCropRect;
@property(readonly, nonatomic) struct CGSize size;
- (double)weightUsingCriterion:(long long)arg1;	// IMP=0x0000000000495506
@property(readonly, nonatomic) double weight;
@property(readonly, nonatomic) NSString *uuid;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000495418
- (_Bool)isEqualToFileBackedAsset:(id)arg1;	// IMP=0x0000000000495387
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000049537c
- (long long)isContentEqualTo:(id)arg1;	// IMP=0x0000000000495371
@property(readonly, nonatomic) Class defaultImageProviderClass;
@property(readonly, nonatomic) unsigned long long thumbnailIndex;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) _Bool isEligibleForAutoPlayback;
@property(readonly, nonatomic) _Bool isInCloud;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, copy) NSString *description;
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000494efe
- (id)initWithDescription:(id)arg1;	// IMP=0x0000000000494dcf
- (id)init;	// IMP=0x0000000000494d55

// Remaining properties
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
@property(readonly, nonatomic) _Bool cloudIsDeletable;
@property(readonly, copy) NSString *debugDescription;
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

@end

