//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class _TVSMBackdropView;

@interface _TVSMPlatterView : UIView
{
    _TVSMBackdropView *_backdropView;	// 8 = 0x8
    UIView *_tintView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000018630
@property(readonly, nonatomic) UIView *tintView; // @synthesize tintView=_tintView;
@property(readonly, nonatomic) _TVSMBackdropView *backdropView; // @synthesize backdropView=_backdropView;
- (void)_configureForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000000184d0
- (void)_setCornerRadius:(double)arg1;	// IMP=0x0000000000018440
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x00000000000183b0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000182d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000017160

@end
