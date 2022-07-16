//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <KeychainCircle/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OTSupportOctagonMessage : PBCodable <NSCopying>
{
    int _supported;	// 8 = 0x8
    CDStruct_495da94c _has;	// 12 = 0xc
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000969f
- (unsigned long long)hash;	// IMP=0x0000000000009674
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000095e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009580
- (void)copyTo:(id)arg1;	// IMP=0x000000000000955c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000009531
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000009524
- (id)dictionaryRepresentation;	// IMP=0x0000000000009464
- (id)description;	// IMP=0x00000000000093b5
- (int)StringAsSupported:(id)arg1;	// IMP=0x0000000000009323
- (id)supportedAsString:(int)arg1;	// IMP=0x00000000000092bd
@property(nonatomic) _Bool hasSupported;
@property(nonatomic) int supported; // @synthesize supported=_supported;

@end

