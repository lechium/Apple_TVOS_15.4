//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAKnowledgeSetLinkedData <SAAceSerializable>
{
}

+ (id)setLinkedDataWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002deef
+ (id)setLinkedData;	// IMP=0x000000000002dedd
- (_Bool)requiresResponse;	// IMP=0x000000000002df37
@property(copy, nonatomic) NSArray *linkedData;
- (id)encodedClassName;	// IMP=0x000000000002ded0
- (id)groupIdentifier;	// IMP=0x000000000002debc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

