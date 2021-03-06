//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString;

@interface SASyncDeepSyncVerificationResult <SAServerBoundCommand>
{
}

+ (id)deepSyncVerificationResultWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000022b65
+ (id)deepSyncVerificationResult;	// IMP=0x0000000000022b53
- (_Bool)requiresResponse;	// IMP=0x0000000000022bd5
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *result;
@property(copy, nonatomic) NSString *key;
- (id)encodedClassName;	// IMP=0x0000000000022b46
- (id)groupIdentifier;	// IMP=0x0000000000022b32

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

