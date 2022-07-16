//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/WFDatabaseProvider-Protocol.h>

@class NSString, WFDatabase;
@protocol OS_dispatch_queue;

@interface VCDaemonDatabaseProvider : NSObject <WFDatabaseProvider>
{
    WFDatabase *_database;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000057e1d
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)isShortcutsAppInstalled;	// IMP=0x0000000000057dca
- (void)migrateVoiceShortcutsToShortcutsInDatabase:(id)arg1;	// IMP=0x0000000000057c81
- (id)databaseWithError:(id *)arg1;	// IMP=0x0000000000057b06
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
- (_Bool)migrateDatabasesToShortcutsFolderIfNeeded;	// IMP=0x000000000005783b
- (id)init;	// IMP=0x0000000000057783

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
