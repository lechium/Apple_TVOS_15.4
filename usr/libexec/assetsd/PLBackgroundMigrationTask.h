//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PLPhotoLibraryBundle;
@protocol OS_xpc_object;

@interface PLBackgroundMigrationTask : NSObject
{
    PLPhotoLibraryBundle *_bundle;	// 8 = 0x8
    NSObject<OS_xpc_object> *_xpcActivity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000c26c
- (_Bool)runTaskWithTransaction:(id)arg1;	// IMP=0x001000000000bf53
- (id)initWithLibraryBundle:(id)arg1 xpcActivity:(id)arg2;	// IMP=0x001000000000beba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

