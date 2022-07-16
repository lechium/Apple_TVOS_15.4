//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoFrameInstruction : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    CDStruct_fae3dc92 _homographyParams;	// 8 = 0x8
    long long _epoch;	// 32 = 0x20
    long long _timeValue;	// 40 = 0x28
    int _flags;	// 48 = 0x30
    int _timeScale;	// 52 = 0x34
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001b8490
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(nonatomic) long long epoch; // @synthesize epoch=_epoch;
@property(nonatomic) int timeScale; // @synthesize timeScale=_timeScale;
@property(nonatomic) long long timeValue; // @synthesize timeValue=_timeValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001b8344
- (unsigned long long)hash;	// IMP=0x00000000001b82cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b820b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b8176
- (void)copyTo:(id)arg1;	// IMP=0x00000000001b8089
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b7fcd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b7fc0
- (id)dictionaryRepresentation;	// IMP=0x00000000001b79ae
- (id)description;	// IMP=0x00000000001b78ff
- (void)setHomographyParams:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000001b78e8
- (float)homographyParamAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001b7819
- (void)addHomographyParam:(float)arg1;	// IMP=0x00000000001b7808
- (void)clearHomographyParams;	// IMP=0x00000000001b77f7
@property(readonly, nonatomic) float *homographyParams;
@property(readonly, nonatomic) unsigned long long homographyParamsCount;
- (void)dealloc;	// IMP=0x00000000001b7794
- (id)exportToLegacyDictionary;	// IMP=0x00000000001b86ac

@end
