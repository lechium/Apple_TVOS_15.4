//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MSPerformanceLogger
{
}

+ (void)nukeCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5a6d
+ (id)sharedLogger;	// IMP=0x00000000000c59c2
- (void)summarizeOperation:(id)arg1 itemGUID:(id)arg2 formatBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c4ed7
- (void)discardOperation:(id)arg1 itemGUID:(id)arg2;	// IMP=0x00000000000c4d78
- (void)dbQueueDiscardOperation:(id)arg1 itemGUID:(id)arg2;	// IMP=0x00000000000c4c92
- (void)stopOperation:(id)arg1 itemGUID:(id)arg2;	// IMP=0x00000000000c4af8
- (void)startOperation:(id)arg1 itemGUID:(id)arg2;	// IMP=0x00000000000c495e
- (_Bool)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;	// IMP=0x00000000000c469a
- (id)init;	// IMP=0x00000000000c463e
- (void)_logSqliteErrorLine:(int)arg1;	// IMP=0x00000000000c457e

@end
