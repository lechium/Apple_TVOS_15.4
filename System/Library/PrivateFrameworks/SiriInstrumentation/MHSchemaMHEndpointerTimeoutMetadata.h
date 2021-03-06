//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHEndpointerTimeoutMetadata
{
    _Bool _isTimeout;	// 8 = 0x8
    unsigned long long _timeoutThresholdInNs;	// 16 = 0x10
    struct {
        unsigned int isTimeout:1;
        unsigned int timeoutThresholdInNs:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) unsigned long long timeoutThresholdInNs; // @synthesize timeoutThresholdInNs=_timeoutThresholdInNs;
@property(nonatomic) _Bool isTimeout; // @synthesize isTimeout=_isTimeout;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001fa21f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001fa161
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001f9fc2
- (unsigned long long)hash;	// IMP=0x00000000001f9f7d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f9e8e
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f9e1b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f9e0e
- (void)deleteTimeoutThresholdInNs;	// IMP=0x00000000001f9de4
@property(nonatomic) _Bool hasTimeoutThresholdInNs;
- (void)deleteIsTimeout;	// IMP=0x00000000001f9d70
@property(nonatomic) _Bool hasIsTimeout;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032d486

@end

