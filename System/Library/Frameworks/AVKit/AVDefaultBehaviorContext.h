//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/AVBehaviorContext-Protocol.h>

@class AVPlayerViewController, NSString;

__attribute__((visibility("hidden")))
@interface AVDefaultBehaviorContext : NSObject <AVBehaviorContext>
{
    AVPlayerViewController *_playerViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009c6e6
@property(readonly, nonatomic) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
- (id)initWithAVKitOwner:(id)arg1;	// IMP=0x000000000009c66c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

