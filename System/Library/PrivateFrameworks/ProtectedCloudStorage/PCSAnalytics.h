//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Security/SFAnalytics.h>

@interface PCSAnalytics : SFAnalytics
{
}

+ (id)logger;	// IMP=0x0000000000002be6
+ (id)databasePath;	// IMP=0x000000000000299d
- (id)dateOfLastSuccessForEvent:(id)arg1;	// IMP=0x0000000000003124
- (void)noteEvent:(id)arg1;	// IMP=0x00000000000030c5
- (void)logUnrecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3;	// IMP=0x0000000000002ef9
- (void)logRecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3;	// IMP=0x0000000000002d11
- (void)logSuccessForEvent:(id)arg1;	// IMP=0x0000000000002c24

@end

