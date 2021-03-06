//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/NSCopying-Protocol.h>
#import <SoundAnalysis/NSSecureCoding-Protocol.h>
#import <SoundAnalysis/SNConfidenceProviding-Protocol.h>
#import <SoundAnalysis/SNConfidenceProvidingWritable-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProviding-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProvidingWritable-Protocol.h>

@class NSString;

@interface SNAudioOffsetResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNTimeRangeProviding, SNConfidenceProviding>
{
    double _confidence;	// 8 = 0x8
    double _offset;	// 16 = 0x10
    CDStruct_e83c9415 _timeRange;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004ea68
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004eba0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004ea70
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToAudioOffsetResult:(id)arg1;	// IMP=0x000000000004e7a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004e73f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004e67e
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

