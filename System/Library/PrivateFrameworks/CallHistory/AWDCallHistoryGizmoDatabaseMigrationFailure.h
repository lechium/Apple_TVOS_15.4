//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface AWDCallHistoryGizmoDatabaseMigrationFailure : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    CDStruct_b5306035 _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000380af
- (unsigned long long)hash;	// IMP=0x0000000000038087
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000037ff4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000037f90
- (void)copyTo:(id)arg1;	// IMP=0x0000000000037f6a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000037f3e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000037f31
- (id)dictionaryRepresentation;	// IMP=0x0000000000037cb7
- (id)description;	// IMP=0x0000000000037c08
@property(nonatomic) _Bool hasTimestamp;

@end

