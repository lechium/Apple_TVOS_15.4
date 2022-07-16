//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface DaemonCachedObject : NSObject
{
    NSObject<OS_dispatch_source> *_expirationTimer;	// 8 = 0x8
    id _object;	// 16 = 0x10
}

@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void)setExpirationTimer:(id)arg1;	// IMP=0x0010000000188c55
- (id)copyExpirationTimer;	// IMP=0x0010000000188c34
- (void)dealloc;	// IMP=0x0010000000188be2

@end

