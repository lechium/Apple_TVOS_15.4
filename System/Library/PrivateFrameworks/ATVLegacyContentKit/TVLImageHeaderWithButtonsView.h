//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>

@class NSArray, TVLImageHeaderWithButtonsElement, UIFocusContainerGuide;
@protocol TVLImageHeaderWithButtonsViewDelegate;

@interface TVLImageHeaderWithButtonsView <ATVUpdatable>
{
    UIFocusContainerGuide *_containerGuide;	// 8 = 0x8
    _Bool _isPartOfOptionDialog;	// 16 = 0x10
    NSArray *_buttons;	// 24 = 0x18
    id <TVLImageHeaderWithButtonsViewDelegate> _delegate;	// 32 = 0x20
    double _horizontalInset;	// 40 = 0x28
    TVLImageHeaderWithButtonsElement *_feedElement;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000064f24
@property(nonatomic) _Bool isPartOfOptionDialog; // @synthesize isPartOfOptionDialog=_isPartOfOptionDialog;
@property(retain, nonatomic) TVLImageHeaderWithButtonsElement *feedElement; // @synthesize feedElement=_feedElement;
@property(nonatomic) double horizontalInset; // @synthesize horizontalInset=_horizontalInset;
@property(nonatomic) __weak id <TVLImageHeaderWithButtonsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void)_buttonSelected:(id)arg1;	// IMP=0x0000000000064d37
- (id)preferredFocusEnvironments;	// IMP=0x0000000000064c2e
- (_Bool)canBecomeFocused;	// IMP=0x0000000000064c26
- (void)layoutSubviews;	// IMP=0x0000000000064233
- (void)updateWithFeedElement:(id)arg1;	// IMP=0x0000000000063dd8
- (id)currentFeedElement;	// IMP=0x0000000000063dc3
- (id)initWithImageHeaderElement:(id)arg1;	// IMP=0x0000000000063c95

@end
