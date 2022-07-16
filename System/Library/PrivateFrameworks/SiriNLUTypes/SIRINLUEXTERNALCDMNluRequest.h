//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, SIRINLUEXTERNALRequestID, SIRINLUEXTERNALTurnInput;

@interface SIRINLUEXTERNALCDMNluRequest : PBRequest <NSCopying>
{
    SIRINLUEXTERNALTurnInput *_currentTurnInput;	// 8 = 0x8
    NSMutableArray *_previousTurnInputs;	// 16 = 0x10
    SIRINLUEXTERNALRequestID *_requestId;	// 24 = 0x18
}

+ (Class)previousTurnInputsType;	// IMP=0x00000000000d6673
- (void).cxx_destruct;	// IMP=0x00000000000d746d
@property(retain, nonatomic) NSMutableArray *previousTurnInputs; // @synthesize previousTurnInputs=_previousTurnInputs;
@property(retain, nonatomic) SIRINLUEXTERNALTurnInput *currentTurnInput; // @synthesize currentTurnInput=_currentTurnInput;
@property(retain, nonatomic) SIRINLUEXTERNALRequestID *requestId; // @synthesize requestId=_requestId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d721e
- (unsigned long long)hash;	// IMP=0x00000000000d71b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d70b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d6eb3
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d6da9
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d6c40
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d6c33
- (id)dictionaryRepresentation;	// IMP=0x00000000000d6733
- (id)description;	// IMP=0x00000000000d6684
- (id)previousTurnInputsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d6656
- (unsigned long long)previousTurnInputsCount;	// IMP=0x00000000000d6639
- (void)addPreviousTurnInputs:(id)arg1;	// IMP=0x00000000000d65cf
- (void)clearPreviousTurnInputs;	// IMP=0x00000000000d65b2
@property(readonly, nonatomic) _Bool hasCurrentTurnInput;
@property(readonly, nonatomic) _Bool hasRequestId;

@end
