//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PKPassNumberField
{
    NSString *_currencyCode;	// 128 = 0x80
    long long _numberStyle;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c81af
- (void).cxx_destruct;	// IMP=0x00000000001c8395
@property(nonatomic) long long numberStyle; // @synthesize numberStyle=_numberStyle;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
- (id)value;	// IMP=0x00000000001c8246
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c81b7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c80c4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c7fb9
- (id)asMutableDictionary;	// IMP=0x00000000001c7ece
- (id)asDictionary;	// IMP=0x00000000001c7e86

@end
