//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>
#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SARemembersGetAppMatchesForIntentResponse <SAServerBoundCommand, SAAceSerializable>
{
}

+ (id)getAppMatchesForIntentResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000038639
+ (id)getAppMatchesForIntentResponse;	// IMP=0x0000000000038627
- (_Bool)requiresResponse;	// IMP=0x00000000000386a9
@property(copy, nonatomic) NSArray *matchingBundleIDs;
@property(copy, nonatomic) NSString *matchStatus;
@property(copy, nonatomic) NSString *jsonMatchSignals;
- (id)encodedClassName;	// IMP=0x000000000003861a
- (id)groupIdentifier;	// IMP=0x0000000000038606

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

