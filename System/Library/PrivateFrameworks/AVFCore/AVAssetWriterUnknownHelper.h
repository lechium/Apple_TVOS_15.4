//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVAssetWriterUnknownHelper
{
    short _alternateGroupID;	// 24 = 0x18
}

- (void)cancelWriting;	// IMP=0x000000000008fbbd
- (void)startWriting;	// IMP=0x000000000008fad2
- (void)addInputGroup:(id)arg1;	// IMP=0x000000000008f71e
- (_Bool)canAddInputGroup:(id)arg1;	// IMP=0x000000000008f70a
- (_Bool)_canAddInputGroup:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000008f3ca
- (void)addInput:(id)arg1;	// IMP=0x000000000008f2b2
- (_Bool)canAddInput:(id)arg1;	// IMP=0x000000000008f29e
- (_Bool)_canAddInput:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000008f1e2
- (void)setSinglePassMediaDataSize:(long long)arg1;	// IMP=0x000000000008f1b1
- (void)setSinglePassFileSize:(long long)arg1;	// IMP=0x000000000008f180
- (void)setProducesCombinableFragments:(_Bool)arg1;	// IMP=0x000000000008f151
- (void)setInitialMovieFragmentSequenceNumber:(long long)arg1;	// IMP=0x000000000008f120
- (void)setOutputFileTypeProfile:(id)arg1;	// IMP=0x000000000008f0ef
- (void)setInitialSegmentStartTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000008f0c4
- (void)setPreferredOutputSegmentInterval:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000008f099
- (void)setPreferredRate:(float)arg1;	// IMP=0x000000000008f064
- (void)setPreferredVolume:(float)arg1;	// IMP=0x000000000008f02f
- (void)setPreferredTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000008f004
- (void)setMovieTimeScale:(int)arg1;	// IMP=0x000000000008efd5
- (void)setMetadata:(id)arg1;	// IMP=0x000000000008efa4
- (void)setDirectoryForTemporaryFiles:(id)arg1;	// IMP=0x000000000008ef73
- (void)setShouldOptimizeForNetworkUse:(_Bool)arg1;	// IMP=0x000000000008ef44
- (void)setOverallDurationHint:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000008ef19
- (void)setMovieFragmentInterval:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000008eeee
- (void)setDelegate:(id)arg1;	// IMP=0x000000000008eebd
- (long long)status;	// IMP=0x000000000008eeb5
- (void)setDefaultPropertyValuesToConfigurationState:(id)arg1 outputURL:(id)arg2 fileType:(id)arg3;	// IMP=0x000000000008eccd
- (id)initWithURL:(id)arg1 fileType:(id)arg2;	// IMP=0x000000000008ec62
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x000000000008eadc

@end

