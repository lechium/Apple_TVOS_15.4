//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSHIDEventDisplay, NSString;

@interface BKMainDisplayObserver : NSObject
{
    CDUnknownBlockType _displayChangedHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000196c8
@property(copy, nonatomic) CDUnknownBlockType displayChangedHandler; // @synthesize displayChangedHandler=_displayChangedHandler;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000019584
@property(readonly, nonatomic) BKSHIDEventDisplay *display;
- (id)init;	// IMP=0x0010000000019444

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

