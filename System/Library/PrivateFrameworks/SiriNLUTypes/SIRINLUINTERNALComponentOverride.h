//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, NSString, SIRINLUINTERNALOverrideValue;

@interface SIRINLUINTERNALComponentOverride : PBCodable <NSCopying>
{
    unsigned long long _creationTimestampMsSinceUnixEpoch;	// 8 = 0x8
    NSString *_idA;	// 16 = 0x10
    NSMutableArray *_nluRequestRules;	// 24 = 0x18
    int _overrideNamespace;	// 32 = 0x20
    SIRINLUINTERNALOverrideValue *_value;	// 40 = 0x28
    _Bool _enabled;	// 48 = 0x30
    struct {
        unsigned int creationTimestampMsSinceUnixEpoch:1;
        unsigned int overrideNamespace:1;
        unsigned int enabled:1;
    } _has;	// 52 = 0x34
}

+ (Class)nluRequestRulesType;	// IMP=0x000000000007d22b
- (void).cxx_destruct;	// IMP=0x000000000007e59a
@property(retain, nonatomic) NSMutableArray *nluRequestRules; // @synthesize nluRequestRules=_nluRequestRules;
@property(retain, nonatomic) SIRINLUINTERNALOverrideValue *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long creationTimestampMsSinceUnixEpoch; // @synthesize creationTimestampMsSinceUnixEpoch=_creationTimestampMsSinceUnixEpoch;
@property(retain, nonatomic) NSString *idA; // @synthesize idA=_idA;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000007e313
- (unsigned long long)hash;	// IMP=0x000000000007e244
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007e0b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007de39
- (void)copyTo:(id)arg1;	// IMP=0x000000000007dcd6
- (void)writeTo:(id)arg1;	// IMP=0x000000000007db05
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007daf8
- (id)dictionaryRepresentation;	// IMP=0x000000000007d2eb
- (id)description;	// IMP=0x000000000007d23c
- (id)nluRequestRulesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007d20e
- (unsigned long long)nluRequestRulesCount;	// IMP=0x000000000007d1f1
- (void)addNluRequestRules:(id)arg1;	// IMP=0x000000000007d187
- (void)clearNluRequestRules;	// IMP=0x000000000007d16a
@property(readonly, nonatomic) _Bool hasValue;
@property(nonatomic) _Bool hasCreationTimestampMsSinceUnixEpoch;
@property(nonatomic) _Bool hasEnabled;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (int)StringAsOverrideNamespace:(id)arg1;	// IMP=0x000000000007d00f
- (id)overrideNamespaceAsString:(int)arg1;	// IMP=0x000000000007cfa9
@property(nonatomic) _Bool hasOverrideNamespace;
@property(nonatomic) int overrideNamespace; // @synthesize overrideNamespace=_overrideNamespace;
@property(readonly, nonatomic) _Bool hasIdA;

@end

