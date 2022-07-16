//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAIntentGroupSiriKitRemoteExecution <SAAceSerializable>
{
}

+ (id)siriKitRemoteExecutionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002ed5d
+ (id)siriKitRemoteExecution;	// IMP=0x000000000002ed4b
@property(copy, nonatomic) NSString *runLocation;
@property(copy, nonatomic) NSString *personalDomainAuthenticationMode;
@property(copy, nonatomic) NSString *invocationDeviceAssistantId;
@property(copy, nonatomic) NSString *executionDeviceAssistantId;
- (id)encodedClassName;	// IMP=0x000000000002ed3e
- (id)groupIdentifier;	// IMP=0x000000000002ed2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

