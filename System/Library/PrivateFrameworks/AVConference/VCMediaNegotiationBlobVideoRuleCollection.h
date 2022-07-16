//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobVideoRuleCollection : PBCodable <NSCopying>
{
    unsigned int _formats;	// 8 = 0x8
    unsigned int _formatsExt1;	// 12 = 0xc
    int _operation;	// 16 = 0x10
    unsigned int _preferredFormat;	// 20 = 0x14
    unsigned int _preferredFormatExt1;	// 24 = 0x18
    int _transport;	// 28 = 0x1c
    struct {
        unsigned int formatsExt1:1;
        unsigned int preferredFormat:1;
        unsigned int preferredFormatExt1:1;
    } _has;	// 32 = 0x20
}

@property(nonatomic) unsigned int preferredFormatExt1; // @synthesize preferredFormatExt1=_preferredFormatExt1;
@property(nonatomic) unsigned int formatsExt1; // @synthesize formatsExt1=_formatsExt1;
@property(nonatomic) unsigned int preferredFormat; // @synthesize preferredFormat=_preferredFormat;
@property(nonatomic) unsigned int formats; // @synthesize formats=_formats;
@property(nonatomic) int operation; // @synthesize operation=_operation;
@property(nonatomic) int transport; // @synthesize transport=_transport;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002f4a83
- (unsigned long long)hash;	// IMP=0x00000000002f49e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002f490b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002f484e
- (void)copyTo:(id)arg1;	// IMP=0x00000000002f47cf
- (void)writeTo:(id)arg1;	// IMP=0x00000000002f4701
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002f46f4
- (id)dictionaryRepresentation;	// IMP=0x00000000002f4093
- (id)description;	// IMP=0x00000000002f3ff9
@property(nonatomic) _Bool hasPreferredFormatExt1;
@property(nonatomic) _Bool hasFormatsExt1;
@property(nonatomic) _Bool hasPreferredFormat;
- (int)StringAsOperation:(id)arg1;	// IMP=0x00000000002f3ed4
- (id)operationAsString:(int)arg1;	// IMP=0x00000000002f3e94
- (int)StringAsTransport:(id)arg1;	// IMP=0x00000000002f3e48
- (id)transportAsString:(int)arg1;	// IMP=0x00000000002f3e08

@end
