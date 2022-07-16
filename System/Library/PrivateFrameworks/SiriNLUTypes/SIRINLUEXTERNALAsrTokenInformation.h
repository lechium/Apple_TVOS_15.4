//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSString;

@interface SIRINLUEXTERNALAsrTokenInformation : PBCodable <NSCopying>
{
    double _confidenceScore;	// 8 = 0x8
    unsigned int _beginIndex;	// 16 = 0x10
    unsigned int _endIndex;	// 20 = 0x14
    int _endMilliSeconds;	// 24 = 0x18
    NSString *_ipaPhoneSequence;	// 32 = 0x20
    NSString *_phoneSequence;	// 40 = 0x28
    NSString *_postItnText;	// 48 = 0x30
    int _startMilliSeconds;	// 56 = 0x38
    _Bool _addSpaceAfter;	// 60 = 0x3c
    _Bool _removeSpaceAfter;	// 61 = 0x3d
    _Bool _removeSpaceBefore;	// 62 = 0x3e
    struct {
        unsigned int confidenceScore:1;
        unsigned int beginIndex:1;
        unsigned int endIndex:1;
        unsigned int endMilliSeconds:1;
        unsigned int startMilliSeconds:1;
        unsigned int addSpaceAfter:1;
        unsigned int removeSpaceAfter:1;
        unsigned int removeSpaceBefore:1;
    } _has;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000c663
@property(nonatomic) int endMilliSeconds; // @synthesize endMilliSeconds=_endMilliSeconds;
@property(nonatomic) int startMilliSeconds; // @synthesize startMilliSeconds=_startMilliSeconds;
@property(nonatomic) unsigned int endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) unsigned int beginIndex; // @synthesize beginIndex=_beginIndex;
@property(nonatomic) double confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property(nonatomic) _Bool removeSpaceBefore; // @synthesize removeSpaceBefore=_removeSpaceBefore;
@property(nonatomic) _Bool removeSpaceAfter; // @synthesize removeSpaceAfter=_removeSpaceAfter;
@property(nonatomic) _Bool addSpaceAfter; // @synthesize addSpaceAfter=_addSpaceAfter;
@property(retain, nonatomic) NSString *ipaPhoneSequence; // @synthesize ipaPhoneSequence=_ipaPhoneSequence;
@property(retain, nonatomic) NSString *phoneSequence; // @synthesize phoneSequence=_phoneSequence;
@property(retain, nonatomic) NSString *postItnText; // @synthesize postItnText=_postItnText;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000c40d
- (unsigned long long)hash;	// IMP=0x000000000000c1a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000bf2f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000bd89
- (void)copyTo:(id)arg1;	// IMP=0x000000000000bc24
- (void)writeTo:(id)arg1;	// IMP=0x000000000000ba9d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000ba90
- (id)dictionaryRepresentation;	// IMP=0x000000000000b102
- (id)description;	// IMP=0x000000000000b053
@property(nonatomic) _Bool hasEndMilliSeconds;
@property(nonatomic) _Bool hasStartMilliSeconds;
@property(nonatomic) _Bool hasEndIndex;
@property(nonatomic) _Bool hasBeginIndex;
@property(nonatomic) _Bool hasConfidenceScore;
@property(nonatomic) _Bool hasRemoveSpaceBefore;
@property(nonatomic) _Bool hasRemoveSpaceAfter;
@property(nonatomic) _Bool hasAddSpaceAfter;
@property(readonly, nonatomic) _Bool hasIpaPhoneSequence;
@property(readonly, nonatomic) _Bool hasPhoneSequence;
@property(readonly, nonatomic) _Bool hasPostItnText;

@end
