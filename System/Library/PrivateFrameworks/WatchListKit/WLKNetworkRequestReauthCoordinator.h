//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WatchListKit/NSLocking-Protocol.h>

@class NSLock;

@interface WLKNetworkRequestReauthCoordinator : NSObject <NSLocking>
{
    NSLock *_lock;	// 8 = 0x8
    _Bool _sessionPrompt;	// 16 = 0x10
}

+ (id)coordinator;	// IMP=0x000000000003616c
- (void).cxx_destruct;	// IMP=0x0000000000036577
@property _Bool sessionPrompt; // @synthesize sessionPrompt=_sessionPrompt;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000364be
- (void)unlock;	// IMP=0x0000000000036439
- (void)lock;	// IMP=0x00000000000363b4
- (_Bool)didPrompt;	// IMP=0x00000000000363a2
- (void)markPrompt;	// IMP=0x0000000000036319
- (void)dealloc;	// IMP=0x000000000003629d
- (id)_init;	// IMP=0x00000000000361d1

@end

