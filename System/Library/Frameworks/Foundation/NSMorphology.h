//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSMutableDictionary;

@interface NSMorphology : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_customPronouns;	// 8 = 0x8
    long long _grammaticalGender;	// 16 = 0x10
    long long _partOfSpeech;	// 24 = 0x18
    long long _number;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000012838
+ (id)userMorphology;	// IMP=0x0000000000013566
@property(nonatomic) long long number; // @synthesize number=_number;
@property(nonatomic) long long partOfSpeech; // @synthesize partOfSpeech=_partOfSpeech;
@property(nonatomic) long long grammaticalGender; // @synthesize grammaticalGender=_grammaticalGender;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000128f3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012840
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000012732
- (unsigned long long)hash;	// IMP=0x00000000000126ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012635
@property(copy, setter=_setCustomPronouns:) NSDictionary *_customPronouns;
- (void)dealloc;	// IMP=0x0000000000012584
- (_Bool)setCustomPronoun:(id)arg1 forLanguage:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012c3c
- (id)customPronounForLanguage:(id)arg1;	// IMP=0x0000000000012bf4
@property(readonly, getter=isUnspecified) _Bool unspecified;
@property(readonly, nonatomic) NSData *_externalRepresentation;
@property(readonly, nonatomic) NSDictionary *_externalRepresentationDictionary;
- (id)_initWithExternalRepresentationDictionary:(id)arg1;	// IMP=0x0000000000013e26
- (id)_initWithExternalRepresentation:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000001376d

@end

