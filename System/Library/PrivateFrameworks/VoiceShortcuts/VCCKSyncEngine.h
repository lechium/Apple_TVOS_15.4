//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSyncEngine.h>

@protocol VCCKSyncEngineDataSource;

@interface VCCKSyncEngine : CKSyncEngine
{
}

- (void)didReceiveDatabaseNotification:(id)arg1;	// IMP=0x00000000000111ae

// Remaining properties
@property(readonly, nonatomic) __weak id <VCCKSyncEngineDataSource> dataSource; // @dynamic dataSource;

@end

