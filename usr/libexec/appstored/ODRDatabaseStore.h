//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ODRDatabaseStore
{
}

+ (_Bool)createOrMigrateStoreUsingSchema:(id)arg1;	// IMP=0x0040000000042c44
+ (id)storeDescriptor;	// IMP=0x0010000000042bcf
+ (id)sharedStore;	// IMP=0x0010000000042b0c
- (void)modifyUsingTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0040000000042e28

@end

