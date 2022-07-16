//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager;

@interface HMDCloudManagerDataSource : HMFObject
{
    HMDHomeManager *_homeManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000070a816
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (id)keyTransferAgent;	// IMP=0x000000000070a7ad
- (_Bool)supportsKeyTransferServer;	// IMP=0x000000000070a762
- (id)queryDatabaseOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000070a749
- (unsigned long long)dataMigrationOptions;	// IMP=0x000000000070a73b
- (_Bool)isKeychainSyncEnabled;	// IMP=0x000000000070a6f0
- (_Bool)isControllerKeyAvailable;	// IMP=0x000000000070a688
- (id)initWithHomeManager:(id)arg1;	// IMP=0x000000000070a621

@end

