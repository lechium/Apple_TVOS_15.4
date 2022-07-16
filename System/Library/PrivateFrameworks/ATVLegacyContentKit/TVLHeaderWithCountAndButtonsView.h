//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>

@class NSArray, NSString, TVLHeaderWithCountAndButtonsElement, UIFocusContainerGuide, UILabel;
@protocol TVLHeaderWithCountAndButtonsViewDelegate;

@interface TVLHeaderWithCountAndButtonsView : UIView <ATVUpdatable>
{
    NSString *_title;	// 8 = 0x8
    long long _count;	// 16 = 0x10
    NSArray *_buttons;	// 24 = 0x18
    id <TVLHeaderWithCountAndButtonsViewDelegate> _delegate;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_countLabel;	// 48 = 0x30
    TVLHeaderWithCountAndButtonsElement *_feedElement;	// 56 = 0x38
    UIFocusContainerGuide *_containerGuide;	// 64 = 0x40
    struct UIEdgeInsets _insets;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000034363
@property(retain, nonatomic) UIFocusContainerGuide *containerGuide; // @synthesize containerGuide=_containerGuide;
@property(retain, nonatomic) TVLHeaderWithCountAndButtonsElement *feedElement; // @synthesize feedElement=_feedElement;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <TVLHeaderWithCountAndButtonsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_buttonSelected:(id)arg1;	// IMP=0x00000000000340e7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000033e64
- (_Bool)canBecomeFocused;	// IMP=0x0000000000033e5c
- (void)layoutSubviews;	// IMP=0x000000000003369b
- (void)updateWithFeedElement:(id)arg1;	// IMP=0x0000000000032f88
- (id)currentFeedElement;	// IMP=0x0000000000032f73
- (id)initWithHeaderWithCountAndButtonsElement:(id)arg1;	// IMP=0x0000000000032e73

@end
