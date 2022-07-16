//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXEventRepresentationDescription-Protocol.h>
#import <AccessibilityUtilities/NSCopying-Protocol.h>
#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface AXEventKeyInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>
{
    _Bool _keyDown;	// 8 = 0x8
    unsigned short _keyCode;	// 10 = 0xa
    unsigned short _alternativeKeyCode;	// 12 = 0xc
    unsigned int _usagePage;	// 16 = 0x10
    unsigned int _modifierState;	// 20 = 0x14
    unsigned int _gsModifierState;	// 24 = 0x18
    NSString *_unmodifiedInput;	// 32 = 0x20
    NSString *_modifiedInput;	// 40 = 0x28
    NSString *_shiftModifiedInput;	// 48 = 0x30
    NSString *_backupUnmodifiedInput;	// 56 = 0x38
    NSString *_backupModifiedInput;	// 64 = 0x40
    NSString *_backupShiftModifiedInput;	// 72 = 0x48
}

+ (struct __GSKeyboard *)_getUIKitKeyboardRef;	// IMP=0x000000000006a983
+ (unsigned char)_getIOHIDKeyboardTypeForGSKeyboardType:(unsigned char)arg1;	// IMP=0x000000000006a961
+ (struct __GSKeyboard *)_getUSUIKitKeyboardRef;	// IMP=0x000000000006a7b9
+ (void)prepareForKeycodeTranslation;	// IMP=0x000000000006a757
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000069fbe
- (void).cxx_destruct;	// IMP=0x000000000006b8e0
@property(nonatomic) unsigned int gsModifierState; // @synthesize gsModifierState=_gsModifierState;
@property(copy, nonatomic) NSString *backupShiftModifiedInput; // @synthesize backupShiftModifiedInput=_backupShiftModifiedInput;
@property(copy, nonatomic) NSString *backupModifiedInput; // @synthesize backupModifiedInput=_backupModifiedInput;
@property(copy, nonatomic) NSString *backupUnmodifiedInput; // @synthesize backupUnmodifiedInput=_backupUnmodifiedInput;
@property(nonatomic) unsigned int modifierState; // @synthesize modifierState=_modifierState;
@property(copy, nonatomic) NSString *shiftModifiedInput; // @synthesize shiftModifiedInput=_shiftModifiedInput;
@property(copy, nonatomic) NSString *modifiedInput; // @synthesize modifiedInput=_modifiedInput;
@property(copy, nonatomic) NSString *unmodifiedInput; // @synthesize unmodifiedInput=_unmodifiedInput;
@property(nonatomic) _Bool keyDown; // @synthesize keyDown=_keyDown;
@property(nonatomic) unsigned int usagePage; // @synthesize usagePage=_usagePage;
@property(nonatomic) unsigned short alternativeKeyCode; // @synthesize alternativeKeyCode=_alternativeKeyCode;
@property(nonatomic) unsigned short keyCode; // @synthesize keyCode=_keyCode;
- (id)accessibilityEventRepresentationTabularDescription;	// IMP=0x000000000006b7c8
- (void)translateKeycode;	// IMP=0x000000000006adf1
- (void)translateStringToKeycode;	// IMP=0x000000000006acd9
- (struct __GSKeyboard *)_getUSUIKitKeyboardRef;	// IMP=0x000000000006a79f
- (struct __GSKeyboard *)_getUIKitKeyboardRef;	// IMP=0x000000000006a785
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006a4b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006a2b6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000069fc6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

