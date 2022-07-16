//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@interface AWDHomeKitCameraStreamMessaging : PBCodable <NSCopying>
{
    unsigned int _receivedConnSetup;	// 8 = 0x8
    unsigned int _receivedNegotiationRequest;	// 12 = 0xc
    unsigned int _receivedStartRequest;	// 16 = 0x10
    unsigned int _sentConnSetup;	// 20 = 0x14
    unsigned int _sentNegotiationRequest;	// 24 = 0x18
    unsigned int _sentNegotiationResponse;	// 28 = 0x1c
    unsigned int _sentStartRequest;	// 32 = 0x20
    unsigned int _sentStartResponse;	// 36 = 0x24
    struct {
        unsigned int receivedConnSetup:1;
        unsigned int receivedNegotiationRequest:1;
        unsigned int receivedStartRequest:1;
        unsigned int sentConnSetup:1;
        unsigned int sentNegotiationRequest:1;
        unsigned int sentNegotiationResponse:1;
        unsigned int sentStartRequest:1;
        unsigned int sentStartResponse:1;
    } _has;	// 40 = 0x28
}

@property(nonatomic) unsigned int receivedConnSetup; // @synthesize receivedConnSetup=_receivedConnSetup;
@property(nonatomic) unsigned int sentConnSetup; // @synthesize sentConnSetup=_sentConnSetup;
@property(nonatomic) unsigned int sentStartResponse; // @synthesize sentStartResponse=_sentStartResponse;
@property(nonatomic) unsigned int sentStartRequest; // @synthesize sentStartRequest=_sentStartRequest;
@property(nonatomic) unsigned int receivedStartRequest; // @synthesize receivedStartRequest=_receivedStartRequest;
@property(nonatomic) unsigned int sentNegotiationResponse; // @synthesize sentNegotiationResponse=_sentNegotiationResponse;
@property(nonatomic) unsigned int sentNegotiationRequest; // @synthesize sentNegotiationRequest=_sentNegotiationRequest;
@property(nonatomic) unsigned int receivedNegotiationRequest; // @synthesize receivedNegotiationRequest=_receivedNegotiationRequest;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000370113
- (unsigned long long)hash;	// IMP=0x0000000000370029
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000036fe87
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000036fd75
- (void)copyTo:(id)arg1;	// IMP=0x000000000036fc86
- (void)writeTo:(id)arg1;	// IMP=0x000000000036fb5b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000036fb4e
- (id)dictionaryRepresentation;	// IMP=0x000000000036f851
- (id)description;	// IMP=0x000000000036f7a2
@property(nonatomic) _Bool hasReceivedConnSetup;
@property(nonatomic) _Bool hasSentConnSetup;
@property(nonatomic) _Bool hasSentStartResponse;
@property(nonatomic) _Bool hasSentStartRequest;
@property(nonatomic) _Bool hasReceivedStartRequest;
@property(nonatomic) _Bool hasSentNegotiationResponse;
@property(nonatomic) _Bool hasSentNegotiationRequest;
@property(nonatomic) _Bool hasReceivedNegotiationRequest;

@end

