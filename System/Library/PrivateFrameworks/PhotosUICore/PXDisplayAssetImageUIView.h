//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, UIImageView;

@interface PXDisplayAssetImageUIView <PXChangeObserver>
{
    UIImageView *_imageView;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000002c8873
- (void)_updateImageViewFilters;	// IMP=0x00000000002c867a
- (void)isDisplayingFullQualityContentDidChange;	// IMP=0x00000000002c8639
- (_Bool)isDisplayingFullQualityContent;	// IMP=0x00000000002c85f5
- (void)contentsRectDidChange;	// IMP=0x00000000002c8557
- (void)placeholderImageFiltersDidChange;	// IMP=0x00000000002c8516
- (double)loadingProgress;	// IMP=0x00000000002c8504
- (void)imageProgressDidChange;	// IMP=0x00000000002c84c3
- (void)imageDidChange;	// IMP=0x00000000002c8319
- (id)contentView;	// IMP=0x00000000002c8297
- (long long)playbackStyle;	// IMP=0x00000000002c828c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

