//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVLProxyViewController;

@interface TVLJSProxyDocument : NSObject
{
    _Bool _shouldCallOnCancel;	// 8 = 0x8
    _Bool _wasLoadCancelled;	// 9 = 0x9
    TVLProxyViewController *_proxyViewController;	// 16 = 0x10
}

+ (void)addConstructorToObject:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;	// IMP=0x00000000000ae605
@property(nonatomic) _Bool wasLoadCancelled; // @synthesize wasLoadCancelled=_wasLoadCancelled;
@property(nonatomic) _Bool shouldCallOnCancel; // @synthesize shouldCallOnCancel=_shouldCallOnCancel;
@property(retain, nonatomic) TVLProxyViewController *proxyViewController; // @synthesize proxyViewController=_proxyViewController;
- (id)description;	// IMP=0x00000000000ae5a2
- (void)dealloc;	// IMP=0x00000000000ae562
- (id)init;	// IMP=0x00000000000ae528

@end

