//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;
@protocol _TVInspectorCapturingViewDelegate;

@interface _TVInspectorCapturingView : UIView
{
    _Bool _testingHits;	// 8 = 0x8
    UILabel *_descriptionLabel;	// 16 = 0x10
    id <_TVInspectorCapturingViewDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cb3b0
@property(nonatomic) __weak id <_TVInspectorCapturingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isTestingHits) _Bool testingHits; // @synthesize testingHits=_testingHits;
- (void)didTapView:(id)arg1;	// IMP=0x00000000000cb1cb
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000cb17e
- (void)layoutSubviews;	// IMP=0x00000000000cafd0
@property(readonly, nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000cac86

@end

