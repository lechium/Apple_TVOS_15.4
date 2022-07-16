//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSArray, UIDictationInterpretation;

__attribute__((visibility("hidden")))
@interface UIDictationInterpretationGroup : NSObject <NSSecureCoding>
{
    _Bool _isLowConfidence;	// 8 = 0x8
    NSArray *_interpretations;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000009087f4
- (void).cxx_destruct;	// IMP=0x0000000000908b05
@property(readonly, nonatomic) _Bool isLowConfidence; // @synthesize isLowConfidence=_isLowConfidence;
@property(readonly, nonatomic) NSArray *interpretations; // @synthesize interpretations=_interpretations;
- (id)description;	// IMP=0x0000000000908a32
@property(readonly, nonatomic) UIDictationInterpretation *bestInterpretation;
@property(readonly, nonatomic) double bestConfidenceScore;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009089a5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009088aa
- (id)initWithInterpretations:(id)arg1 isLowConfidence:(_Bool)arg2;	// IMP=0x0000000000908886
- (id)initWithInterpretations:(id)arg1;	// IMP=0x00000000009087fc

@end

