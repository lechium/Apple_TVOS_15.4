//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupResolveIntentSlot
{
}

+ (id)resolveIntentSlotWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000220e9
+ (id)resolveIntentSlot;	// IMP=0x00000000000220d7
- (_Bool)mutatingCommand;	// IMP=0x0000000000022183
- (_Bool)requiresResponse;	// IMP=0x000000000002217b
@property(copy, nonatomic) NSString *jsonEncodedIntent;
@property(copy, nonatomic) NSNumber *intentSlotValueIndex;
@property(copy, nonatomic) NSString *intentSlotKeyPath;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
- (id)encodedClassName;	// IMP=0x00000000000220ca
- (id)groupIdentifier;	// IMP=0x00000000000220b6

@end

