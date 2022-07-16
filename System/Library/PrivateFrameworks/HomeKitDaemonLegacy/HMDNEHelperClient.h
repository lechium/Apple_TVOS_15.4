//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDNEHelperClient-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSArray, NSString;

@interface HMDNEHelperClient : NSObject <HMFLogging, HMDNEHelperClient>
{
    NSArray *_cachedEntries;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0000000000092792
- (void).cxx_destruct;	// IMP=0x00000000000926ce
- (void)cacheClearUUIDs;	// IMP=0x00000000000926c8
- (id)cacheCopySigningIdentifierForProcessIdentifier:(id)arg1;	// IMP=0x00000000000926c0
- (id)cacheCopyAppUUIDForSigningIdentifier:(id)arg1 executablePath:(id)arg2;	// IMP=0x00000000000926b8
- (id)_signingIdentifierWithProcessId:(id)arg1;	// IMP=0x00000000000924f9
- (void)_addIdentifiers:(id)arg1 signingId:(id)arg2;	// IMP=0x0000000000092316
- (id)init;	// IMP=0x00000000000922c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
