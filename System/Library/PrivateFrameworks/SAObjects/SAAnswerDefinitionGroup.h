//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAAnswerDefinitionGroup <SAAceSerializable>
{
}

+ (id)definitionGroupWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003bce4
+ (id)definitionGroup;	// IMP=0x000000000003bcd2
@property(copy, nonatomic) NSArray *synonyms;
@property(copy, nonatomic) NSString *partOfSpeech;
@property(copy, nonatomic) NSString *origin;
@property(copy, nonatomic) NSArray *definitionEntries;
- (id)encodedClassName;	// IMP=0x000000000003bcc5
- (id)groupIdentifier;	// IMP=0x000000000003bcb1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
