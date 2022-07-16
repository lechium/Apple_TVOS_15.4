//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface SIRINLUINTERNALNluRequestRule : PBCodable <NSCopying>
{
    NSString *_deviceType;	// 8 = 0x8
    NSString *_idA;	// 16 = 0x10
    NSString *_localeId;	// 24 = 0x18
    NSMutableArray *_turnInputRules;	// 32 = 0x20
    NSString *_userInterfaceIdiom;	// 40 = 0x28
}

+ (Class)turnInputRulesType;	// IMP=0x00000000000824fd
- (void).cxx_destruct;	// IMP=0x00000000000834c4
@property(retain, nonatomic) NSMutableArray *turnInputRules; // @synthesize turnInputRules=_turnInputRules;
@property(retain, nonatomic) NSString *userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(retain, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) NSString *localeId; // @synthesize localeId=_localeId;
@property(retain, nonatomic) NSString *idA; // @synthesize idA=_idA;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000083234
- (unsigned long long)hash;	// IMP=0x0000000000083191
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000083031
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000082dde
- (void)copyTo:(id)arg1;	// IMP=0x0000000000082c94
- (void)writeTo:(id)arg1;	// IMP=0x0000000000082af1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000082ae4
- (id)dictionaryRepresentation;	// IMP=0x00000000000825bd
- (id)description;	// IMP=0x000000000008250e
- (id)turnInputRulesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000824e0
- (unsigned long long)turnInputRulesCount;	// IMP=0x00000000000824c3
- (void)addTurnInputRules:(id)arg1;	// IMP=0x0000000000082459
- (void)clearTurnInputRules;	// IMP=0x000000000008243c
@property(readonly, nonatomic) _Bool hasUserInterfaceIdiom;
@property(readonly, nonatomic) _Bool hasDeviceType;
@property(readonly, nonatomic) _Bool hasLocaleId;
@property(readonly, nonatomic) _Bool hasIdA;

@end
