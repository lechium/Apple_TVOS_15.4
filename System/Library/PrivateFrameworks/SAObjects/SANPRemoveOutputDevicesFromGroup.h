//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SANPRemoveOutputDevicesFromGroup
{
}

+ (id)removeOutputDevicesFromGroupWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003ce3a
+ (id)removeOutputDevicesFromGroup;	// IMP=0x000000000003ce28
- (_Bool)mutatingCommand;	// IMP=0x000000000003ce90
- (_Bool)requiresResponse;	// IMP=0x000000000003ce88
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(copy, nonatomic) NSString *groupID;
- (id)encodedClassName;	// IMP=0x000000000003ce1b
- (id)groupIdentifier;	// IMP=0x000000000003ce07

@end

