//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>
#import <CoreKnowledge/NSSecureCoding-Protocol.h>

@class NSArray, NSLocale, NSString;

@interface CKVTokenChain : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_normalizedString;	// 8 = 0x8
    NSLocale *_locale;	// 16 = 0x10
    NSArray *_tokens;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000cc1d8
+ (id)tokenChainBuilderForString:(id)arg1 locale:(id)arg2;	// IMP=0x00000000000cc168
- (void).cxx_destruct;	// IMP=0x00000000000cc135
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSString *normalizedString; // @synthesize normalizedString=_normalizedString;
- (unsigned long long)hash;	// IMP=0x00000000000cc0bd
- (_Bool)isEqualToTokenChain:(id)arg1;	// IMP=0x00000000000cbfca
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cbf62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cbec1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cbd67
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cbce4
- (id)description;	// IMP=0x00000000000cbc64
- (id)init;	// IMP=0x00000000000cbc1c
- (id)initWithString:(id)arg1 locale:(id)arg2 tokens:(id)arg3;	// IMP=0x00000000000cb9d1

@end

