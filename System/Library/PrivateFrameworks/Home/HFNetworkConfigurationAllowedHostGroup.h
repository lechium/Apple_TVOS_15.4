//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface HFNetworkConfigurationAllowedHostGroup : NSObject
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _purpose;	// 16 = 0x10
    NSMutableSet *_mutableAddresses;	// 24 = 0x18
    NSMutableSet *_mutableAllowedHosts;	// 32 = 0x20
}

+ (id)groupsForNetworkConfigurationProfiles:(id)arg1;	// IMP=0x0000000000113c3a
- (void).cxx_destruct;	// IMP=0x0000000000114135
@property(retain, nonatomic) NSMutableSet *mutableAllowedHosts; // @synthesize mutableAllowedHosts=_mutableAllowedHosts;
@property(retain, nonatomic) NSMutableSet *mutableAddresses; // @synthesize mutableAddresses=_mutableAddresses;
@property(nonatomic) unsigned long long purpose; // @synthesize purpose=_purpose;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)addAllowedHost:(id)arg1;	// IMP=0x0000000000113f2c
@property(readonly, copy, nonatomic) NSString *purposeLocalizedDescription;
@property(readonly, copy, nonatomic) NSSet *allowedHosts;
@property(readonly, copy, nonatomic) NSSet *addresses;
- (id)initWithName:(id)arg1;	// IMP=0x0000000000113b6a

@end
