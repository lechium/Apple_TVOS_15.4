//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI16CarouselViewCell
{
    MISSING_TYPE *overlayView;	// 8 = 0x8
    MISSING_TYPE *isOverlayViewMasked;	// 16 = 0x10
    MISSING_TYPE *cellImageView;	// 24 = 0x18
    MISSING_TYPE *cornerRadius;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_inlinePlaybackView;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_stackingPosterView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003e85e0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003e8570
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003e84b0
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x00000000003e8090
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000003e8020
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)vui_prepareForReuse;	// IMP=0x00000000003e7df0
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000003e7720
- (void)vui_setOverrideUserInterfaceStyle:(unsigned long long)arg1;	// IMP=0x00000000003e7400
@property(nonatomic, readonly) unsigned long long vuiOverrideUserInterfaceStyle;
@property(nonatomic, readonly) _Bool canBecomeFocused;

@end

