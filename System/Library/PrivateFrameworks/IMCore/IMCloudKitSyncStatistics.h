//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMCloudKitSyncStatistics : NSObject
{
    unsigned long long _syncedChatCount;	// 8 = 0x8
    unsigned long long _totalChatCount;	// 16 = 0x10
    unsigned long long _syncedAttachmentCount;	// 24 = 0x18
    unsigned long long _totalAttachmentCount;	// 32 = 0x20
    unsigned long long _syncedMessageCount;	// 40 = 0x28
    unsigned long long _totalMessageCount;	// 48 = 0x30
    unsigned long long _totalRecordCount;	// 56 = 0x38
    unsigned long long _syncedRecordCount;	// 64 = 0x40
}

+ (id)percentStringFromTotal:(double)arg1 count:(double)arg2;	// IMP=0x0000000000041b28
+ (id)percentStringFromDouble:(double)arg1;	// IMP=0x00000000000418b7
+ (double)calculatePercentageOfTotal:(double)arg1 count:(double)arg2;	// IMP=0x0000000000041890
+ (id)_createSyncStatisticsDictionaryForSyncControllerSyncState:(unsigned long long)arg1 syncType:(long long)arg2 count:(double)arg3 max:(double)arg4;	// IMP=0x0000000000042355
+ (id)_createSyncStatisticsDictionary:(long long)arg1 messageSyncCount:(long long)arg2 chatCount:(long long)arg3 chatSyncCount:(long long)arg4 attachmentCount:(long long)arg5 attachmentSyncCount:(long long)arg6;	// IMP=0x0000000000041f93
@property(nonatomic) unsigned long long syncedRecordCount; // @synthesize syncedRecordCount=_syncedRecordCount;
@property(nonatomic) unsigned long long totalRecordCount; // @synthesize totalRecordCount=_totalRecordCount;
@property(nonatomic) unsigned long long totalMessageCount; // @synthesize totalMessageCount=_totalMessageCount;
@property(nonatomic) unsigned long long syncedMessageCount; // @synthesize syncedMessageCount=_syncedMessageCount;
@property(nonatomic) unsigned long long totalAttachmentCount; // @synthesize totalAttachmentCount=_totalAttachmentCount;
@property(nonatomic) unsigned long long syncedAttachmentCount; // @synthesize syncedAttachmentCount=_syncedAttachmentCount;
@property(nonatomic) unsigned long long totalChatCount; // @synthesize totalChatCount=_totalChatCount;
@property(nonatomic) unsigned long long syncedChatCount; // @synthesize syncedChatCount=_syncedChatCount;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000041e82
- (id)description;	// IMP=0x0000000000041cb7
- (id)_statsString:(id)arg1 count:(long long)arg2 total:(long long)arg3;	// IMP=0x0000000000041bdf
@property(readonly, nonatomic) double percentSynced;
- (id)initWithStatisticsDictionary:(id)arg1;	// IMP=0x0000000000041608
- (id)_syncStatisticsDictionary;	// IMP=0x00000000000422a4

@end
