//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardCameraLiveTextEnabledObserver : NSObject
{
    _Bool _isLiveTextEnabledIsValid;	// 8 = 0x8
    _Bool _isLiveTextEnabled;	// 9 = 0x9
}

+ (id)sharedInstance;	// IMP=0x0000000000eeca9c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000eecdc0
- (void)dealloc;	// IMP=0x0000000000eecd3d
@property(readonly) _Bool isLiveTextEnabled;
- (id)init;	// IMP=0x0000000000eecaf1

@end

