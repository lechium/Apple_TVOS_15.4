//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDRefreshStatusOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0040000000061a3a
+ (id)requiredEntitlements;	// IMP=0x001000000006186d
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000006183b
- (void)runWithRequest:(id)arg1;	// IMP=0x004000000006188d
- (_Bool)runOnMainThread;	// IMP=0x0010000000061885
- (unsigned long long)queueGroup;	// IMP=0x001000000006187a

@end

