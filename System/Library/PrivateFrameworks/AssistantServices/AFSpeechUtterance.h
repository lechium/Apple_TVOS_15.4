//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AFSpeechUtterance : NSObject <NSSecureCoding>
{
    NSArray *_interpretationIndices;	// 8 = 0x8
    long long _confidenceScore;	// 16 = 0x10
    long long _source;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000057ddd
- (void).cxx_destruct;	// IMP=0x00000000000581a1
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property(copy, nonatomic) NSArray *interpretationIndices; // @synthesize interpretationIndices=_interpretationIndices;
- (id)dictionaryRepresentation;	// IMP=0x000000000005805a
- (id)initWithInterpretationIndices:(id)arg1 confidenceScore:(long long)arg2;	// IMP=0x0000000000057fdc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000057e6f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000057de5
- (id)description;	// IMP=0x0000000000057ce8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000057c52
- (unsigned long long)hash;	// IMP=0x0000000000057be3

@end

