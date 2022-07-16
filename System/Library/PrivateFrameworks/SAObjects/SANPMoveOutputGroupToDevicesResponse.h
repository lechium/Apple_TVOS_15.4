//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString;

@interface SANPMoveOutputGroupToDevicesResponse <SAServerBoundCommand>
{
}

+ (id)moveOutputGroupToDevicesResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000017e5c
+ (id)moveOutputGroupToDevicesResponse;	// IMP=0x0000000000017e4a
- (_Bool)requiresResponse;	// IMP=0x0000000000017e88
@property(copy, nonatomic) NSString *routeResponse;
- (id)encodedClassName;	// IMP=0x0000000000017e3d
- (id)groupIdentifier;	// IMP=0x0000000000017e29

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
