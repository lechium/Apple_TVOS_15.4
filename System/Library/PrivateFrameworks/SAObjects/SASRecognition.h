//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SASRecognition <SAAceSerializable>
{
}

+ (id)recognitionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000172e2
+ (id)recognition;	// IMP=0x00000000000172d0
@property(copy, nonatomic) NSArray *utterances;
@property(nonatomic) long long sentenceConfidence;
@property(copy, nonatomic) NSArray *phrases;
- (id)encodedClassName;	// IMP=0x00000000000172c3
- (id)groupIdentifier;	// IMP=0x00000000000172af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

