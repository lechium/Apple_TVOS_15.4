//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, SAAnswerSpeakableAnswer;

@interface SAAnswerDirectAnswer <SAAceSerializable>
{
}

+ (id)directAnswerWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003c153
+ (id)directAnswer;	// IMP=0x000000000003c141
@property(retain, nonatomic) SAAnswerSpeakableAnswer *speakableAnswer;
@property(copy, nonatomic) NSString *answer;
- (id)encodedClassName;	// IMP=0x000000000003c134
- (id)groupIdentifier;	// IMP=0x000000000003c120

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

