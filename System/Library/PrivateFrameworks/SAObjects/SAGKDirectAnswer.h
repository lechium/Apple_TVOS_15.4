//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, SAGKSpeakableAnswer;

@interface SAGKDirectAnswer <SAAceSerializable>
{
}

+ (id)directAnswerWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003effc
+ (id)directAnswer;	// IMP=0x000000000003efea
@property(retain, nonatomic) SAGKSpeakableAnswer *speakableAnswer;
@property(copy, nonatomic) NSString *confidenceLevel;
@property(copy, nonatomic) NSString *answer;
- (id)encodedClassName;	// IMP=0x000000000003efdd
- (id)groupIdentifier;	// IMP=0x000000000003efc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

