//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface SASettingShowPassword
{
}

+ (id)showPasswordWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000266f5
+ (id)showPassword;	// IMP=0x00000000000266e3
- (_Bool)requiresResponse;	// IMP=0x0000000000026787
@property(copy, nonatomic) NSString *spokenAppOrWebsiteName;
@property(copy, nonatomic) NSNumber *shouldPromptForAuthentication;
@property(copy, nonatomic) NSString *appOrWebsiteName;
@property(copy, nonatomic) NSString *appBundleId;
- (id)encodedClassName;	// IMP=0x00000000000266d6
- (id)groupIdentifier;	// IMP=0x00000000000266c2

@end

