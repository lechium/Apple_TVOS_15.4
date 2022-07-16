//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/NSCopying-Protocol.h>
#import <SoundAnalysis/NSSecureCoding-Protocol.h>
#import <SoundAnalysis/SNAnalyzerCreating-Protocol.h>
#import <SoundAnalysis/SNRequest-Protocol.h>

@class NSString, SNAudioOffsetEstimator;

@interface SNEstimateAudioOffsetRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>
{
    SNAudioOffsetEstimator *_detector;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000065192
- (void).cxx_destruct;	// IMP=0x00000000000651cf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000651c9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006519a
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToEstimateAudioOffsetRequest:(id)arg1;	// IMP=0x0000000000065182
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000065107
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000650ce
- (id)createAnalyzerWithError:(id *)arg1;	// IMP=0x0000000000064fd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

