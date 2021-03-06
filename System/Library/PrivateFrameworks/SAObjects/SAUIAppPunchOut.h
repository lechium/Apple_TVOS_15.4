//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, NSURL, SAUIAddViews, SAUIImageResource;

@interface SAUIAppPunchOut
{
}

+ (id)appPunchOutWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000027ac9
+ (id)appPunchOut;	// IMP=0x0000000000027ab7
- (_Bool)mutatingCommand;	// IMP=0x0000000000027d33
- (_Bool)requiresResponse;	// IMP=0x0000000000027d2b
@property(copy, nonatomic) NSArray *themeIcons;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSURL *punchOutUri;
@property(copy, nonatomic) NSString *punchOutName;
@property(copy, nonatomic) NSString *providerId;
@property(copy, nonatomic) NSString *predefinedButtonType;
@property(nonatomic) _Bool launchOverSiri;
@property(copy, nonatomic) NSArray *launchOptions;
@property(copy, nonatomic) NSString *bundleId;
@property(copy, nonatomic) NSURL *appStoreUri;
@property(nonatomic) _Bool appInstalled;
@property(copy, nonatomic) NSDictionary *appIconMap;
@property(retain, nonatomic) SAUIImageResource *appIcon;
@property(copy, nonatomic) NSString *appDisplayName;
@property(nonatomic) _Bool appAvailableInStorefront;
@property(retain, nonatomic) SAUIAddViews *alternativePunchOut;
- (id)encodedClassName;	// IMP=0x0000000000027aaa
- (id)groupIdentifier;	// IMP=0x0000000000027a96

@end

