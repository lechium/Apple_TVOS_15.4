//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface _UIButtonBarSpacerLayout
{
    UIBarButtonItem *_item;	// 24 = 0x18
    UIView *_spacer;	// 32 = 0x20
    NSLayoutConstraint *_requestedSize;	// 40 = 0x28
    NSLayoutConstraint *_minimumSize;	// 48 = 0x30
    NSLayoutConstraint *_equalSize;	// 56 = 0x38
    _Bool _flexible;	// 64 = 0x40
    long long _spacerType;	// 72 = 0x48
}

+ (long long)typeOfSpacerBetweenLayout:(id)arg1 andLayout:(id)arg2;	// IMP=0x000000000010d6a1
+ (id)spacerForLayoutMetrics:(id)arg1 betweenLayout:(id)arg2 andLayout:(id)arg3;	// IMP=0x000000000010d519
- (void).cxx_destruct;	// IMP=0x000000000010dc6d
@property(readonly, nonatomic) long long spacerType; // @synthesize spacerType=_spacerType;
- (id)description;	// IMP=0x000000000010db34
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;	// IMP=0x000000000010da21
- (_Bool)suppressSpacing;	// IMP=0x000000000010da19
- (void)_addLayoutViews:(id)arg1;	// IMP=0x000000000010d9f6
- (void)_configure;	// IMP=0x000000000010d717
- (id)barButtonItem;	// IMP=0x000000000010d702
- (_Bool)isSpaceLayout;	// IMP=0x000000000010d6fa
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;	// IMP=0x000000000010d6b3
- (id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2;	// IMP=0x000000000010d3db
- (id)initWithLayoutMetrics:(id)arg1;	// IMP=0x000000000010d3c7

@end

