//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _UIStatusBarDataIntegerEntry
{
    _Bool _displayRawValue;	// 9 = 0x9
    long long _rawValue;	// 16 = 0x10
    long long _displayValue;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000c91950
@property(nonatomic) _Bool displayRawValue; // @synthesize displayRawValue=_displayRawValue;
@property(nonatomic) long long displayValue; // @synthesize displayValue=_displayValue;
@property(nonatomic) long long rawValue; // @synthesize rawValue=_rawValue;
- (id)_ui_descriptionBuilder;	// IMP=0x0000000000c91bec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c91ae7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c91a13
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c91958
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c918c1
- (unsigned long long)hash;	// IMP=0x0000000000c9186c

@end

