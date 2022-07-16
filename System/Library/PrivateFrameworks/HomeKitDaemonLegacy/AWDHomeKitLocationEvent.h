//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@interface AWDHomeKitLocationEvent : PBCodable <NSCopying>
{
    _Bool _notifyOnEntry;	// 8 = 0x8
    _Bool _notifyOnExit;	// 9 = 0x9
    struct {
        unsigned int notifyOnEntry:1;
        unsigned int notifyOnExit:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool notifyOnExit; // @synthesize notifyOnExit=_notifyOnExit;
@property(nonatomic) _Bool notifyOnEntry; // @synthesize notifyOnEntry=_notifyOnEntry;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002df644
- (unsigned long long)hash;	// IMP=0x00000000002df5fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002df530
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002df4b3
- (void)copyTo:(id)arg1;	// IMP=0x00000000002df459
- (void)writeTo:(id)arg1;	// IMP=0x00000000002df3e6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002df3d9
- (id)dictionaryRepresentation;	// IMP=0x00000000002df2e0
- (id)description;	// IMP=0x00000000002df231
@property(nonatomic) _Bool hasNotifyOnExit;
@property(nonatomic) _Bool hasNotifyOnEntry;

@end

