//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSMutableArray, NSString, UIColor, UILabel;

@interface BFFLinkLabelFooterView : UIView
{
    UILabel *_label;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    NSMutableArray *_linkHandlers;	// 24 = 0x18
    UIView *_topLine;	// 32 = 0x20
    _Bool _wantsSideBySideLayout;	// 40 = 0x28
    _Bool _wantsFromBottomLayout;	// 41 = 0x29
    double _flexibleHeight;	// 48 = 0x30
    NSAttributedString *_attributedSubtitleText;	// 56 = 0x38
    struct UIEdgeInsets _margins;	// 64 = 0x40
}

+ (void)initialize;	// IMP=0x0000000000004166
- (void).cxx_destruct;	// IMP=0x0000000000005f22
@property(nonatomic) _Bool wantsFromBottomLayout; // @synthesize wantsFromBottomLayout=_wantsFromBottomLayout;
@property(nonatomic) _Bool wantsSideBySideLayout; // @synthesize wantsSideBySideLayout=_wantsSideBySideLayout;
@property(retain, nonatomic) NSAttributedString *attributedSubtitleText; // @synthesize attributedSubtitleText=_attributedSubtitleText;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(nonatomic) double flexibleHeight; // @synthesize flexibleHeight=_flexibleHeight;
- (void)layoutSubviews;	// IMP=0x0000000000005e03
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000005def
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 shouldSetSize:(_Bool)arg2;	// IMP=0x0000000000004be8
@property(retain, nonatomic) UIColor *topLineColor;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000004946
- (unsigned long long)numberOfLinks;	// IMP=0x0000000000004929
- (void)removeAllLinks;	// IMP=0x00000000000048c1
- (void)removeLinkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000004826
- (void)addLinkWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000047ad
- (void)addLinkWithTitle:(id)arg1 textStyle:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000045c4
@property(retain, nonatomic) NSString *labelText;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000041e0

@end

