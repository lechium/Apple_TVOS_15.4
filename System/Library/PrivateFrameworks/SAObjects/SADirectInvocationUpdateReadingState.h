//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAClientStateServerBoundCommand-Protocol.h>

@class NSString;

@interface SADirectInvocationUpdateReadingState <SAClientStateServerBoundCommand>
{
}

- (_Bool)requiresResponse;	// IMP=0x0000000000014dc4
- (id)encodedClassName;	// IMP=0x0000000000014db7
- (id)groupIdentifier;	// IMP=0x0000000000014da3

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

