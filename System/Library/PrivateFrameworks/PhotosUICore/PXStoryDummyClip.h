//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryClip-Protocol.h>

@class NSString, PFStoryRecipeDisplayAssetNormalization;
@protocol PXStoryResource;

@interface PXStoryDummyClip : NSObject <PXStoryClip>
{
    long long _identifier;	// 8 = 0x8
    id <PXStoryResource> _resource;	// 16 = 0x10
    PFStoryRecipeDisplayAssetNormalization *_colorNormalization;	// 24 = 0x18
    NSString *_resourceIdentifier;	// 32 = 0x20
    long long _resourceOccurrenceIndex;	// 40 = 0x28
    CDStruct_e83c9415 _videoTimeRange;	// 48 = 0x30
    CDStruct_b5e02abd _info;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000086da1a
@property(readonly, nonatomic) long long resourceOccurrenceIndex; // @synthesize resourceOccurrenceIndex=_resourceOccurrenceIndex;
@property(readonly, nonatomic) NSString *resourceIdentifier; // @synthesize resourceIdentifier=_resourceIdentifier;
@property(readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *colorNormalization; // @synthesize colorNormalization=_colorNormalization;
@property(readonly, nonatomic) CDStruct_e83c9415 videoTimeRange; // @synthesize videoTimeRange=_videoTimeRange;
@property(readonly, nonatomic) CDStruct_b5e02abd info; // @synthesize info=_info;
@property(readonly, nonatomic) id <PXStoryResource> resource; // @synthesize resource=_resource;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (id)copyWithInfo:(CDStruct_b5e02abd)arg1;	// IMP=0x000000000086d913
- (CDStruct_e83c9415)playbackTimeRangeForClipDuration:(double)arg1;	// IMP=0x000000000086d8fc
- (_Bool)isVisuallyEqualToClip:(id)arg1;	// IMP=0x000000000086d318
@property(readonly, nonatomic) unsigned long long hash;
- (_Bool)isEqualToClip:(id)arg1;	// IMP=0x000000000086d1cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000086d1bd
- (id)initWithInfo:(CDStruct_b5e02abd)arg1 resource:(id)arg2 resourceOccurrenceIndex:(long long)arg3;	// IMP=0x000000000086d0e5
- (id)init;	// IMP=0x000000000086d06b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
