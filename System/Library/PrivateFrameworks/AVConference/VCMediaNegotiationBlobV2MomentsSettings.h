//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2MomentsSettings : PBCodable <NSCopying>
{
    unsigned int _capabilities;	// 8 = 0x8
    unsigned int _supportedCodecs;	// 12 = 0xc
    struct {
        unsigned int capabilities:1;
        unsigned int supportedCodecs:1;
    } _has;	// 16 = 0x10
}

+ (unsigned char)multiwayCapabilitiesWithBlobCapabilities:(unsigned int)arg1;	// IMP=0x00000000003545bc
+ (unsigned char)capabilitiesWithBlobCapabilities:(unsigned int)arg1;	// IMP=0x00000000003545a1
+ (unsigned int)blobCapabilitiesWithOneToOneCapabilities:(unsigned char)arg1 multiwayCapabilities:(unsigned char)arg2;	// IMP=0x0000000000354573
+ (id)imageTypesWithSupportedCodecs:(unsigned int)arg1;	// IMP=0x0000000000354513
+ (id)videoCodecsWithSupportedCodecs:(unsigned int)arg1;	// IMP=0x00000000003544b3
+ (unsigned int)supportedCodecsWithVideoCodecs:(id)arg1 imageTypes:(id)arg2;	// IMP=0x00000000003542c0
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000b3bc8
- (unsigned long long)hash;	// IMP=0x00000000000b3b84
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b3b03
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b3a86
- (void)copyTo:(id)arg1;	// IMP=0x00000000000b3a47
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b39dd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b39d0
- (id)dictionaryRepresentation;	// IMP=0x00000000000b3693
- (id)description;	// IMP=0x00000000000b35f9
@property(nonatomic) _Bool hasSupportedCodecs;
@property(nonatomic) unsigned int supportedCodecs; // @synthesize supportedCodecs=_supportedCodecs;
@property(nonatomic) _Bool hasCapabilities;
@property(nonatomic) unsigned int capabilities; // @synthesize capabilities=_capabilities;
- (void)appendFieldName:(id)arg1 codecs:(unsigned int)arg2 outString:(id)arg3;	// IMP=0x00000000003545da
- (void)printWithLogFile:(void *)arg1 prefix:(id)arg2;	// IMP=0x00000000003540c5
@property(readonly, nonatomic) unsigned char capabilitiesMultiway;
@property(readonly, nonatomic) unsigned char capabilitiesOneToOne;
@property(readonly, nonatomic) NSSet *imageTypes;
@property(readonly, nonatomic) NSSet *videoCodecs;
- (id)initWithVideoCodecs:(id)arg1 imageTypes:(id)arg2 capabilitiesOneToOne:(unsigned char)arg3 capabilitiesMultiway:(unsigned char)arg4;	// IMP=0x0000000000353e18

@end

