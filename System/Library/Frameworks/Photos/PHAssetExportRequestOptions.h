//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PHAssetExportRequestOptions : NSObject
{
    _Bool _includeAllAssetResources;	// 8 = 0x8
    _Bool _treatLivePhotoAsStill;	// 9 = 0x9
    _Bool _flattenSlomoVideos;	// 10 = 0xa
    _Bool _dontAllowRAW;	// 11 = 0xb
    _Bool _shouldStripLocation;	// 12 = 0xc
    _Bool _shouldStripCaption;	// 13 = 0xd
    _Bool _shouldStripAccessibilityDescription;	// 14 = 0xe
    _Bool _disableMetadataCorrections;	// 15 = 0xf
    _Bool _shouldBundleComplexAssetResources;	// 16 = 0x10
    _Bool _forceDateTimeMetadataBaking;	// 17 = 0x11
    _Bool _forceLocationMetadataBaking;	// 18 = 0x12
    _Bool _forceCaptionMetadataBaking;	// 19 = 0x13
    _Bool _forceAccessibilityDescriptionMetadataBaking;	// 20 = 0x14
    long long _variant;	// 24 = 0x18
    NSString *_videoExportPreset;	// 32 = 0x20
    NSString *_videoExportFileType;	// 40 = 0x28
    NSString *_customFilenameBase;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_resultHandlerQueue;	// 56 = 0x38
    long long _locationComparisonStrategy;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000001b506
@property(nonatomic) _Bool forceAccessibilityDescriptionMetadataBaking; // @synthesize forceAccessibilityDescriptionMetadataBaking=_forceAccessibilityDescriptionMetadataBaking;
@property(nonatomic) _Bool forceCaptionMetadataBaking; // @synthesize forceCaptionMetadataBaking=_forceCaptionMetadataBaking;
@property(nonatomic) _Bool forceLocationMetadataBaking; // @synthesize forceLocationMetadataBaking=_forceLocationMetadataBaking;
@property(nonatomic) _Bool forceDateTimeMetadataBaking; // @synthesize forceDateTimeMetadataBaking=_forceDateTimeMetadataBaking;
@property(nonatomic) long long locationComparisonStrategy; // @synthesize locationComparisonStrategy=_locationComparisonStrategy;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue; // @synthesize resultHandlerQueue=_resultHandlerQueue;
@property(copy, nonatomic) NSString *customFilenameBase; // @synthesize customFilenameBase=_customFilenameBase;
@property(nonatomic) _Bool shouldBundleComplexAssetResources; // @synthesize shouldBundleComplexAssetResources=_shouldBundleComplexAssetResources;
@property(nonatomic) _Bool disableMetadataCorrections; // @synthesize disableMetadataCorrections=_disableMetadataCorrections;
@property(copy, nonatomic) NSString *videoExportFileType; // @synthesize videoExportFileType=_videoExportFileType;
@property(copy, nonatomic) NSString *videoExportPreset; // @synthesize videoExportPreset=_videoExportPreset;
@property(nonatomic) _Bool shouldStripAccessibilityDescription; // @synthesize shouldStripAccessibilityDescription=_shouldStripAccessibilityDescription;
@property(nonatomic) _Bool shouldStripCaption; // @synthesize shouldStripCaption=_shouldStripCaption;
@property(nonatomic) _Bool shouldStripLocation; // @synthesize shouldStripLocation=_shouldStripLocation;
@property(nonatomic) _Bool dontAllowRAW; // @synthesize dontAllowRAW=_dontAllowRAW;
@property(nonatomic) _Bool flattenSlomoVideos; // @synthesize flattenSlomoVideos=_flattenSlomoVideos;
@property(nonatomic) _Bool treatLivePhotoAsStill; // @synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill;
@property(nonatomic) long long variant; // @synthesize variant=_variant;
@property(nonatomic) _Bool includeAllAssetResources; // @synthesize includeAllAssetResources=_includeAllAssetResources;
- (id)description;	// IMP=0x000000000001b2a0

@end

