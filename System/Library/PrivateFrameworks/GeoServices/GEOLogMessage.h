//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMessage : PBCodable <NSCopying>
{
    NSMutableArray *_logMsgEvents;	// 8 = 0x8
    unsigned int _groupRetryCount;	// 16 = 0x10
    int _logMessageType;	// 20 = 0x14
    struct {
        unsigned int has_groupRetryCount:1;
        unsigned int has_logMessageType:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000034d9b6
+ (Class)logMsgEventType;	// IMP=0x000000000034c405
- (void).cxx_destruct;	// IMP=0x000000000034e873
@property(nonatomic) _Bool hasGroupRetryCount;
@property(nonatomic) unsigned int groupRetryCount;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000034e678
- (unsigned long long)hash;	// IMP=0x000000000034e5ed
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000034e4ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000034e2ba
- (void)copyTo:(id)arg1;	// IMP=0x000000000034e1ae
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000034e069
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x000000000034dde4
- (void)writeTo:(id)arg1;	// IMP=0x000000000034dc5a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000034dc4b
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000034d5c8
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000034d5b6
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000034cf27
- (id)jsonRepresentation;	// IMP=0x000000000034cf18
- (id)dictionaryRepresentation;	// IMP=0x000000000034c9df
- (id)description;	// IMP=0x000000000034c930
- (int)StringAsLogMessageType:(id)arg1;	// IMP=0x000000000034c66c
- (id)logMessageTypeAsString:(int)arg1;	// IMP=0x000000000034c47e
@property(nonatomic) _Bool hasLogMessageType;
@property(nonatomic) int logMessageType;
- (id)logMsgEventAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034c3e8
- (unsigned long long)logMsgEventsCount;	// IMP=0x000000000034c3cb
- (void)addLogMsgEvent:(id)arg1;	// IMP=0x000000000034c361
- (void)clearLogMsgEvents;	// IMP=0x000000000034c344
@property(retain, nonatomic) NSMutableArray *logMsgEvents;

@end

