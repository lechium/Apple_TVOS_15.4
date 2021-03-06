//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UICollectionViewListCell.h>

@class UIView, UIVisualEffectView;

@interface UIActivityActionCell : _UICollectionViewListCell
{
    _Bool _disabled;	// 8 = 0x8
    UIVisualEffectView *_effectView;	// 16 = 0x10
    UIView *_fillView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000245a4
@property(retain, nonatomic) UIView *fillView; // @synthesize fillView=_fillView;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000024480
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000242ad
- (void)prepareForReuse;	// IMP=0x000000000002426a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000023e23

@end

