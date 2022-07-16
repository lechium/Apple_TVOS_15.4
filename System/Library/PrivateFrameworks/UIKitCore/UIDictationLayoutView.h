//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface UIDictationLayoutView
{
    _Bool _hideSwitcher;	// 64 = 0x40
    UIButton *_globeButton;	// 72 = 0x48
    UIButton *_keyboardButton;	// 80 = 0x50
    UILabel *_languageLabel;	// 88 = 0x58
    NSString *_currentDictationLanguage;	// 96 = 0x60
    UIButton *_waveTapEndpointButton;	// 104 = 0x68
    _Bool _blackTextColor;	// 112 = 0x70
}

- (_Bool)isShowing;	// IMP=0x000000000091102a
- (void)returnToKeyboard;	// IMP=0x0000000000910fc4
- (void)finishReturnToKeyboard;	// IMP=0x0000000000910f4d
- (void)layoutSubviews;	// IMP=0x0000000000910888
- (void)setState:(int)arg1;	// IMP=0x0000000000910609
- (void)setRenderConfig:(id)arg1;	// IMP=0x00000000009105cd
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint)arg3;	// IMP=0x000000000091026f
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000910177
- (void)updateLanguageLabel;	// IMP=0x000000000090fe46
- (void)keyboardButtonPressed:(id)arg1;	// IMP=0x000000000090fd72
- (id)darkGrayColor;	// IMP=0x000000000090fd39
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000090fae5
- (void)dealloc;	// IMP=0x000000000090fa63

@end
