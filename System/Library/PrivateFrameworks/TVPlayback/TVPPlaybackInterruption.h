//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVPlayback/TVPPlaybackInterruptable-Protocol.h>

@class NSString, NSUUID, TVPPlaybackInterruptionCenter;

@interface TVPPlaybackInterruption : NSObject <TVPPlaybackInterruptable>
{
    TVPPlaybackInterruptionCenter *_interruptionCenter;	// 8 = 0x8
    NSUUID *_interruptionID;	// 16 = 0x10
    long long _state;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a00a5
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSUUID *interruptionID; // @synthesize interruptionID=_interruptionID;
@property(retain, nonatomic) TVPPlaybackInterruptionCenter *interruptionCenter; // @synthesize interruptionCenter=_interruptionCenter;
- (void)interruptionDidEnd;	// IMP=0x000000000009ff58
- (void)interruptionWillEnd;	// IMP=0x000000000009fe6a
- (void)interruptionDidBegin;	// IMP=0x000000000009fd7d
- (void)interruptionWillBegin;	// IMP=0x000000000009fc9b
- (id)init;	// IMP=0x000000000009fc35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

