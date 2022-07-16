//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface SIRINLUINTERNALTokenChain : PBCodable <NSCopying>
{
    NSString *_locale;	// 8 = 0x8
    NSString *_stringValue;	// 16 = 0x10
    NSMutableArray *_tokens;	// 24 = 0x18
}

+ (Class)tokensType;	// IMP=0x00000000000ea152
- (void).cxx_destruct;	// IMP=0x00000000000eae95
@property(retain, nonatomic) NSMutableArray *tokens; // @synthesize tokens=_tokens;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000eac8e
- (unsigned long long)hash;	// IMP=0x00000000000eac21
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000eab29
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ea923
- (void)copyTo:(id)arg1;	// IMP=0x00000000000ea819
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ea6b0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ea6a3
- (id)dictionaryRepresentation;	// IMP=0x00000000000ea212
- (id)description;	// IMP=0x00000000000ea163
- (id)tokensAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ea135
- (unsigned long long)tokensCount;	// IMP=0x00000000000ea118
- (void)addTokens:(id)arg1;	// IMP=0x00000000000ea0ae
- (void)clearTokens;	// IMP=0x00000000000ea091
@property(readonly, nonatomic) _Bool hasLocale;
@property(readonly, nonatomic) _Bool hasStringValue;

@end

