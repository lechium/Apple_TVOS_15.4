//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, UIImageView, UILabel, UIView;
@protocol ABText;

__attribute__((visibility("hidden")))
@interface CNLabeledCell
{
    NSDictionary *_labelTextAttributes;	// 8 = 0x8
    NSDictionary *_valueTextAttributes;	// 16 = 0x10
    UIImageView *_chevron;	// 24 = 0x18
}

+ (_Bool)wantsHorizontalLayout;	// IMP=0x0000000000087ec6
+ (_Bool)wantsStandardConstraints;	// IMP=0x0000000000087ebe
+ (_Bool)wantsChevron;	// IMP=0x0000000000087eb6
- (void).cxx_destruct;	// IMP=0x0000000000089ed1
@property(readonly, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
- (void)tintColorDidChange;	// IMP=0x0000000000089dd6
@property(copy, nonatomic) NSDictionary *valueTextAttributes;
@property(copy, nonatomic) NSDictionary *labelTextAttributes;
@property(readonly, nonatomic) NSString *valueString;
@property(readonly, nonatomic) NSString *labelString;
@property(readonly, nonatomic) UILabel *standardValueView;
@property(readonly, nonatomic) UILabel *standardLabelView;
@property(readonly, nonatomic) UIView *rightMostView;
@property(readonly, nonatomic) UIView<ABText> *valueView;
@property(readonly, nonatomic) UIView<ABText> *labelView;
- (id)variableConstraintsForHorizontalLayout;	// IMP=0x0000000000089914
- (id)constantConstraintsForHorizontalLayout;	// IMP=0x0000000000088e47
- (id)variableConstraintsForVerticalLayout;	// IMP=0x0000000000088ce1
- (id)constantConstraintsForVerticalLayout;	// IMP=0x00000000000885b3
- (id)variableConstraintsForStandardLayout;	// IMP=0x000000000008852e
- (id)constantConstraintsForStandardLayout;	// IMP=0x00000000000884a9
- (id)variableConstraints;	// IMP=0x00000000000883c9
- (id)constantConstraints;	// IMP=0x00000000000882e9
@property(readonly, nonatomic) double bottomBaselineConstant;
@property(readonly, nonatomic) double topBaselineConstant;
@property(readonly, nonatomic) double chevronWidth;
- (double)minCellHeight;	// IMP=0x000000000008828e
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000087ece

@end

