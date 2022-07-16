//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol MTLDevice;

@interface CRDetectorConfiguration : NSObject
{
    _Bool _cpuOnly;	// 8 = 0x8
    _Bool _logIntermediateResults;	// 9 = 0x9
    _Bool _disableScriptDetection;	// 10 = 0xa
    _Bool _runFullTile;	// 11 = 0xb
    _Bool _runFineScale;	// 12 = 0xc
    _Bool _mergeFullTile;	// 13 = 0xd
    _Bool _useScaleTraversal;	// 14 = 0xe
    float _scriptIDLatinChineseRatioThreshold;	// 16 = 0x10
    int _mergingType;	// 20 = 0x14
    NSURL *_customModelURL;	// 24 = 0x18
    double _tileOverlap;	// 32 = 0x20
    NSString *_prioritization;	// 40 = 0x28
    double _inputLengthLimit;	// 48 = 0x30
    NSObject<MTLDevice> *_metalDevice;	// 56 = 0x38
    double _scoreMapScaleFactor;	// 64 = 0x40
    struct CGSize _tileSize;	// 72 = 0x48
    struct CGSize _minimumInputSize;	// 88 = 0x58
    struct CGSize _maximumInputSize;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000006486f
@property int mergingType; // @synthesize mergingType=_mergingType;
@property(readonly) double scoreMapScaleFactor; // @synthesize scoreMapScaleFactor=_scoreMapScaleFactor;
@property(readonly) float scriptIDLatinChineseRatioThreshold; // @synthesize scriptIDLatinChineseRatioThreshold=_scriptIDLatinChineseRatioThreshold;
@property(readonly) NSObject<MTLDevice> *metalDevice; // @synthesize metalDevice=_metalDevice;
@property(readonly) double inputLengthLimit; // @synthesize inputLengthLimit=_inputLengthLimit;
@property(readonly) struct CGSize maximumInputSize; // @synthesize maximumInputSize=_maximumInputSize;
@property(readonly) struct CGSize minimumInputSize; // @synthesize minimumInputSize=_minimumInputSize;
@property(readonly) NSString *prioritization; // @synthesize prioritization=_prioritization;
@property(readonly) double tileOverlap; // @synthesize tileOverlap=_tileOverlap;
@property(readonly) struct CGSize tileSize; // @synthesize tileSize=_tileSize;
@property _Bool useScaleTraversal; // @synthesize useScaleTraversal=_useScaleTraversal;
@property _Bool mergeFullTile; // @synthesize mergeFullTile=_mergeFullTile;
@property _Bool runFineScale; // @synthesize runFineScale=_runFineScale;
@property _Bool runFullTile; // @synthesize runFullTile=_runFullTile;
@property(readonly) _Bool disableScriptDetection; // @synthesize disableScriptDetection=_disableScriptDetection;
@property(readonly) NSURL *customModelURL; // @synthesize customModelURL=_customModelURL;
@property(readonly) _Bool logIntermediateResults; // @synthesize logIntermediateResults=_logIntermediateResults;
@property(readonly) _Bool cpuOnly; // @synthesize cpuOnly=_cpuOnly;
- (id)initV3DefaultConfig;	// IMP=0x0000000000064617
- (id)initV2DefaultConfig;	// IMP=0x000000000006457b
- (id)initV1DefaultConfig;	// IMP=0x00000000000644df
- (id)initWithImageReaderOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006416e

@end

