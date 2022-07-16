//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSNumber, NSPersonNameComponents, NSString, PKCurrencyAmount, PKLocation;

@interface PKPassSemantic : NSObject <NSSecureCoding>
{
    NSString *_semanticKey;	// 8 = 0x8
    NSString *_fieldKey;	// 16 = 0x10
    NSString *_stringValue;	// 24 = 0x18
    NSDate *_dateValue;	// 32 = 0x20
    NSNumber *_numberValue;	// 40 = 0x28
    PKLocation *_locationValue;	// 48 = 0x30
    PKCurrencyAmount *_currencyAmountValue;	// 56 = 0x38
    NSPersonNameComponents *_personNameComponentsValue;	// 64 = 0x40
    NSArray *_stringsValue;	// 72 = 0x48
    NSArray *_dictionariesValue;	// 80 = 0x50
}

+ (id)_supportedDictionaryValueTypes;	// IMP=0x00000000001eaaba
+ (_Bool)isSupportedDictionaryKeyType:(id)arg1;	// IMP=0x00000000001eaa6f
+ (_Bool)isSupportedDictionaryValueType:(id)arg1;	// IMP=0x00000000001ea92b
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e9d08
- (void).cxx_destruct;	// IMP=0x00000000001eac2e
@property(retain, nonatomic) NSArray *dictionariesValue; // @synthesize dictionariesValue=_dictionariesValue;
@property(retain, nonatomic) NSArray *stringsValue; // @synthesize stringsValue=_stringsValue;
@property(retain, nonatomic) NSPersonNameComponents *personNameComponentsValue; // @synthesize personNameComponentsValue=_personNameComponentsValue;
@property(retain, nonatomic) PKCurrencyAmount *currencyAmountValue; // @synthesize currencyAmountValue=_currencyAmountValue;
@property(retain, nonatomic) PKLocation *locationValue; // @synthesize locationValue=_locationValue;
@property(retain, nonatomic) NSNumber *numberValue; // @synthesize numberValue=_numberValue;
@property(retain, nonatomic) NSDate *dateValue; // @synthesize dateValue=_dateValue;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(copy, nonatomic) NSString *fieldKey; // @synthesize fieldKey=_fieldKey;
@property(copy, nonatomic) NSString *semanticKey; // @synthesize semanticKey=_semanticKey;
- (unsigned long long)hash;	// IMP=0x00000000001ea84c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ea508
- (id)description;	// IMP=0x00000000001ea348
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ea0f8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e9d10
@property(readonly, nonatomic) _Bool hasValue;

@end
