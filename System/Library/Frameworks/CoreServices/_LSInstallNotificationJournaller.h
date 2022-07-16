//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _LSInstallNotificationJournaller : NSObject <NSSecureCoding>
{
    _Bool _preliminary;	// 8 = 0x8
    NSString *_primaryBundleID;	// 16 = 0x10
    NSMutableArray *_journalledNotifications;	// 24 = 0x18
    unsigned long long _operationType;	// 32 = 0x20
    double _timestamp;	// 40 = 0x28
}

+ (_Bool)shouldJournalNotificationType:(int)arg1;	// IMP=0x000000000013f080
+ (void)createInstallJournalDirectoryIfRequired;	// IMP=0x000000000013dbe7
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013dbdf
- (void).cxx_destruct;	// IMP=0x000000000013f1af
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(_Bool)arg3;	// IMP=0x000000000013f19a
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(_Bool)arg3 options:(id)arg4;	// IMP=0x000000000013f093
- (void)removeJournalAfterNotificationFence;	// IMP=0x000000000013ef9f
- (void)setPrimaryBundleID:(id)arg1;	// IMP=0x000000000013eeb3
- (void)writeFinalJournal;	// IMP=0x000000000013ed49
- (void)writePreliminaryJournal;	// IMP=0x000000000013eb66
- (void)_writeJournalUnconditionally;	// IMP=0x000000000013e96e
- (void)removeJournalFile;	// IMP=0x000000000013e738
- (id)journalURL;	// IMP=0x000000000013e668
- (double)timestamp;	// IMP=0x000000000013e65d
- (unsigned long long)installOperation;	// IMP=0x000000000013e653
- (id)primaryBundleID;	// IMP=0x000000000013e645
- (id)journalledNotifications;	// IMP=0x000000000013e611
- (id)synthesizedPreliminaryJournalledNotifications;	// IMP=0x000000000013e4d4
- (_Bool)applicableForCurrentDatabase;	// IMP=0x000000000013e42b
- (_Bool)entityExists;	// IMP=0x000000000013e3b1
- (_Bool)shouldExpectEntityToExist;	// IMP=0x000000000013e33a
- (_Bool)isApplicationRegisteredWithbundleID:(id)arg1 placeholder:(_Bool)arg2;	// IMP=0x000000000013e06c
- (id)initWithPrimaryBundleID:(id)arg1 operation:(unsigned long long)arg2;	// IMP=0x000000000013dfa0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013dee5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013dd7c

@end
