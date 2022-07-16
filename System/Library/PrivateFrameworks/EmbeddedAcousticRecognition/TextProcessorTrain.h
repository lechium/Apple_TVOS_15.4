//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/TextProcessor-Protocol.h>

@class NSMutableArray, NSString, _EARLMTKaldiVocab;

__attribute__((visibility("hidden")))
@interface TextProcessorTrain : NSObject <TextProcessor>
{
    NSMutableArray *_text;	// 8 = 0x8
    _EARLMTKaldiVocab *_vocab;	// 16 = 0x10
    long long *_numValidTokens;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001904ff
- (long long)numberTokens;	// IMP=0x00000000001904f2
- (unsigned long long)numberSamples;	// IMP=0x00000000001904dc
- (id)textSequence;	// IMP=0x00000000001904ce
- (void)shuffleSamples;	// IMP=0x000000000019042f
- (void)addTokenizedText:(id)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000001900a2
- (void)addText:(id)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000018fd4d
- (void)addText:(id)arg1;	// IMP=0x000000000018faeb
- (id)initWithVocab:(id)arg1;	// IMP=0x000000000018fa5e
- (id)init;	// IMP=0x000000000018fa50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
