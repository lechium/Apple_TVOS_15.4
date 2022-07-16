//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSCopying-Protocol.h>

@class NSArray;

@interface _EARSpeechRecognition : NSObject <NSCopying>
{
    NSArray *_tokenSausage;	// 8 = 0x8
    NSArray *_interpretationIndices;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000868ad
@property(readonly, copy, nonatomic) NSArray *interpretationIndices; // @synthesize interpretationIndices=_interpretationIndices;
@property(copy, nonatomic) NSArray *tokenSausage; // @synthesize tokenSausage=_tokenSausage;
- (id)description;	// IMP=0x000000000008685d
- (id)granularizedRecognition;	// IMP=0x000000000008679b
- (pair_a9e0fe82)_tokenPhraseChoiceList;	// IMP=0x00000000000858d3
- (id)oneBest;	// IMP=0x0000000000085704
- (id)nBest;	// IMP=0x000000000008539a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000852ec
- (id)_initWithTokenPhraseChoiceList:(const void *)arg1;	// IMP=0x0000000000084d95
- (id)_initWithNBestList:(const void *)arg1 useHatText:(_Bool)arg2;	// IMP=0x0000000000084d19
- (id)_initWithTokenSausage:(id)arg1 interpretationIndices:(id)arg2;	// IMP=0x0000000000084c39
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000084ba7
- (unsigned long long)hash;	// IMP=0x0000000000084b68

@end

