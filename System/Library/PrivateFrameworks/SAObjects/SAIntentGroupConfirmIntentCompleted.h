//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupConfirmIntentCompleted <SAServerBoundCommand>
{
}

+ (id)confirmIntentCompletedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000027d6e
+ (id)confirmIntentCompleted;	// IMP=0x0000000000027d5c
- (_Bool)requiresResponse;	// IMP=0x0000000000027dbc
@property(copy, nonatomic) NSString *jsonEncodedIntentResponse;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;
- (id)encodedClassName;	// IMP=0x0000000000027d4f
- (id)groupIdentifier;	// IMP=0x0000000000027d3b

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
