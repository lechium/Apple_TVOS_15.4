//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSDate, PKCalendarDayLabelView, UITapGestureRecognizer;
@protocol PKCalendarDayViewDelegate;

@interface PKCalendarDayView : UIView
{
    NSDate *_date;	// 8 = 0x8
    id <PKCalendarDayViewDelegate> _delegate;	// 16 = 0x10
    PKCalendarDayLabelView *_dayLabelView;	// 24 = 0x18
    UITapGestureRecognizer *_tapRecognizer;	// 32 = 0x20
    _Bool _selectable;	// 40 = 0x28
    _Bool _hideDayLabel;	// 41 = 0x29
    UIView *_decorationView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002ca139
@property(nonatomic) _Bool hideDayLabel; // @synthesize hideDayLabel=_hideDayLabel;
@property(nonatomic, getter=isSelectable) _Bool selectable; // @synthesize selectable=_selectable;
@property(retain, nonatomic) UIView *decorationView; // @synthesize decorationView=_decorationView;
- (void)_viewTapped;	// IMP=0x00000000002ca0dd
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x00000000002c9f22
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002c9ed9
- (void)layoutSubviews;	// IMP=0x00000000002c9e6a
- (double)verticalMarginWithBounds:(struct CGRect)arg1;	// IMP=0x00000000002c9dd2
@property(nonatomic, getter=isSelected) _Bool selected;
- (id)initWithDate:(id)arg1 dayString:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000002c9ae6

@end

