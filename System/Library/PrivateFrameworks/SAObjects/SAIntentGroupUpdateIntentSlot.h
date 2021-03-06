//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAIntentGroupSetMapLocation-Protocol.h>
#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSNumber, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupUpdateIntentSlot <SAServerBoundCommand, SAIntentGroupSetMapLocation>
{
}

+ (id)updateIntentSlotWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000015fad
+ (id)updateIntentSlot;	// IMP=0x0000000000015f9b
- (_Bool)requiresResponse;	// IMP=0x0000000000016083
@property(retain, nonatomic) SAIntentGroupProtobufMessage *location;
@property(copy, nonatomic) NSString *jsonEncodedIntentSlotResolutionResult;
@property(copy, nonatomic) NSString *intentTypeName;
@property(copy, nonatomic) NSNumber *intentSlotValueIndex;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intentSlotResolutionResult;
@property(copy, nonatomic) NSString *intentSlotKeyPath;
- (id)encodedClassName;	// IMP=0x0000000000015f8e
- (id)groupIdentifier;	// IMP=0x0000000000015f7a

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

