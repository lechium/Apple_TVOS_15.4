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

- (void).cxx_destruct;	// IMP=0x000000000068d578
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (id)keyTransferAgent;	// IMP=0x000000000068d50f
- (_Bool)supportsKeyTransferServer;	// IMP=0x000000000068d4c4
- (id)queryDatabaseOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000068d4ab
- (unsigned long long)dataMigrationOptions;	// IMP=0x000000000068d49d
- (_Bool)isKeychainSyncEnabled;	// IMP=0x000000000068d452
- (_Bool)isControllerKeyAvailable;	// IMP=0x000000000068d3ea
- (id)initWithHomeManager:(id)arg1;	// IMP=0x000000000068d383

@end

