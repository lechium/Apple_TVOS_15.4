//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SAAppsCheckRestriction
{
}

+ (id)checkRestrictionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000282d9
+ (id)checkRestriction;	// IMP=0x00000000000282c7
- (_Bool)requiresResponse;	// IMP=0x0000000000028327
@property(copy, nonatomic) NSString *launchId;
@property(copy, nonatomic) NSString *executionEnvironment;
- (id)encodedClassName;	// IMP=0x00000000000282ba
- (id)groupIdentifier;	// IMP=0x00000000000282a6

@end

