//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAAnswerLinkedAnswerGroup <SAAceSerializable>
{
}

+ (id)linkedAnswerGroupWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003c69f
+ (id)linkedAnswerGroup;	// IMP=0x000000000003c68d
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *linkedAnswers;
- (id)encodedClassName;	// IMP=0x000000000003c680
- (id)groupIdentifier;	// IMP=0x000000000003c66c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

