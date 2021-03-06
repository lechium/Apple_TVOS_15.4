//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIDictationMultilingualString : NSObject
{
    NSString *_text;	// 8 = 0x8
    NSString *_dominantLanguage;	// 16 = 0x10
    id _correctionIdentifier;	// 24 = 0x18
    NSString *_interactionIdentifier;	// 32 = 0x20
    NSArray *_phrases;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000009097ce
@property(copy, nonatomic) NSArray *phrases; // @synthesize phrases=_phrases;
@property(retain, nonatomic) NSString *interactionIdentifier; // @synthesize interactionIdentifier=_interactionIdentifier;
@property(retain, nonatomic) id correctionIdentifier; // @synthesize correctionIdentifier=_correctionIdentifier;
@property(copy, nonatomic) NSString *dominantLanguage; // @synthesize dominantLanguage=_dominantLanguage;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)dictionaryValue;	// IMP=0x000000000090966a
- (id)description;	// IMP=0x000000000090961a
- (unsigned long long)hash;	// IMP=0x000000000090958d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000909499
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009093e9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000090937c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000090928b
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000009091c7
- (id)initWithText:(id)arg1 forLanguage:(id)arg2;	// IMP=0x000000000090910e

@end

