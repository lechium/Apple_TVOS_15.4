//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SALocalSearchMapItem;

@interface SALocalSearchShareLocationWithExternalAccessory
{
}

+ (id)shareLocationWithExternalAccessoryWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000036de4
+ (id)shareLocationWithExternalAccessory;	// IMP=0x0000000000036dd2
- (_Bool)requiresResponse;	// IMP=0x0000000000036e32
@property(nonatomic) _Bool useNavigationDestination;
@property(retain, nonatomic) SALocalSearchMapItem *mapItem;
- (id)encodedClassName;	// IMP=0x0000000000036dc5
- (id)groupIdentifier;	// IMP=0x0000000000036db1

@end

