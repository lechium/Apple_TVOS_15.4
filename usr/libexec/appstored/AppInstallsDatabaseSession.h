//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;
@protocol AppInstallPipeline;

@interface AppInstallsDatabaseSession : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    id <AppInstallPipeline> _pipeline;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000230d89
@property __weak id <AppInstallPipeline> pipeline; // @synthesize pipeline=_pipeline;
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (long long)totalPendingRestoreDownloadSize;	// IMP=0x0010000000230c51
- (id)installForExternalID:(id)arg1;	// IMP=0x0010000000230bad
- (id)activeRestoreInstallMatchingCoordinatorID:(id)arg1 orMatchingBundleID:(id)arg2;	// IMP=0x00100000002308ce
- (id)activeInstallMatchingCoordinatorID:(id)arg1 orMatchingBundleID:(id)arg2;	// IMP=0x00100000002305ef
- (id)activeInstallMatchingBundleID:(id)arg1;	// IMP=0x0010000000230468
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000002303fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

