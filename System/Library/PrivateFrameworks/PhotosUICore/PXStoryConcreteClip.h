//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryClip-Protocol.h>

@class NSString, PFStoryRecipeDisplayAssetNormalization, PXStoryResourcesDataSource;
@protocol PXStoryResource;

@interface PXStoryConcreteClip : NSObject <PXStoryClip>
{
    long long _identifier;	// 8 = 0x8
    id <PXStoryResource> _resource;	// 16 = 0x10
    long long _resourceKind;	// 24 = 0x18
    long long _resourceIndex;	// 32 = 0x20
    long long _resourceOccurrenceIndex;	// 40 = 0x28
    PXStoryResourcesDataSource *_resourcesDataSource;	// 48 = 0x30
    CDStruct_b5e02abd _info;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000007d348
@property(readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // @synthesize resourcesDataSource=_resourcesDataSource;
@property(readonly, nonatomic) long long resourceOccurrenceIndex; // @synthesize resourceOccurrenceIndex=_resourceOccurrenceIndex;
@property(readonly, nonatomic) long long resourceIndex; // @synthesize resourceIndex=_resourceIndex;
@property(readonly, nonatomic) long long resourceKind; // @synthesize resourceKind=_resourceKind;
@property(readonly, nonatomic) CDStruct_b5e02abd info; // @synthesize info=_info;
@property(readonly, nonatomic) id <PXStoryResource> resource; // @synthesize resource=_resource;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (id)copyWithInfo:(CDStruct_b5e02abd)arg1;	// IMP=0x000000000007d228
- (_Bool)isVisuallyEqualToClip:(id)arg1;	// IMP=0x000000000007cc4a
@property(readonly, nonatomic) unsigned long long hash;
- (_Bool)isEqualToClip:(id)arg1;	// IMP=0x000000000007caa7
@property(readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *colorNormalization;
- (CDStruct_e83c9415)playbackTimeRangeForClipDuration:(double)arg1;	// IMP=0x000000000007c609
- (CDStruct_e83c9415)_videoTimeRangeForTargetDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000007c095
@property(readonly, nonatomic) CDStruct_e83c9415 videoTimeRange;
- (id)videoHighlight;	// IMP=0x000000000007be52
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007be40
@property(readonly, copy) NSString *description;
- (id)initWithInfo:(CDStruct_b5e02abd)arg1 resourceKind:(long long)arg2 resourceIndex:(long long)arg3 resourceOccurrenceIndex:(long long)arg4 resourcesDataSource:(id)arg5;	// IMP=0x000000000007bb39
- (id)init;	// IMP=0x000000000007babf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
