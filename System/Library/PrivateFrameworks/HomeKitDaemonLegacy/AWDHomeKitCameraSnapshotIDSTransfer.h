//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@interface AWDHomeKitCameraSnapshotIDSTransfer : PBCodable <NSCopying>
{
    unsigned int _receivedImage;	// 8 = 0x8
    unsigned int _sentImage;	// 12 = 0xc
    struct {
        unsigned int receivedImage:1;
        unsigned int sentImage:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int receivedImage; // @synthesize receivedImage=_receivedImage;
@property(nonatomic) unsigned int sentImage; // @synthesize sentImage=_sentImage;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000201752
- (unsigned long long)hash;	// IMP=0x000000000020170e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020165b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002015de
- (void)copyTo:(id)arg1;	// IMP=0x0000000000201584
- (void)writeTo:(id)arg1;	// IMP=0x0000000000201513
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000201506
- (id)dictionaryRepresentation;	// IMP=0x000000000020140f
- (id)description;	// IMP=0x0000000000201360
@property(nonatomic) _Bool hasReceivedImage;
@property(nonatomic) _Bool hasSentImage;

@end

