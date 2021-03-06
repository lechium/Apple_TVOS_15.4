//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/NSCopying-Protocol.h>
#import <SoundAnalysis/NSSecureCoding-Protocol.h>
#import <SoundAnalysis/SNConfidenceProvidingWritable-Protocol.h>

@class NSString;

@interface SNClassification : NSObject <NSCopying, NSSecureCoding, SNConfidenceProvidingWritable>
{
    NSString *_identifier;	// 8 = 0x8
    double _confidence;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000066d83
+ (id)new;	// IMP=0x00000000000669f7
- (void).cxx_destruct;	// IMP=0x0000000000066f42
@property(readonly) double confidence; // @synthesize confidence=_confidence;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000066e5b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000066d8b
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToClassification:(id)arg1;	// IMP=0x0000000000066bc8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000066b61
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000066ae4
- (id)initWithIdentifier:(id)arg1 confidence:(double)arg2;	// IMP=0x0000000000066a6a
- (id)_init;	// IMP=0x0000000000066a3b
- (id)init;	// IMP=0x00000000000669b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

