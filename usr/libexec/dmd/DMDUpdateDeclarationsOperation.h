//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDUpdateDeclarationsOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x004000000006e44b
+ (id)requiredEntitlements;	// IMP=0x001000000006e308
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000006e2d6
- (void)runWithRequest:(id)arg1;	// IMP=0x004000000006e328
- (_Bool)runOnMainThread;	// IMP=0x001000000006e320
- (unsigned long long)queueGroup;	// IMP=0x001000000006e315

@end
