//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgEventDisplayAnalytic : PBCodable <NSCopying>
{
    double _meanImageSpacing;	// 8 = 0x8
    int _displayActionTrigger;	// 16 = 0x10
    int _displayEvent;	// 20 = 0x14
    unsigned int _movementDistance;	// 24 = 0x18
    unsigned int _renderedImageCount;	// 28 = 0x1c
    unsigned int _requestedImageCount;	// 32 = 0x20
    unsigned int _requiredResourcesAvailable;	// 36 = 0x24
    unsigned int _totalTime;	// 40 = 0x28
    struct {
        unsigned int has_meanImageSpacing:1;
        unsigned int has_displayActionTrigger:1;
        unsigned int has_displayEvent:1;
        unsigned int has_movementDistance:1;
        unsigned int has_renderedImageCount:1;
        unsigned int has_requestedImageCount:1;
        unsigned int has_requiredResourcesAvailable:1;
        unsigned int has_totalTime:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001354b0e
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000135528d
- (unsigned long long)hash;	// IMP=0x0000000001355056
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001354e84
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001354d6e
- (void)copyTo:(id)arg1;	// IMP=0x0000000001354c57
- (void)writeTo:(id)arg1;	// IMP=0x0000000001354b2a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001354b1b
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001354aae
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001354a9c
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000134abf7
- (id)jsonRepresentation;	// IMP=0x000000000134abe8
- (id)dictionaryRepresentation;	// IMP=0x000000000134616a
- (id)description;	// IMP=0x00000000013460bb
- (int)StringAsDisplayEvent:(id)arg1;	// IMP=0x0000000001346059
- (id)displayEventAsString:(int)arg1;	// IMP=0x0000000001346004
@property(nonatomic) _Bool hasDisplayEvent;
@property(nonatomic) int displayEvent;
@property(nonatomic) _Bool hasMeanImageSpacing;
@property(nonatomic) double meanImageSpacing;
@property(nonatomic) _Bool hasMovementDistance;
@property(nonatomic) unsigned int movementDistance;
@property(nonatomic) _Bool hasRenderedImageCount;
@property(nonatomic) unsigned int renderedImageCount;
@property(nonatomic) _Bool hasRequestedImageCount;
@property(nonatomic) unsigned int requestedImageCount;
@property(nonatomic) _Bool hasTotalTime;
@property(nonatomic) unsigned int totalTime;
@property(nonatomic) _Bool hasRequiredResourcesAvailable;
@property(nonatomic) unsigned int requiredResourcesAvailable;
- (int)StringAsDisplayActionTrigger:(id)arg1;	// IMP=0x000000000133d400
- (id)displayActionTriggerAsString:(int)arg1;	// IMP=0x0000000001338d39
@property(nonatomic) _Bool hasDisplayActionTrigger;
@property(nonatomic) int displayActionTrigger;

@end

