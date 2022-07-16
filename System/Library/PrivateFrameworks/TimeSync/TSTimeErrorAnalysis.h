//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSTimeErrorAnalysis : NSObject
{
    _Bool _calculated;	// 8 = 0x8
    long long _numberOfErrors;	// 16 = 0x10
    double *_timestamps;	// 24 = 0x18
    double *_timeErrors;	// 32 = 0x20
    double _averagePeriod;	// 40 = 0x28
    long long _lowestWindowSize;	// 48 = 0x30
    long long _highestWindowSize;	// 56 = 0x38
    long long _calculatedStepSize;	// 64 = 0x40
}

+ (id)additionalScriptPlots:(id)arg1;	// IMP=0x0000000000006d96
+ (id)additionalScriptRecords;	// IMP=0x0000000000006d89
+ (id)additionalScriptInitialization;	// IMP=0x0000000000006d7c
+ (id)plotSize;	// IMP=0x0000000000006d6f
+ (id)plotYLimits:(id)arg1;	// IMP=0x0000000000006d62
+ (id)plotTitle;	// IMP=0x0000000000006d55
+ (id)plotYLabel;	// IMP=0x0000000000006d48
+ (id)variableName;	// IMP=0x0000000000006d3b
+ (id)generatePythonScriptWithOutputPath:(id)arg1 fileName:(id)arg2 titleName:(id)arg3 plotPath:(id)arg4 showPlot:(_Bool)arg5;	// IMP=0x0000000000006a2a
+ (id)keyPathsForValuesAffectingAnalysisLimit;	// IMP=0x000000000000626c
@property(readonly, nonatomic) long long calculatedStepSize; // @synthesize calculatedStepSize=_calculatedStepSize;
@property(readonly, nonatomic) long long highestWindowSize; // @synthesize highestWindowSize=_highestWindowSize;
@property(readonly, nonatomic) long long lowestWindowSize; // @synthesize lowestWindowSize=_lowestWindowSize;
@property(readonly, nonatomic) _Bool calculated; // @synthesize calculated=_calculated;
@property(readonly, nonatomic) double averagePeriod; // @synthesize averagePeriod=_averagePeriod;
@property(readonly, nonatomic) double *timeErrors; // @synthesize timeErrors=_timeErrors;
@property(readonly, nonatomic) double *timestamps; // @synthesize timestamps=_timestamps;
@property(readonly, nonatomic) long long numberOfErrors; // @synthesize numberOfErrors=_numberOfErrors;
- (void)dealloc;	// IMP=0x00000000000069e7
- (_Bool)exportTimeErrorsToDirectoryURL:(id)arg1 withFilename:(id)arg2;	// IMP=0x0000000000006881
- (_Bool)exportTimeErrorsToDirectoryURL:(id)arg1;	// IMP=0x0000000000006868
- (_Bool)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5;	// IMP=0x0000000000006860
- (_Bool)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2;	// IMP=0x0000000000006833
- (_Bool)exportAnalysisToDirectoryURL:(id)arg1;	// IMP=0x000000000000681a
- (void)performAnalysisFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3 withThreadingOption:(long long)arg4;	// IMP=0x0000000000006332
- (void)performAnalysisFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3;	// IMP=0x000000000000631d
- (void)performAnalysisWithThreadingOption:(long long)arg1;	// IMP=0x00000000000062d2
- (void)performAnalysis;	// IMP=0x00000000000062be
- (void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3;	// IMP=0x00000000000062b8
@property(readonly, nonatomic) long long threadingSegment; // @dynamic threadingSegment;
@property(readonly, nonatomic) long long threadingLimit; // @dynamic threadingLimit;
@property(readonly, nonatomic) long long analysisLimit; // @dynamic analysisLimit;
- (id)initWithTimeErrorValues:(id)arg1;	// IMP=0x0000000000005f33

@end
