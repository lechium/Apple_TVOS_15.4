//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreEmbeddedSpeechRecognition/NSCopying-Protocol.h>

@class CESRCorrectionPronunciation, NSString;

@interface CESRUserCorrectionsProfileEntry : PBCodable <NSCopying>
{
    unsigned int _alternativesCorrectionsCount;	// 8 = 0x8
    NSString *_correctedText;	// 16 = 0x10
    CESRCorrectionPronunciation *_pronunciationData;	// 24 = 0x18
    unsigned int _spellingCorrectionsCount;	// 32 = 0x20
    unsigned int _tap2editCorrectionsCount;	// 36 = 0x24
    struct {
        unsigned int alternativesCorrectionsCount:1;
        unsigned int spellingCorrectionsCount:1;
        unsigned int tap2editCorrectionsCount:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000034bb0
@property(nonatomic) unsigned int alternativesCorrectionsCount; // @synthesize alternativesCorrectionsCount=_alternativesCorrectionsCount;
@property(nonatomic) unsigned int tap2editCorrectionsCount; // @synthesize tap2editCorrectionsCount=_tap2editCorrectionsCount;
@property(nonatomic) unsigned int spellingCorrectionsCount; // @synthesize spellingCorrectionsCount=_spellingCorrectionsCount;
@property(retain, nonatomic) CESRCorrectionPronunciation *pronunciationData; // @synthesize pronunciationData=_pronunciationData;
@property(retain, nonatomic) NSString *correctedText; // @synthesize correctedText=_correctedText;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000034870
- (unsigned long long)hash;	// IMP=0x0000000000034660
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000342d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000340f0
- (void)copyTo:(id)arg1;	// IMP=0x0000000000033f40
- (void)writeTo:(id)arg1;	// IMP=0x0000000000033de0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000033d80
- (id)dictionaryRepresentation;	// IMP=0x0000000000032ec0
- (id)description;	// IMP=0x0000000000032df0
@property(nonatomic) _Bool hasAlternativesCorrectionsCount;
@property(nonatomic) _Bool hasTap2editCorrectionsCount;
@property(nonatomic) _Bool hasSpellingCorrectionsCount;
@property(readonly, nonatomic) _Bool hasPronunciationData;
@property(readonly, nonatomic) _Bool hasCorrectedText;

@end

