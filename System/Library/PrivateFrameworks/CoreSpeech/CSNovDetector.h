//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSNovDetector : NSObject
{
}

- (id)getOptionValue:(id)arg1;	// IMP=0x00000000000c518e
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;	// IMP=0x00000000000c5186
- (id)getAnalyzedResultForPhraseId:(unsigned int)arg1;	// IMP=0x00000000000c517e
- (unsigned int)numResultsAvailable;	// IMP=0x00000000000c5176
- (void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x00000000000c5170
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x00000000000c516a
- (void)resetBest;	// IMP=0x00000000000c5164
- (void)reset;	// IMP=0x00000000000c515e
- (void)dealloc;	// IMP=0x00000000000c512f
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;	// IMP=0x00000000000c5100

@end

