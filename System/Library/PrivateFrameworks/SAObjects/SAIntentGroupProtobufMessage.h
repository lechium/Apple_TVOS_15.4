//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSData, NSString;

@interface SAIntentGroupProtobufMessage <SAAceSerializable>
{
}

+ (id)protobufMessageWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000f46f
+ (id)protobufMessage;	// IMP=0x000000000000f45d
@property(copy, nonatomic) NSString *typeName;
@property(copy, nonatomic) NSString *debugString;
@property(copy, nonatomic) NSData *data;
- (id)encodedClassName;	// IMP=0x000000000000f450
- (id)groupIdentifier;	// IMP=0x000000000000f43c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

