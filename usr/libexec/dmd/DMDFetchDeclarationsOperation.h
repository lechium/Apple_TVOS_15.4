//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDFetchDeclarationsOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x004000000004bc53
+ (id)requiredEntitlements;	// IMP=0x001000000004ba98
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000004ba66
- (void)runWithRequest:(id)arg1;	// IMP=0x004000000004bab8
- (_Bool)runOnMainThread;	// IMP=0x001000000004bab0
- (unsigned long long)queueGroup;	// IMP=0x001000000004baa5

@end
