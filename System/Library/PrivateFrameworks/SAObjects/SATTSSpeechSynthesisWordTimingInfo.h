//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SATTSSpeechSynthesisWordTimingInfo <SAAceSerializable>
{
}

+ (id)speechSynthesisWordTimingInfoWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000026acf
+ (id)speechSynthesisWordTimingInfo;	// IMP=0x0000000000026abd
@property(copy, nonatomic) NSString *word;
@property(nonatomic) float timestamp;
@property(copy, nonatomic) NSNumber *sampleIndex;
@property(nonatomic) long long offset;
@property(nonatomic) long long length;
- (id)encodedClassName;	// IMP=0x0000000000026ab0
- (id)groupIdentifier;	// IMP=0x0000000000026a9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

