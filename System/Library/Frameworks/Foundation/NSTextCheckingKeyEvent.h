//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSTextCheckingKeyEvent : NSObject <NSCopying, NSSecureCoding>
{
    long long _layoutType;	// 8 = 0x8
    unsigned long long _keyboardType;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_primaryLanguage;	// 32 = 0x20
    unsigned long long _flags;	// 40 = 0x28
    double _time;	// 48 = 0x30
    NSString *_keys;	// 56 = 0x38
    NSString *_ukeys;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000188e52
@property(readonly, copy) NSString *charactersIgnoringModifiers;
@property(readonly, copy) NSString *characters;
@property(readonly) double timestamp;
@property(readonly) unsigned long long flags;
@property(readonly, copy) NSString *primaryLanguage;
@property(readonly, copy) NSString *keyboardLayoutIdentifier;
@property(readonly) unsigned long long keyboardType;
@property(readonly) long long keyboardLayoutType;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000188ba2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001889f8
- (id)description;	// IMP=0x00000000001888bd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001888b2
- (unsigned long long)hash;	// IMP=0x00000000001887fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000188632
- (void)dealloc;	// IMP=0x00000000001885b7
- (id)initWithKeyboardLayoutType:(long long)arg1 keyboardType:(unsigned long long)arg2 identifier:(id)arg3 primaryLanguage:(id)arg4 flags:(unsigned long long)arg5 timestamp:(double)arg6 characters:(id)arg7 charactersIgnoringModifiers:(id)arg8;	// IMP=0x00000000001884d9

@end

