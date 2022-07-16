//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSDictionary, NSString;

@interface SAIntentGroupAppAuthorizationStatusResponse <SAServerBoundCommand>
{
}

+ (id)appAuthorizationStatusResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000007e80
+ (id)appAuthorizationStatusResponse;	// IMP=0x0000000000007e6e
- (_Bool)requiresResponse;	// IMP=0x0000000000007eac
@property(copy, nonatomic) NSDictionary *appAuthorizationStatusMap;
- (id)encodedClassName;	// IMP=0x0000000000007e61
- (id)groupIdentifier;	// IMP=0x0000000000007e4d

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
