//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface SASettingSetSpokenNotificationsEnabled
{
}

+ (id)setSpokenNotificationsEnabledWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000017f4c
+ (id)setSpokenNotificationsEnabled;	// IMP=0x0000000000017f3a
- (_Bool)requiresResponse;	// IMP=0x0000000000017f9a
@property(copy, nonatomic) NSDate *timeToReEnable;
@property(copy, nonatomic) NSString *appBundleId;
- (id)encodedClassName;	// IMP=0x0000000000017f2d
- (id)groupIdentifier;	// IMP=0x0000000000017f19

@end

