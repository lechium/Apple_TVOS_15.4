//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _UIMirrorNinePatchView
{
    UIImage *_originalImage;	// 8 = 0x8
    struct UIEdgeInsets _insets;	// 16 = 0x10
    UIImageView *_imageViews[4];	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000001095b85
- (void)_updateResizableImageAndViews;	// IMP=0x0000000001095a5c
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000001095a4a
- (void)layoutSubviews;	// IMP=0x0000000001095853
- (void)setImage:(id)arg1 withResizableCornerSize:(struct CGSize)arg2;	// IMP=0x00000000010957af
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000109564c

@end

