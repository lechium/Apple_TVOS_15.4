//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PFStoryRecipeDisplayAssetNormalization;
@protocol PXStoryClip, PXStoryResource;

@protocol PXStoryClip <NSObject>
@property(readonly, nonatomic) unsigned long long hash;
@property(readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *colorNormalization;
@property(readonly, nonatomic) CDStruct_e83c9415 videoTimeRange;
@property(readonly, nonatomic) CDStruct_b5e02abd info;
@property(readonly, nonatomic) id <PXStoryResource> resource;
@property(readonly, nonatomic) long long identifier;
- (id <PXStoryClip>)copyWithInfo:(CDStruct_b5e02abd)arg1;
- (_Bool)isVisuallyEqualToClip:(id <PXStoryClip>)arg1;
- (_Bool)isEqualToClip:(id <PXStoryClip>)arg1;
- (CDStruct_e83c9415)playbackTimeRangeForClipDuration:(double)arg1;
@end

