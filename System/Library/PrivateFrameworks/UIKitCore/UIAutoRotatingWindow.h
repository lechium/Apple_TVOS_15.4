//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface UIAutoRotatingWindow
{
    long long _interfaceOrientation;	// 264 = 0x108
    _Bool _unknownOrientation;	// 272 = 0x110
}

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e619ba
- (void)_didRemoveSubview:(id)arg1;	// IMP=0x0000000000e6191b
- (void)updateForOrientation:(long long)arg1;	// IMP=0x0000000000e618a5
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 windowScene:(id)arg3;	// IMP=0x0000000000e6184d
- (id)_initWithFrame:(struct CGRect)arg1 attached:(_Bool)arg2;	// IMP=0x0000000000e617f5
- (void)commonInit;	// IMP=0x0000000000e61705

@end

