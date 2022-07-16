//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@interface NRPBSize : PBCodable <NSCopying>
{
    float _height;	// 8 = 0x8
    float _width;	// 12 = 0xc
}

@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001e500
- (unsigned long long)hash;	// IMP=0x000000000001e311
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e27a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e214
- (void)copyTo:(id)arg1;	// IMP=0x000000000001e1ec
- (void)writeTo:(id)arg1;	// IMP=0x000000000001e184
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001e177
- (id)dictionaryRepresentation;	// IMP=0x000000000001dea2
- (id)description;	// IMP=0x000000000001ddf3

@end
