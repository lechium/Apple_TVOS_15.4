//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>
#import <SAObjects/SASetSingleClientState-Protocol.h>

@class NSString, SALocalSearchGeoClientState;

@interface SALocalSearchSetGeoClientState <SAServerBoundCommand, SASetSingleClientState>
{
}

+ (id)setGeoClientStateWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000272bf
+ (id)setGeoClientState;	// IMP=0x00000000000272ad
- (_Bool)requiresResponse;	// IMP=0x00000000000272eb
@property(retain, nonatomic) SALocalSearchGeoClientState *clientState;
- (id)encodedClassName;	// IMP=0x00000000000272a0
- (id)groupIdentifier;	// IMP=0x000000000002728c

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

