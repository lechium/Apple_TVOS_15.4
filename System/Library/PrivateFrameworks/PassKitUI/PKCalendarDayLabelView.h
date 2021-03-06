//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface PKCalendarDayLabelView : UIView
{
    UILabel *_dayLabel;	// 8 = 0x8
    UIView *_highlightView;	// 16 = 0x10
    _Bool _selected;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002ca7f0
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (id)_dayLabelFont;	// IMP=0x00000000002ca768
- (struct CGRect)labelFrameForBounds:(struct CGRect)arg1;	// IMP=0x00000000002ca6cc
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x00000000002ca52c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002ca4e3
- (void)layoutSubviews;	// IMP=0x00000000002ca474
- (id)initWithDayString:(id)arg1;	// IMP=0x00000000002ca19d

@end

