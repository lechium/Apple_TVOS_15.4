//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFInputStream
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005c904
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000005c901
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x000000000005cbbf
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x000000000005cbb4
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;	// IMP=0x000000000005cb9b
- (_Bool)hasBytesAvailable;	// IMP=0x000000000005cb8b
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;	// IMP=0x000000000005cb5e
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x000000000005cb53
- (id)streamError;	// IMP=0x000000000005cb41
- (unsigned long long)streamStatus;	// IMP=0x000000000005cb3c
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000005cb07
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000005cad2
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005cabf
- (id)propertyForKey:(id)arg1;	// IMP=0x000000000005caaa
- (void)setDelegate:(id)arg1;	// IMP=0x000000000005c9db
- (id)delegate;	// IMP=0x000000000005c9d6
- (void)close;	// IMP=0x000000000005c9d1
- (void)open;	// IMP=0x000000000005c9cc
- (id)initWithURL:(id)arg1;	// IMP=0x000000000005c998
- (id)initWithFileAtPath:(id)arg1;	// IMP=0x000000000005c939
- (id)initWithData:(id)arg1;	// IMP=0x000000000005c90b
- (unsigned long long)retainCount;	// IMP=0x000000000005c8fc
- (_Bool)_isDeallocating;	// IMP=0x000000000005c8ec
- (_Bool)_tryRetain;	// IMP=0x000000000005c8db
- (oneway void)release;	// IMP=0x000000000005c8d6
- (id)retain;	// IMP=0x000000000005c8d1
- (unsigned long long)hash;	// IMP=0x000000000005c8cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005c8a9

@end
