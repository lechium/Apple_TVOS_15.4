//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupResolveIntentSlotCompleted <SAServerBoundCommand>
{
}

+ (id)resolveIntentSlotCompletedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000418c6
+ (id)resolveIntentSlotCompleted;	// IMP=0x00000000000418b4
- (_Bool)requiresResponse;	// IMP=0x0000000000041914
@property(copy, nonatomic) NSString *jsonEncodedIntentSlotResolutionResult;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intentSlotResolutionResult;
- (id)encodedClassName;	// IMP=0x00000000000418a7
- (id)groupIdentifier;	// IMP=0x0000000000041893

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

