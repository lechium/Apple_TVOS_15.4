//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@interface AWDHomeKitDurationEvent : PBCodable <NSCopying>
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000000088310c
- (unsigned long long)hash;	// IMP=0x0000000000883104
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008830bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000883086
- (void)copyTo:(id)arg1;	// IMP=0x0000000000883080
- (void)writeTo:(id)arg1;	// IMP=0x000000000088307a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000088306d
- (id)dictionaryRepresentation;	// IMP=0x0000000000883054
- (id)description;	// IMP=0x0000000000882fa5

@end
