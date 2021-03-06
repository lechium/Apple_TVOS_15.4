//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryClip-Protocol.h>

@class NSString, PFStoryRecipeDisplayAssetNormalization;
@protocol PXStoryClip, PXStoryResource;

@interface PXStoryTransitionClip : NSObject <PXStoryClip>
{
    id <PXStoryClip> _originalClip;	// 8 = 0x8
    CDStruct_b5e02abd _clipInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000022ef8e
@property(readonly, nonatomic) id <PXStoryClip> originalClip; // @synthesize originalClip=_originalClip;
@property(readonly, nonatomic) CDStruct_b5e02abd clipInfo; // @synthesize clipInfo=_clipInfo;
- (id)copyWithInfo:(CDStruct_b5e02abd)arg1;	// IMP=0x000000000022eee3
- (_Bool)isVisuallyEqualToClip:(id)arg1;	// IMP=0x000000000022edf6
- (_Bool)isEqualToClip:(id)arg1;	// IMP=0x000000000022ed24
- (CDStruct_e83c9415)playbackTimeRangeForClipDuration:(double)arg1;	// IMP=0x000000000022ecaf
@property(readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *colorNormalization;
@property(readonly, nonatomic) CDStruct_e83c9415 videoTimeRange;
@property(readonly, nonatomic) id <PXStoryResource> resource;
@property(readonly, nonatomic) CDStruct_b5e02abd info;
@property(readonly, nonatomic) long long identifier;
- (id)initWithClipInfo:(CDStruct_b5e02abd)arg1 originalClip:(id)arg2;	// IMP=0x000000000022eade

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long hash;
@property(readonly) Class superclass;

@end

