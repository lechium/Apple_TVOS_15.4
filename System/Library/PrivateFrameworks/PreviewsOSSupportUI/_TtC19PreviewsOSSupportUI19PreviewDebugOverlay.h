//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PreviewsOSSupportUI/PTSettingsKeyObserver-Protocol.h>

@class MISSING_TYPE;

@interface _TtC19PreviewsOSSupportUI19PreviewDebugOverlay : NSObject <PTSettingsKeyObserver>
{
    MISSING_TYPE *messageCount;	// 8 = 0x8
    MISSING_TYPE *identifier;	// 16 = 0x10
    MISSING_TYPE *size;	// 32 = 0x20
    MISSING_TYPE *settingsEnabled;	// 48 = 0x30
    MISSING_TYPE *forceEnabled;	// 49 = 0x31
    MISSING_TYPE *edge;	// 50 = 0x32
    MISSING_TYPE *parent;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_view;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000003fc0
- (id)init;	// IMP=0x0000000000003f60
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000000034c0

@end

