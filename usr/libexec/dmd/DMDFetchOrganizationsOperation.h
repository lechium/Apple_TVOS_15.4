//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDFetchOrganizationsOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x004000000004c523
+ (id)requiredEntitlements;	// IMP=0x001000000004c3e7
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000004c3b5
- (void)runWithRequest:(id)arg1;	// IMP=0x004000000004c3ff
- (unsigned long long)queueGroup;	// IMP=0x001000000004c3f4

@end
