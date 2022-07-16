//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVPlayback/TVPPlaybackInterruptable-Protocol.h>
#import <TVPlayback/TVPPlaybackInterruptableRegistration-Protocol.h>

@class NSHashTable, NSString;

__attribute__((visibility("hidden")))
@interface TVPPlaybackInterruptionGroup : NSObject <TVPPlaybackInterruptable, TVPPlaybackInterruptableRegistration>
{
    NSHashTable *_interruptables;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a1ce0
@property(retain, nonatomic) NSHashTable *interruptables; // @synthesize interruptables=_interruptables;
- (void)removeInterruptable:(id)arg1;	// IMP=0x00000000000a1c53
- (void)addInterruptable:(id)arg1;	// IMP=0x00000000000a1be1
- (void)interruptionDidEnd;	// IMP=0x00000000000a1bcc
- (void)interruptionWillEnd;	// IMP=0x00000000000a1bb7
- (void)interruptionDidBegin;	// IMP=0x00000000000a1ba2
- (void)interruptionWillBegin;	// IMP=0x00000000000a1b8d
- (void)addInterruptablesFromGroup:(id)arg1;	// IMP=0x00000000000a1b01
- (_Bool)containsInterruptable:(id)arg1;	// IMP=0x00000000000a1a8a
- (void)_performInterruptionSelector:(SEL)arg1;	// IMP=0x00000000000a19a9
- (id)init;	// IMP=0x00000000000a1943

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
