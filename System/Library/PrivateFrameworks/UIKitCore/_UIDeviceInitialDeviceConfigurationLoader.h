//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UISDeviceContext;

__attribute__((visibility("hidden")))
@interface _UIDeviceInitialDeviceConfigurationLoader : NSObject
{
    UISDeviceContext *_context;	// 8 = 0x8
    _Bool _hasRequestedPreload;	// 16 = 0x10
}

+ (id)sharedLoader;	// IMP=0x000000000078bad3
- (void).cxx_destruct;	// IMP=0x000000000078bcbb
@property(readonly, nonatomic) UISDeviceContext *initialDeviceContext;
- (void)_startPreloadInitialDeviceContext;	// IMP=0x000000000078bb34

@end

