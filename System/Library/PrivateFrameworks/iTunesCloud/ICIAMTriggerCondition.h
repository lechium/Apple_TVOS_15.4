//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSString;

@interface ICIAMTriggerCondition : PBCodable <NSCopying>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    int _comparisonType;	// 16 = 0x10
    int _dataType;	// 20 = 0x14
    NSString *_identifier;	// 24 = 0x18
    int _kind;	// 32 = 0x20
    int _triggerConditionType;	// 36 = 0x24
    NSString *_triggerValue;	// 40 = 0x28
    struct {
        unsigned int comparisonType:1;
        unsigned int dataType:1;
        unsigned int kind:1;
        unsigned int triggerConditionType:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000cd0a3
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *triggerValue; // @synthesize triggerValue=_triggerValue;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000ccf35
- (unsigned long long)hash;	// IMP=0x00000000000cce34
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ccc87
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ccb4a
- (void)copyTo:(id)arg1;	// IMP=0x00000000000cca4b
- (void)writeTo:(id)arg1;	// IMP=0x00000000000cc945
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000cc938
- (id)dictionaryRepresentation;	// IMP=0x00000000000cc63e
- (id)description;	// IMP=0x00000000000cc58f
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
- (int)StringAsKind:(id)arg1;	// IMP=0x00000000000cc518
- (id)kindAsString:(int)arg1;	// IMP=0x00000000000cc4c3
@property(nonatomic) _Bool hasKind;
@property(nonatomic) int kind; // @synthesize kind=_kind;
- (int)StringAsTriggerConditionType:(id)arg1;	// IMP=0x00000000000cc3f7
- (id)triggerConditionTypeAsString:(int)arg1;	// IMP=0x00000000000cc3a2
@property(nonatomic) _Bool hasTriggerConditionType;
@property(nonatomic) int triggerConditionType; // @synthesize triggerConditionType=_triggerConditionType;
@property(readonly, nonatomic) _Bool hasTriggerValue;
- (int)StringAsComparisonType:(id)arg1;	// IMP=0x00000000000cc234
- (id)comparisonTypeAsString:(int)arg1;	// IMP=0x00000000000cc19b
@property(nonatomic) _Bool hasComparisonType;
@property(nonatomic) int comparisonType; // @synthesize comparisonType=_comparisonType;
- (int)StringAsDataType:(id)arg1;	// IMP=0x00000000000cc0a5
- (id)dataTypeAsString:(int)arg1;	// IMP=0x00000000000cc03f
@property(nonatomic) _Bool hasDataType;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

