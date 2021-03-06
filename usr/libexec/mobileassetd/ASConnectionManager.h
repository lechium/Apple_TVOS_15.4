//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ASConnectionManager : NSObject
{
    struct __CFArray *_downloadObserverConnections;	// 8 = 0x8
    struct __CFArray *_cancelClientConnections;	// 16 = 0x10
    struct __CFArray *_pauseClientConnections;	// 24 = 0x18
    struct __CFArray *_resumeClientConnections;	// 32 = 0x20
}

+ (id)connectionManagerWithAsset:(struct __MobileAsset *)arg1 replyingToMessage:(id)arg2 onConnection:(id)arg3 messageKind:(int)arg4;	// IMP=0x000000000002d606
+ (id)managersDict;	// IMP=0x001000000002d5c1
+ (id)managersDictQueue;	// IMP=0x001000000002d57a
- (void)tearDown;	// IMP=0x002000000002dc96
- (void)sendConnectionTerminationToClients:(int)arg1;	// IMP=0x001000000002dc0b
- (void)sendProgressMessageWithOperation:(id)arg1 progress:(float)arg2 callbackState:(id)arg3 toClients:(int)arg4;	// IMP=0x001000000002db81
- (void)sendErrorMessageWithError:(id)arg1 toClients:(int)arg2;	// IMP=0x001000000002db0c
- (void)sendStatus:(int)arg1 toClients:(int)arg2;	// IMP=0x001000000002da23
- (void)sendStatus:(int)arg1 toClientConnections:(struct __CFArray *)arg2;	// IMP=0x001000000002d9cf
- (void)addClientOfMessageKind:(int)arg1 replyingToMessage:(id)arg2 onConnection:(id)arg3;	// IMP=0x001000000002d8df
- (void)dealloc;	// IMP=0x001000000002d46e
- (id)init;	// IMP=0x001000000002d3e4

@end

