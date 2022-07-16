//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface TRANSITPbTransitMac : PBCodable
{
    unsigned long long _mac;	// 8 = 0x8
    struct {
        unsigned int mac:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long mac; // @synthesize mac=_mac;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000058afd1
- (unsigned long long)hash;	// IMP=0x001000000058afa9
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000058af4a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000058aee6
- (void)copyTo:(id)arg1;	// IMP=0x001000000058aec0
- (void)writeTo:(id)arg1;	// IMP=0x001000000058ae94
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000058ae87
- (id)dictionaryRepresentation;	// IMP=0x001000000058ac38
- (id)description;	// IMP=0x001000000058abc1
@property(nonatomic) _Bool hasMac;

@end
