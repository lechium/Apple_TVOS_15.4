//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@interface AWDHomeKitResetConfiguration : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _errorCode;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
        unsigned int errorCode:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000370c8d
- (unsigned long long)hash;	// IMP=0x0000000000370c47
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000370b94
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000370b15
- (void)copyTo:(id)arg1;	// IMP=0x0000000000370ab9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000370a47
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000370a3a
- (id)dictionaryRepresentation;	// IMP=0x0000000000370942
- (id)description;	// IMP=0x0000000000370893
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasTimestamp;

@end

