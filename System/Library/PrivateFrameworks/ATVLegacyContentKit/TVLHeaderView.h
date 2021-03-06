//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>

@class TVImageView, TVLHeaderElement, UILabel;

@interface TVLHeaderView : UIView <ATVUpdatable>
{
    TVLHeaderElement *_headerElement;	// 8 = 0x8
    long long _horizontalAlignment;	// 16 = 0x10
    TVImageView *_imageView;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    struct UIEdgeInsets _padding;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000008276f
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) TVLHeaderElement *headerElement; // @synthesize headerElement=_headerElement;
- (void)updateWithFeedElement:(id)arg1;	// IMP=0x0000000000082385
- (id)currentFeedElement;	// IMP=0x0000000000082370
- (void)_setTitle:(id)arg1;	// IMP=0x00000000000821a0
- (void)_setSubtitle:(id)arg1;	// IMP=0x0000000000081ffd
- (void)_setHorizontalAlignment:(long long)arg1;	// IMP=0x0000000000081fd8
- (void)_setHeaderImageProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000081de9
- (id)headerImage;	// IMP=0x0000000000081dcc
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000081b12
- (void)layoutSubviews;	// IMP=0x00000000000815c0
- (id)initWithHeaderElement:(id)arg1;	// IMP=0x00000000000812ab

@end

