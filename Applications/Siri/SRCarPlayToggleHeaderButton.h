//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, _TtC4Siri25SRCarPlayToggleEffectView;

@interface SRCarPlayToggleHeaderButton
{
    _TtC4Siri25SRCarPlayToggleEffectView *_effectView;	// 8 = 0x8
    _Bool _on;	// 16 = 0x10
    UIColor *_onStateTitleColor;	// 24 = 0x18
}

+ (id)buttonWithTitle:(id)arg1 systemImageNamed:(id)arg2 placement:(unsigned long long)arg3 initialState:(_Bool)arg4;	// IMP=0x004000000002f5e6
- (void).cxx_destruct;	// IMP=0x002000000002ffff
@property(readonly, nonatomic) UIColor *onStateTitleColor; // @synthesize onStateTitleColor=_onStateTitleColor;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
- (void)_updateSubviewAlphasForFocusedState:(_Bool)arg1 selected:(_Bool)arg2;	// IMP=0x001000000002fd8e
- (id)_subviewCompositingFilterForUserInterfaceStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x001000000002fd51
- (id)_subviewTintColorForFocusedState:(_Bool)arg1 selectedState:(_Bool)arg2;	// IMP=0x001000000002fcf0
- (void)layoutSubviews;	// IMP=0x001000000002f74c

@end
