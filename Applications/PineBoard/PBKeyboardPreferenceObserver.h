//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface PBKeyboardPreferenceObserver : NSObject
{
    NSUserDefaults *_uikitDefaults;	// 8 = 0x8
    long long _resolvedKeyboardStyle;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000185080
- (void).cxx_destruct;	// IMP=0x0020000000185c40
@property(readonly, nonatomic) long long resolvedKeyboardStyle; // @synthesize resolvedKeyboardStyle=_resolvedKeyboardStyle;
@property(readonly, nonatomic) NSUserDefaults *uikitDefaults; // @synthesize uikitDefaults=_uikitDefaults;
- (void)_handlePreferredKeyboardUpdate;	// IMP=0x0010000000185490
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000185300
- (void)dealloc;	// IMP=0x00100000001852a0
- (id)init;	// IMP=0x0010000000185170

@end

