//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString;

@interface SAGetContextConfiguration <SAServerBoundCommand>
{
}

+ (id)getContextConfigurationWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000041114
+ (id)getContextConfiguration;	// IMP=0x0000000000041102
- (_Bool)requiresResponse;	// IMP=0x000000000004111e
- (id)encodedClassName;	// IMP=0x00000000000410f5
- (id)groupIdentifier;	// IMP=0x00000000000410e1

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

