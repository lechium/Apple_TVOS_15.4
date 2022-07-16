//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class IMDaemonController;

@interface IMReplyingRemoteDaemonProxy : NSProxy
{
    _Bool _synchronousReplies;	// 8 = 0x8
    IMDaemonController *_daemonController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d9cc6
@property(readonly, nonatomic) __weak IMDaemonController *daemonController; // @synthesize daemonController=_daemonController;
@property(nonatomic) _Bool synchronousReplies; // @synthesize synchronousReplies=_synchronousReplies;
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000d9b6b
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000d9b0c
- (id)initWithDaemonController:(id)arg1 synchronousReplies:(_Bool)arg2;	// IMP=0x00000000000d9ad5

@end

