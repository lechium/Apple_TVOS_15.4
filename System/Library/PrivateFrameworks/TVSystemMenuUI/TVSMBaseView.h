//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVSystemMenuUI/TVLockupViewComponent-Protocol.h>
#import <TVSystemMenuUI/TVSMBaseViewAttributesApplying-Protocol.h>

@class NSString, _UIFloatingContentView;

@interface TVSMBaseView : UIView <TVLockupViewComponent, TVSMBaseViewAttributesApplying>
{
    long long _style;	// 8 = 0x8
    _UIFloatingContentView *_floatingContentView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000013f40
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)updateFloatingContentViewControlState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000013eb0
- (void)updateAppearanceForLockupViewState:(unsigned long long)arg1;	// IMP=0x0000000000013e70
@property(readonly, nonatomic) UIView *visualEffectContainerView;
@property(readonly, nonatomic) UIView *contentView;
- (id)initWithFrame:(struct CGRect)arg1 buttonStyle:(long long)arg2;	// IMP=0x0000000000013130
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000130b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
