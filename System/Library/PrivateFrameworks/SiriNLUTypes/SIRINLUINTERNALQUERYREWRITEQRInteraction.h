//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface SIRINLUINTERNALQUERYREWRITEQRInteraction : PBCodable <NSCopying>
{
    unsigned long long _startTimestamp;	// 8 = 0x8
    NSString *_locale;	// 16 = 0x10
    NSMutableArray *_originalUtterances;	// 24 = 0x18
    NSMutableArray *_siriResponses;	// 32 = 0x20
    _Bool _tap2edit;	// 40 = 0x28
    CDStruct_0e452375 _has;	// 44 = 0x2c
}

+ (Class)siriResponseType;	// IMP=0x00000000000d7693
+ (Class)originalUtterancesType;	// IMP=0x00000000000d75c1
+ (id)options;	// IMP=0x00000000000d74b0
- (void).cxx_destruct;	// IMP=0x00000000000d8d9d
@property(nonatomic) unsigned long long startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) _Bool tap2edit; // @synthesize tap2edit=_tap2edit;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSMutableArray *siriResponses; // @synthesize siriResponses=_siriResponses;
@property(retain, nonatomic) NSMutableArray *originalUtterances; // @synthesize originalUtterances=_originalUtterances;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d8a69
- (unsigned long long)hash;	// IMP=0x00000000000d89b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d8857
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d84b7
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d82f6
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d8079
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d806c
- (id)dictionaryRepresentation;	// IMP=0x00000000000d77f7
- (id)description;	// IMP=0x00000000000d7748
@property(nonatomic) _Bool hasStartTimestamp;
@property(nonatomic) _Bool hasTap2edit;
@property(readonly, nonatomic) _Bool hasLocale;
- (id)siriResponseAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d7676
- (unsigned long long)siriResponsesCount;	// IMP=0x00000000000d7659
- (void)addSiriResponse:(id)arg1;	// IMP=0x00000000000d75ef
- (void)clearSiriResponses;	// IMP=0x00000000000d75d2
- (id)originalUtterancesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d75a4
- (unsigned long long)originalUtterancesCount;	// IMP=0x00000000000d7587
- (void)addOriginalUtterances:(id)arg1;	// IMP=0x00000000000d751d
- (void)clearOriginalUtterances;	// IMP=0x00000000000d7500

@end

