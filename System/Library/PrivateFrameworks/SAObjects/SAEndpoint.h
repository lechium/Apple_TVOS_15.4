//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSDictionary, NSString;

@interface SAEndpoint <SAAceSerializable>
{
}

+ (id)endpointWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003495b
+ (id)endpoint;	// IMP=0x0000000000034949
@property(nonatomic) _Bool supportsAuthentication;
@property(copy, nonatomic) NSString *providerId;
@property(copy, nonatomic) NSDictionary *operations;
- (id)encodedClassName;	// IMP=0x000000000003493c
- (id)groupIdentifier;	// IMP=0x0000000000034928

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

