//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSubjectMotionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    VCPProtoTimeRange *_timeRange;	// 8 = 0x8
    _Bool _hasAction;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001fbc53
- (void).cxx_destruct;	// IMP=0x00000000001fbc40
@property(nonatomic) _Bool hasAction; // @synthesize hasAction=_hasAction;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001fbb93
- (unsigned long long)hash;	// IMP=0x00000000001fbb54
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fbaa0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001fba1a
- (void)copyTo:(id)arg1;	// IMP=0x00000000001fb9c0
- (void)writeTo:(id)arg1;	// IMP=0x00000000001fb960
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001fb953
- (id)dictionaryRepresentation;	// IMP=0x00000000001fb617
- (id)description;	// IMP=0x00000000001fb568
- (id)exportToLegacyDictionary;	// IMP=0x00000000001fbdbe

@end
