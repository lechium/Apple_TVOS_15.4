//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PBSMutableAppInfoConfiguration
{
}

@property(copy, nonatomic) NSString *kioskAppBundleIdentifier; // @dynamic kioskAppBundleIdentifier;
@property(copy, nonatomic) NSArray *managedHomeScreenLayout; // @dynamic managedHomeScreenLayout;
@property(copy, nonatomic) NSArray *provisionedAppBundleIdentifiers; // @dynamic provisionedAppBundleIdentifiers;
@property(nonatomic) unsigned long long configurationMode; // @dynamic configurationMode;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000038360
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000038310
- (id)_initWithSettings:(id)arg1;	// IMP=0x0000000000038250

@end
