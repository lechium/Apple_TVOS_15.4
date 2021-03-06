//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSTimer.h>

__attribute__((visibility("hidden")))
@interface NSCFTimer : NSTimer
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000147952
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000014794a
- (id)init;	// IMP=0x0000000000147e70
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6;	// IMP=0x0000000000147ce0
- (unsigned long long)_cfTypeID;	// IMP=0x0000000000147cd6
- (void)fire;	// IMP=0x0000000000147c2b
- (id)userInfo;	// IMP=0x0000000000147a75
- (void)setFireDate:(id)arg1;	// IMP=0x0000000000147a4e
- (id)fireDate;	// IMP=0x0000000000147a26
- (void)invalidate;	// IMP=0x0000000000147a1c
- (void)setTolerance:(double)arg1;	// IMP=0x0000000000147a12
- (double)tolerance;	// IMP=0x0000000000147a08
- (double)timeInterval;	// IMP=0x00000000001479fe
- (_Bool)isValid;	// IMP=0x00000000001479ee
- (unsigned long long)retainCount;	// IMP=0x0000000000147940
- (_Bool)retainWeakReference;	// IMP=0x000000000014792f
- (_Bool)allowsWeakReference;	// IMP=0x000000000014791f
- (oneway void)release;	// IMP=0x0000000000147915
- (id)retain;	// IMP=0x00000000001478fd
- (unsigned long long)hash;	// IMP=0x00000000001478f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001478d0

@end

