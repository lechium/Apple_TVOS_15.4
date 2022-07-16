//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SBDJobScheduler : NSObject
{
    NSString *_domain;	// 8 = 0x8
    NSNumber *_accountIdentifier;	// 16 = 0x10
}

+ (void)initializeBackgroundTaskAgentWithJobRunner:(CDUnknownBlockType)arg1;	// IMP=0x00400000000149c0
+ (id)jobSchedulerForAccount:(id)arg1 withDomain:(id)arg2;	// IMP=0x001000000001493b
- (void).cxx_destruct;	// IMP=0x0020000000014913
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)removeScheduledJobs;	// IMP=0x00100000000148db
- (void)scheduleUpdateJobWithTimeInterval:(double)arg1 replaceExisting:(_Bool)arg2;	// IMP=0x00100000000148d5

@end

