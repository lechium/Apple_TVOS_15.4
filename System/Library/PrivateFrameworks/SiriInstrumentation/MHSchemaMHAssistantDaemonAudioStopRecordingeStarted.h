//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHAssistantDaemonAudioStopRecordingeStarted
{
    int _stopReason;	// 8 = 0x8
    struct {
        unsigned int stopReason:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) int stopReason; // @synthesize stopReason=_stopReason;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001d805a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001d7f9c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d7e09
- (unsigned long long)hash;	// IMP=0x00000000001d7dde
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d7d39
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d7d0e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d7d01
- (void)deleteStopReason;	// IMP=0x00000000001d7cd7
@property(nonatomic) _Bool hasStopReason;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032b4fc

@end

