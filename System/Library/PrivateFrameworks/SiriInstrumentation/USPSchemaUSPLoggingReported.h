//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface USPSchemaUSPLoggingReported
{
    NSArray *_metrics;	// 8 = 0x8
    NSArray *_sessionInfoItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002fec64
@property(copy, nonatomic) NSArray *sessionInfoItems; // @synthesize sessionInfoItems=_sessionInfoItems;
@property(copy, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002fe7f4
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002fe736
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002fe21f
- (unsigned long long)hash;	// IMP=0x00000000002fe1d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002fdf15
- (void)writeTo:(id)arg1;	// IMP=0x00000000002fdd04
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002fda78
- (id)sessionInfoItemsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002fda5b
- (unsigned long long)sessionInfoItemsCount;	// IMP=0x00000000002fda3e
- (void)addSessionInfoItems:(id)arg1;	// IMP=0x00000000002fd9c4
- (void)deleteSessionInfoItems;	// IMP=0x00000000002fd9b2
- (void)clearSessionInfoItems;	// IMP=0x00000000002fd995
- (id)metricsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002fd978
- (unsigned long long)metricsCount;	// IMP=0x00000000002fd95b
- (void)addMetrics:(id)arg1;	// IMP=0x00000000002fd8e1
- (void)deleteMetrics;	// IMP=0x00000000002fd8cf
- (void)clearMetrics;	// IMP=0x00000000002fd8b2
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033d944
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033d90c

@end

