//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class NSMutableArray, VCPProtoLivePhotoVariationParams;

@interface VCPProtoLivePhotoEffectsRecipe : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    long long _epoch;	// 8 = 0x8
    long long _outputFrameDurValue;	// 16 = 0x10
    VCPProtoLivePhotoVariationParams *_autoloop;	// 24 = 0x18
    VCPProtoLivePhotoVariationParams *_bounce;	// 32 = 0x20
    int _cropRectHeight;	// 40 = 0x28
    int _cropRectWidth;	// 44 = 0x2c
    int _cropRectX;	// 48 = 0x30
    int _cropRectY;	// 52 = 0x34
    int _flags;	// 56 = 0x38
    NSMutableArray *_frameInstructions;	// 64 = 0x40
    VCPProtoLivePhotoVariationParams *_longexposure;	// 72 = 0x48
    int _minVersion;	// 80 = 0x50
    VCPProtoLivePhotoVariationParams *_stabilize;	// 88 = 0x58
    int _stabilizeResult;	// 96 = 0x60
    int _timeScale;	// 100 = 0x64
    int _version;	// 104 = 0x68
    struct {
        unsigned int epoch:1;
        unsigned int flags:1;
    } _has;	// 108 = 0x6c
}

+ (Class)frameInstructionsType;	// IMP=0x00000000001b2a60
+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001b4b94
- (void).cxx_destruct;	// IMP=0x00000000001b4b30
@property(nonatomic) int version; // @synthesize version=_version;
@property(nonatomic) int minVersion; // @synthesize minVersion=_minVersion;
@property(retain, nonatomic) VCPProtoLivePhotoVariationParams *stabilize; // @synthesize stabilize=_stabilize;
@property(retain, nonatomic) VCPProtoLivePhotoVariationParams *longexposure; // @synthesize longexposure=_longexposure;
@property(retain, nonatomic) VCPProtoLivePhotoVariationParams *bounce; // @synthesize bounce=_bounce;
@property(retain, nonatomic) VCPProtoLivePhotoVariationParams *autoloop; // @synthesize autoloop=_autoloop;
@property(retain, nonatomic) NSMutableArray *frameInstructions; // @synthesize frameInstructions=_frameInstructions;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(nonatomic) long long epoch; // @synthesize epoch=_epoch;
@property(nonatomic) int timeScale; // @synthesize timeScale=_timeScale;
@property(nonatomic) int cropRectWidth; // @synthesize cropRectWidth=_cropRectWidth;
@property(nonatomic) int cropRectHeight; // @synthesize cropRectHeight=_cropRectHeight;
@property(nonatomic) int cropRectY; // @synthesize cropRectY=_cropRectY;
@property(nonatomic) int cropRectX; // @synthesize cropRectX=_cropRectX;
@property(nonatomic) long long outputFrameDurValue; // @synthesize outputFrameDurValue=_outputFrameDurValue;
@property(nonatomic) int stabilizeResult; // @synthesize stabilizeResult=_stabilizeResult;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001b4601
- (unsigned long long)hash;	// IMP=0x00000000001b444c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b41cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b3e7f
- (void)copyTo:(id)arg1;	// IMP=0x00000000001b3c9a
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b39e1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b39d4
- (id)dictionaryRepresentation;	// IMP=0x00000000001b2b20
- (id)description;	// IMP=0x00000000001b2a71
- (id)frameInstructionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001b2a43
- (unsigned long long)frameInstructionsCount;	// IMP=0x00000000001b2a26
- (void)addFrameInstructions:(id)arg1;	// IMP=0x00000000001b29bc
- (void)clearFrameInstructions;	// IMP=0x00000000001b299f
@property(nonatomic) _Bool hasFlags;
@property(nonatomic) _Bool hasEpoch;
- (id)exportToLegacyDictionaryFromParam:(id)arg1 withLoopFlavor:(id)arg2;	// IMP=0x00000000001b5cea
- (id)exportToLegacyDictionaryFromFrameInstruction:(id)arg1;	// IMP=0x00000000001b5bac
- (id)exportToLegacyDictionary;	// IMP=0x00000000001b53ff

@end

