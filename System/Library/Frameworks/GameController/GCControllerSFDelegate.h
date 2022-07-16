//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/NSUserActivityDelegate-Protocol.h>

@class NSString, NSUserActivity;

@interface GCControllerSFDelegate : NSObject <NSUserActivityDelegate>
{
    NSUserActivity *_activity;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000020c71
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)userActivityWasContinued:(id)arg1;	// IMP=0x0000000000020bd7
- (void)fireCompletionHandler;	// IMP=0x0000000000020b26
- (void)startScan;	// IMP=0x00000000000207e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

