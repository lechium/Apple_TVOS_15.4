//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDCreateConfigurationOrganizationOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x004000000003701e
+ (id)requiredEntitlements;	// IMP=0x0010000000036ee3
+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000036eb1
- (void)runWithRequest:(id)arg1;	// IMP=0x0040000000036efb
- (unsigned long long)queueGroup;	// IMP=0x0010000000036ef0

@end
