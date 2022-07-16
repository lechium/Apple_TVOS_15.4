//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <KeychainCircle/NSCopying-Protocol.h>

@class NSData;

@interface KCInitialMessageData : PBCodable <NSCopying>
{
    NSData *_prepareMessage;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000010582
@property(retain, nonatomic) NSData *prepareMessage; // @synthesize prepareMessage=_prepareMessage;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000010539
- (unsigned long long)hash;	// IMP=0x000000000001051c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000010482
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001040a
- (void)copyTo:(id)arg1;	// IMP=0x00000000000103e0
- (void)writeTo:(id)arg1;	// IMP=0x00000000000103bc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000103af
- (id)dictionaryRepresentation;	// IMP=0x0000000000010353
- (id)description;	// IMP=0x00000000000102a4
@property(readonly, nonatomic) _Bool hasPrepareMessage;

@end

