//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface AWDCallHistoryMissingCloudChangeToken : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    CDStruct_b5306035 _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002b7df
- (unsigned long long)hash;	// IMP=0x000000000002b7b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002b724
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b6c0
- (void)copyTo:(id)arg1;	// IMP=0x000000000002b69a
- (void)writeTo:(id)arg1;	// IMP=0x000000000002b66e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002b661
- (id)dictionaryRepresentation;	// IMP=0x000000000002b3e7
- (id)description;	// IMP=0x000000000002b338
@property(nonatomic) _Bool hasTimestamp;

@end

