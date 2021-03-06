//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, _MKRightImageButton;

__attribute__((visibility("hidden")))
@interface MKPlaceInfoSuggestAnEditRowView
{
    _MKRightImageButton *_suggestAnEditButton;	// 8 = 0x8
    NSLayoutConstraint *_topToTitleVerticalConstraint;	// 16 = 0x10
    NSLayoutConstraint *_titleToBottomVerticalConstraint;	// 24 = 0x18
    CDUnknownBlockType _selectionBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000db66b
@property(copy, nonatomic) CDUnknownBlockType selectionBlock; // @synthesize selectionBlock=_selectionBlock;
- (void)_suggestAnEditButtonPressed;	// IMP=0x00000000000db5cd
- (void)_contentSizeDidChange;	// IMP=0x00000000000db59f
- (void)_updateConstraints;	// IMP=0x00000000000db495
- (void)_updateFonts;	// IMP=0x00000000000db3f0
- (void)_setupSubviews;	// IMP=0x00000000000daebb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000dade7

@end

