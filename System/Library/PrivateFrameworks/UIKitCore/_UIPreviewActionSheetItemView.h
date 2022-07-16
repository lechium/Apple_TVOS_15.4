//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UILabel, UIPreviewAction;

__attribute__((visibility("hidden")))
@interface _UIPreviewActionSheetItemView
{
    _Bool _selected;	// 8 = 0x8
    UIPreviewAction *_action;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000a951ac
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) UIPreviewAction *action; // @synthesize action=_action;
- (void)_contentSizeChanged:(id)arg1;	// IMP=0x0000000000a9510f
- (void)_updateConstraints;	// IMP=0x0000000000a94ab9
- (void)_updateImageFromAction;	// IMP=0x0000000000a9497f
- (void)_updateTitleFromAction;	// IMP=0x0000000000a9485d
- (void)_updateLabelFont;	// IMP=0x0000000000a946a4
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000a94518
- (void)dealloc;	// IMP=0x0000000000a94424
- (id)initWithFrame:(struct CGRect)arg1 action:(id)arg2;	// IMP=0x0000000000a94216
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a941e7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000a941d3

@end

