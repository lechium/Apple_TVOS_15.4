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

@class NSString;

@interface SNEstimateSpeechDistanceRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000805d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008094
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008065
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToSpeechDistanceRequest:(id)arg1;	// IMP=0x000000000000804d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007fd2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007f99
- (id)createAnalyzerWithError:(id *)arg1;	// IMP=0x0000000000007f80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

