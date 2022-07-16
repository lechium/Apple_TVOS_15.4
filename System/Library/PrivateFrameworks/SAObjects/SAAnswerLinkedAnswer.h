//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, NSURL;

@interface SAAnswerLinkedAnswer <SAAceSerializable>
{
}

+ (id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003c4dd
+ (id)linkedAnswer;	// IMP=0x000000000003c4cb
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSURL *link;
@property(copy, nonatomic) NSURL *image;
@property(copy, nonatomic) NSString *descriptionText;
- (id)encodedClassName;	// IMP=0x000000000003c4be
- (id)groupIdentifier;	// IMP=0x000000000003c4aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

