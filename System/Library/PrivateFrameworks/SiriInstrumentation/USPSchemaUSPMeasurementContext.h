//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface USPSchemaUSPMeasurementContext
{
    NSString *_contextName;	// 8 = 0x8
    int _environment;	// 16 = 0x10
    struct {
        unsigned int environment:1;
    } _has;	// 20 = 0x14
    _Bool _hasContextName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002ff85a
@property(nonatomic) _Bool hasContextName; // @synthesize hasContextName=_hasContextName;
@property(nonatomic) int environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *contextName; // @synthesize contextName=_contextName;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002ff6b7
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002ff5f9
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002ff465
- (unsigned long long)hash;	// IMP=0x00000000002ff412
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ff241
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ff1ae
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ff1a1
- (void)deleteEnvironment;	// IMP=0x00000000002ff177
@property(nonatomic) _Bool hasEnvironment;
- (void)deleteContextName;	// IMP=0x00000000002ff11e
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033dae0

@end
