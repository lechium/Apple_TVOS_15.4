//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableLocalizationTable, NSArray, NSDictionary, NSString;

@interface INCodableEnum : NSObject <NSSecureCoding, NSCopying, INCodableCoding>
{
    NSDictionary *_valuesByIndex;	// 8 = 0x8
    INCodableLocalizationTable *_localizationTable;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    NSString *_displayNameID;	// 40 = 0x28
    NSString *_enumNamespace;	// 48 = 0x30
    long long _type;	// 56 = 0x38
    NSArray *_values;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002b117b
+ (id)__INCodableEnumValueIndexKey;	// IMP=0x00000000002a95aa
+ (id)__INCodableEnumValueNameKey;	// IMP=0x00000000002a959d
+ (id)__INCodableEnumValueDisplayNameKey;	// IMP=0x00000000002a95c4
+ (id)__INCodableEnumValueDisplayNameIDKey;	// IMP=0x00000000002a95b7
+ (id)__INCodableEnumValueSynonymsKey;	// IMP=0x00000000002a9590
+ (id)__NameKey;	// IMP=0x00000000002b119d
+ (id)__DisplayNameKey;	// IMP=0x00000000002b11b7
+ (id)__DisplayNameIDKey;	// IMP=0x00000000002b11aa
+ (id)__TypeKey;	// IMP=0x00000000002b1190
+ (id)__ValuesKey;	// IMP=0x00000000002b1183
+ (id)__INCodableEnumValueSynonymSynonymKey;	// IMP=0x00000000003c323c
+ (id)__INCodableEnumValueSynonymSynonymIDKey;	// IMP=0x00000000003c322f
+ (id)__INCodableEnumValueSynonymPronunciationHintKey;	// IMP=0x00000000003c3256
+ (id)__INCodableEnumValueSynonymPronunciationHintIDKey;	// IMP=0x00000000003c3249
- (void).cxx_destruct;	// IMP=0x00000000002b111c
@property(readonly, copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic, setter=_setEnumNamespace:) NSString *enumNamespace; // @synthesize enumNamespace=_enumNamespace;
@property(readonly, copy, nonatomic) NSString *displayNameID; // @synthesize displayNameID=_displayNameID;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic, setter=_setLocalizationTable:) INCodableLocalizationTable *_localizationTable; // @synthesize _localizationTable;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002b0d2c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002b0b88
- (id)valuesByIndexForValues:(id)arg1;	// IMP=0x00000000002b09a5
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;	// IMP=0x00000000002b0448
- (id)dictionaryRepresentation;	// IMP=0x00000000002b03fc
- (void)updateWithDictionary:(id)arg1;	// IMP=0x00000000002aff36
- (id)localizedDisplayNameWithLocalizer:(id)arg1;	// IMP=0x00000000002afe6e
@property(readonly, copy, nonatomic) NSString *localizedDisplayName;
- (id)valueForIndex:(unsigned long long)arg1;	// IMP=0x00000000002afdbb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002afa85
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002af7a8
- (id)initWithName:(id)arg1 displayName:(id)arg2 displayNameID:(id)arg3 enumNamespace:(id)arg4 type:(long long)arg5 values:(id)arg6 localizationTable:(id)arg7;	// IMP=0x00000000002af5f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

