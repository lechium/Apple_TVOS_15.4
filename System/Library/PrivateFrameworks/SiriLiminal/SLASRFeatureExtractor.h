//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SLASRFeatureExtractor : NSObject
{
}

+ (id)getBestSpeechRecognitionTextFromPackage:(id)arg1;	// IMP=0x0000000000002ff2
+ (id)_getTokenConfidenceForPath:(id)arg1 fromPhrases:(id)arg2;	// IMP=0x0000000000002ab4
+ (id)_getLastTokenForPath:(id)arg1 fromPhrases:(id)arg2;	// IMP=0x0000000000002982
+ (id)extractLRNNFaturesFrom:(id)arg1;	// IMP=0x00000000000027a3
+ (id)extractASRFaturesFrom:(id)arg1;	// IMP=0x0000000000001ecc

@end
