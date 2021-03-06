//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface UIPhysicalKeyboardEvent
{
    _Bool _canPrivatize;	// 25 = 0x19
    _Bool __externalEvent;	// 26 = 0x1a
    int _inputFlags;	// 28 = 0x1c
    NSString *_modifiedInput;	// 32 = 0x20
    NSString *_unmodifiedInput;	// 40 = 0x28
    NSString *_shiftModifiedInput;	// 48 = 0x30
    NSString *_commandModifiedInput;	// 56 = 0x38
    NSString *_markedInput;	// 64 = 0x40
    long long _modifierFlags;	// 72 = 0x48
    NSString *_privateInput;	// 80 = 0x50
    long long _privateModifierFlags;	// 88 = 0x58
    NSString *_privateShiftModifiedInput;	// 96 = 0x60
    NSString *_hint;	// 104 = 0x68
    long long __keyCode;	// 112 = 0x70
    long long _source;	// 120 = 0x78
}

+ (id)_eventWithInput:(id)arg1 inputFlags:(int)arg2;	// IMP=0x0000000000bda66a
- (void).cxx_destruct;	// IMP=0x0000000000bda9f1
@property(nonatomic, getter=_isExternalEvent) _Bool _externalEvent; // @synthesize _externalEvent=__externalEvent;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long _keyCode; // @synthesize _keyCode=__keyCode;
@property(retain, nonatomic) NSString *_hint; // @synthesize _hint;
@property(retain, nonatomic) NSString *_privateShiftModifiedInput; // @synthesize _privateShiftModifiedInput;
@property(nonatomic) long long _privateModifierFlags; // @synthesize _privateModifierFlags;
@property(retain, nonatomic) NSString *_privateInput; // @synthesize _privateInput;
@property(nonatomic) int _inputFlags; // @synthesize _inputFlags;
@property(nonatomic) long long _modifierFlags; // @synthesize _modifierFlags;
@property(retain, nonatomic) NSString *_markedInput; // @synthesize _markedInput;
@property(retain, nonatomic) NSString *_commandModifiedInput; // @synthesize _commandModifiedInput;
@property(retain, nonatomic) NSString *_shiftModifiedInput; // @synthesize _shiftModifiedInput;
@property(retain, nonatomic) NSString *_unmodifiedInput; // @synthesize _unmodifiedInput;
@property(retain, nonatomic) NSString *_modifiedInput; // @synthesize _modifiedInput;
@property(readonly, nonatomic) long long _gsModifierFlags;
- (long long)modifierFlags;	// IMP=0x0000000000bda7b0
- (void)_privatize;	// IMP=0x0000000000bda726
- (id)_cloneEvent;	// IMP=0x0000000000bda33a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bda215
- (_Bool)_shouldAttemptSecurePasteAuthentication;	// IMP=0x0000000000bd9f4f
- (_Bool)_matchesKeyCommand:(id)arg1 usesPrivateShiftModifiedInput:(_Bool)arg2;	// IMP=0x0000000000bd99da
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1 keyboard:(struct __GSKeyboard *)arg2;	// IMP=0x0000000000bd8fd7
@property(readonly, nonatomic) _Bool _isARepeat;
@property(readonly, nonatomic) _Bool _isModifierKey;
- (_Bool)_isPhysicalKeyEvent;	// IMP=0x0000000000bd8f37
@property(readonly, nonatomic) _Bool _isGlobeKey;
@property(readonly, nonatomic) _Bool _isEjectKey;
@property(readonly, nonatomic) _Bool _isKeyDown;
- (long long)type;	// IMP=0x0000000000bd8dac

@end

