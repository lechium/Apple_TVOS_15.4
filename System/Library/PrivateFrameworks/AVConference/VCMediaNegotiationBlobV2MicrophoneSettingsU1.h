//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2MicrophoneSettingsU1 : PBCodable <NSCopying>
{
    unsigned int _payloads;	// 8 = 0x8
    unsigned int _rtpSSRC;	// 12 = 0xc
    struct {
        unsigned int payloads:1;
        unsigned int rtpSSRC:1;
    } _has;	// 16 = 0x10
}

+ (int)payloadFromFlag:(int)arg1;	// IMP=0x00000000002f1499
+ (int)flagFromPayload:(int)arg1;	// IMP=0x00000000002f145c
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002df6f2
- (unsigned long long)hash;	// IMP=0x00000000002df6ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002df62d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002df5b0
- (void)copyTo:(id)arg1;	// IMP=0x00000000002df571
- (void)writeTo:(id)arg1;	// IMP=0x00000000002df507
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002df4fa
- (id)dictionaryRepresentation;	// IMP=0x00000000002df1bd
- (id)description;	// IMP=0x00000000002df123
@property(nonatomic) _Bool hasPayloads;
@property(nonatomic) unsigned int payloads; // @synthesize payloads=_payloads;
@property(nonatomic) _Bool hasRtpSSRC;
- (unsigned int)payloadBitmapWithAudioPayloads:(id)arg1;	// IMP=0x00000000002f14b8
- (void)printWithLogFile:(void *)arg1 prefix:(id)arg2;	// IMP=0x00000000002f11b3
@property(readonly, nonatomic) NSSet *audioPayloads;
- (id)initWithSSRC:(unsigned int)arg1 audioPayloads:(id)arg2;	// IMP=0x00000000002f0f98

@end

