//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSPasscodeFieldDelegate-Protocol.h>

@class NSString, PSPasscodeField;

@interface PSBulletedPINView <PSPasscodeFieldDelegate>
{
    PSPasscodeField *_passcodeField;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000720dc
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;	// IMP=0x00000000000720ca
- (void)setBlocked:(_Bool)arg1;	// IMP=0x00000000000720a7
- (_Bool)resignFirstResponder;	// IMP=0x000000000007205b
- (_Bool)becomeFirstResponder;	// IMP=0x000000000007203e
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000072021
- (_Bool)isFirstResponder;	// IMP=0x0000000000072004
- (void)appendString:(id)arg1;	// IMP=0x0000000000071fcb
- (void)deleteLastCharacter;	// IMP=0x0000000000071f92
- (void)setStringValue:(id)arg1;	// IMP=0x0000000000071f59
- (id)stringValue;	// IMP=0x0000000000071f3c
- (void)hidePasscodeField:(_Bool)arg1;	// IMP=0x0000000000071d04
- (void)layoutSubviews;	// IMP=0x0000000000071af8
- (void)dealloc;	// IMP=0x0000000000071aad
- (id)initWithFrame:(struct CGRect)arg1 numberOfFields:(int)arg2;	// IMP=0x0000000000071797
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000071789

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

