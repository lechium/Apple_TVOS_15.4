//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString, SAAceClientState;

@interface SAGetSingleClientStateFailed <SAServerBoundCommand>
{
}

+ (id)getSingleClientStateFailedWithReason:(id)arg1;	// IMP=0x0000000000016ab5
+ (id)getSingleClientStateFailedWithErrorCode:(long long)arg1;	// IMP=0x0000000000016a7f
+ (id)getSingleClientStateFailedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000016a75
+ (id)getSingleClientStateFailed;	// IMP=0x0000000000016a63
- (_Bool)requiresResponse;	// IMP=0x0000000000016bf4
@property(retain, nonatomic) SAAceClientState *attemptedClientState;
@property(copy, nonatomic) NSString *reason;
@property(nonatomic) long long errorCode;
- (id)initWithReason:(id)arg1;	// IMP=0x0000000000016b3c
- (id)initWithErrorCode:(long long)arg1;	// IMP=0x0000000000016b02
- (id)encodedClassName;	// IMP=0x0000000000016a56
- (id)groupIdentifier;	// IMP=0x0000000000016a42

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

