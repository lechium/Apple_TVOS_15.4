//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMMLogEventObserver-Protocol.h>

@class NSString;

@interface HMDLogEventAnalyzer : HMFObject <HMFLogging, HMMLogEventObserver>
{
}

+ (id)logCategory;	// IMP=0x00000000005c5dc4
+ (id)managedEventCounterRequestGroups;	// IMP=0x00000000005c5d1c
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x00000000005c5e2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

