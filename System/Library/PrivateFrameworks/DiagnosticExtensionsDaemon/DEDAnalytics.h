//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DEDAnalytics : NSObject
{
}

+ (void)didCompleteBugSessionWithState:(long long)arg1;	// IMP=0x0000000000038a30
+ (void)finisherDidCompleteWithDuration:(unsigned long long)arg1 uploadedByteCount:(unsigned long long)arg2 usingFinishingMove:(long long)arg3 withState:(long long)arg4;	// IMP=0x00000000000388fd
+ (void)finisherDidStartWithFileCount:(unsigned long long)arg1 expectedByteUploadCount:(unsigned long long)arg2 finishingMove:(long long)arg3;	// IMP=0x00000000000387de
+ (void)extensionWithIdentifier:(id)arg1 didCompleteWithFileCount:(unsigned long long)arg2 bytesCollected:(unsigned long long)arg3 duration:(unsigned long long)arg4 errorCode:(long long)arg5;	// IMP=0x0000000000038691
+ (void)extensionDidScheduleExtensionWithIdentifier:(id)arg1 delay:(unsigned long long)arg2;	// IMP=0x000000000003857a
+ (void)didStartExtensionWithIdentifier:(id)arg1;	// IMP=0x0000000000038482
+ (void)didCreateBugSessionForApp:(id)arg1;	// IMP=0x000000000003838a
+ (void)didCheckInDeferredExtensionsWithCount:(unsigned long long)arg1;	// IMP=0x00000000000382aa
+ (void)didStartDaemon;	// IMP=0x00000000000381e4
+ (id)log;	// IMP=0x000000000003814a

@end

