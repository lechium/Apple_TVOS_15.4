//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/TIKeyboardFeatureSpecialization.h>

@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization
{
}

- (_Bool)canHandleKeyHitTest;	// IMP=0x000000000000cce3
- (id)nonstopPunctuationCharacters;	// IMP=0x000000000000cc71
- (id)replacementForDoubleSpace;	// IMP=0x000000000000cc64
- (id)wordSeparator;	// IMP=0x000000000000cc57
- (_Bool)supportsLearning;	// IMP=0x000000000000cc4f
- (_Bool)shouldExtendPriorWord;	// IMP=0x000000000000cc47
- (id)keyboardBehaviors;	// IMP=0x000000000000cc2e

@end

