//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDCallHistoryDatabaseSaveError : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _domain;	// 16 = 0x10
    unsigned int _error;	// 20 = 0x14
    NSString *_table;	// 24 = 0x18
    CDStruct_6e486683 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000021af0
@property(retain, nonatomic) NSString *table; // @synthesize table=_table;
@property(nonatomic) unsigned int error; // @synthesize error=_error;
@property(nonatomic) unsigned int domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000219fe
- (unsigned long long)hash;	// IMP=0x000000000002197b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000021870
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000217a7
- (void)copyTo:(id)arg1;	// IMP=0x000000000002170b
- (void)writeTo:(id)arg1;	// IMP=0x000000000002165d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000021650
- (id)dictionaryRepresentation;	// IMP=0x000000000002116e
- (id)description;	// IMP=0x00000000000210bf
@property(readonly, nonatomic) _Bool hasTable;
@property(nonatomic) _Bool hasError;
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasTimestamp;

@end
