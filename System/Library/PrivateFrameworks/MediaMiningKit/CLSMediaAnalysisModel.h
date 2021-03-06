//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSSignalModel-Protocol.h>

@class NSString;

@interface CLSMediaAnalysisModel : NSObject <CLSSignalModel>
{
    unsigned long long _version;	// 8 = 0x8
    unsigned long long _minimumSupportedVersion;	// 16 = 0x10
    double _videoScoreThresholdToBeInteresting;	// 24 = 0x18
    double _videoScoreThresholdToNotBeJunk;	// 32 = 0x20
    double _autoplaySuggestionScoreThresholdToBeInteresting;	// 40 = 0x28
    double _autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset;	// 48 = 0x30
}

+ (unsigned long long)latestVersion;	// IMP=0x00000000000a40d0
+ (unsigned long long)currentAnalyzerVersion;	// IMP=0x00000000000a40be
+ (id)name;	// IMP=0x00000000000a40b1
+ (id)modelWithVersion:(unsigned long long)arg1;	// IMP=0x00000000000a4082
@property(readonly) double autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset; // @synthesize autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset=_autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset;
@property(readonly) double autoplaySuggestionScoreThresholdToBeInteresting; // @synthesize autoplaySuggestionScoreThresholdToBeInteresting=_autoplaySuggestionScoreThresholdToBeInteresting;
@property(readonly) double videoScoreThresholdToNotBeJunk; // @synthesize videoScoreThresholdToNotBeJunk=_videoScoreThresholdToNotBeJunk;
@property(readonly) double videoScoreThresholdToBeInteresting; // @synthesize videoScoreThresholdToBeInteresting=_videoScoreThresholdToBeInteresting;
@property(readonly) unsigned long long minimumSupportedVersion; // @synthesize minimumSupportedVersion=_minimumSupportedVersion;
@property(readonly) unsigned long long version; // @synthesize version=_version;
- (void)setupVersion33;	// IMP=0x00000000000a401e
- (id)initWithVersion:(unsigned long long)arg1;	// IMP=0x00000000000a3fbb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

