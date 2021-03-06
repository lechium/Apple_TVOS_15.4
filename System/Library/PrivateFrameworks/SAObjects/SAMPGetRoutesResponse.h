//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SAMPGetRoutesResponse <SAServerBoundCommand>
{
}

+ (id)getRoutesResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000f067
+ (id)getRoutesResponse;	// IMP=0x000000000000f055
- (_Bool)requiresResponse;	// IMP=0x000000000000f0af
@property(copy, nonatomic) NSArray *speakers;
- (id)encodedClassName;	// IMP=0x000000000000f048
- (id)groupIdentifier;	// IMP=0x000000000000f034

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

