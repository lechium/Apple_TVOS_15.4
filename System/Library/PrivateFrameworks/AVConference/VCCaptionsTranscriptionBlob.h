//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCCaptionsTranscriptionBlob : PBCodable <NSCopying>
{
    NSMutableArray *_segments;	// 8 = 0x8
    unsigned int _updateNumber;	// 16 = 0x10
    unsigned int _utteranceNumber;	// 20 = 0x14
    _Bool _isFinal;	// 24 = 0x18
    _Bool _isLocal;	// 25 = 0x19
    struct {
        unsigned int isFinal:1;
        unsigned int isLocal:1;
    } _has;	// 28 = 0x1c
}

+ (Class)segmentsType;	// IMP=0x00000000000e97a5
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(nonatomic) _Bool isFinal; // @synthesize isFinal=_isFinal;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) unsigned int updateNumber; // @synthesize updateNumber=_updateNumber;
@property(nonatomic) unsigned int utteranceNumber; // @synthesize utteranceNumber=_utteranceNumber;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000ea527
- (unsigned long long)hash;	// IMP=0x00000000000ea49c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ea3b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ea1b9
- (void)copyTo:(id)arg1;	// IMP=0x00000000000ea0cf
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e9f5d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e9f50
- (id)dictionaryRepresentation;	// IMP=0x00000000000e9850
- (id)description;	// IMP=0x00000000000e97b6
- (id)segmentsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e9788
- (unsigned long long)segmentsCount;	// IMP=0x00000000000e976b
- (void)addSegments:(id)arg1;	// IMP=0x00000000000e971e
- (void)clearSegments;	// IMP=0x00000000000e9701
@property(nonatomic) _Bool hasIsFinal;
@property(nonatomic) _Bool hasIsLocal;
- (void)dealloc;	// IMP=0x00000000000e9610

@end

