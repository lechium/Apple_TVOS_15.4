//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NAUIAutoUpdatingFontObserver : NSObject
{
    id _notificationObserver;	// 8 = 0x8
    id _target;	// 16 = 0x10
}

+ (_Bool)canObserveFontsForTarget:(id)arg1;	// IMP=0x000000000000ad56
- (void).cxx_destruct;	// IMP=0x000000000000b019
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void)dealloc;	// IMP=0x000000000000af8d
- (void)updateDyamicFontForCurrentContentSize;	// IMP=0x000000000000ade8
- (id)initWithTarget:(id)arg1;	// IMP=0x000000000000ab62

@end

