//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDFetchAppsOperation
{
}

+ (void)_fetchAppsForBundleIdentifier:(id)arg1 type:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x004000000004ab6b
+ (void)fetchAppsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000049cac
+ (id)requiredEntitlements;	// IMP=0x0010000000049b9c
+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000049b6a
- (void)runWithRequest:(id)arg1;	// IMP=0x0040000000049ba9

@end

