//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TIKeyboardShortcut : NSObject
{
    NSString *_keyEquivalent;	// 8 = 0x8
    unsigned long long _modifierFlags;	// 16 = 0x10
    NSString *_displayStringOverride;	// 24 = 0x18
}

+ (_Bool)isMirroringCandidate:(id)arg1;	// IMP=0x0000000000075ff0
+ (id)findLocalizationForKeyboardShortcut:(id)arg1 withModifiers:(unsigned long long)arg2 inApplicableOverrides:(id)arg3 usingKeyboardType:(unsigned int)arg4;	// IMP=0x0000000000075b54
+ (id)localizedKeyboardShortcut:(id)arg1 forKeyboardLayout:(id)arg2 withAttributes:(id)arg3;	// IMP=0x000000000007588c
+ (id)localizedKeyboardShortcut:(id)arg1 forKeyboardLayout:(id)arg2 usingKeyboardType:(unsigned int)arg3;	// IMP=0x000000000007571d
+ (id)localizedKeyboardShortcut:(id)arg1 forKeyboardLayout:(id)arg2;	// IMP=0x00000000000755cc
+ (id)shortcutWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2 displayStringOverride:(id)arg3;	// IMP=0x0000000000075551
+ (id)shortcutWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2;	// IMP=0x00000000000754f9
- (void).cxx_destruct;	// IMP=0x00000000000754d1
@property(retain, nonatomic) NSString *displayStringOverride; // @synthesize displayStringOverride=_displayStringOverride;
@property unsigned long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(retain, nonatomic) NSString *keyEquivalent; // @synthesize keyEquivalent=_keyEquivalent;
- (unsigned long long)hash;	// IMP=0x0000000000075462
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000075377
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000075302
- (id)description;	// IMP=0x000000000007505e
- (id)initWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2 displayStringOverride:(id)arg3;	// IMP=0x0000000000074f9f
- (id)initWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2;	// IMP=0x0000000000074f0a

@end

