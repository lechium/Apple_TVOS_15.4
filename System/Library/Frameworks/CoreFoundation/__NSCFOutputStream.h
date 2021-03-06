//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFOutputStream
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005cc25
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000005cc22
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x000000000005cf08
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x000000000005cefd
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;	// IMP=0x000000000005cee4
- (_Bool)hasSpaceAvailable;	// IMP=0x000000000005ced4
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x000000000005cec9
- (id)streamError;	// IMP=0x000000000005ceb7
- (unsigned long long)streamStatus;	// IMP=0x000000000005ceb2
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000005ce7d
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000005ce48
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005ce35
- (id)propertyForKey:(id)arg1;	// IMP=0x000000000005ce20
- (void)setDelegate:(id)arg1;	// IMP=0x000000000005cd51
- (id)delegate;	// IMP=0x000000000005cd4c
- (void)close;	// IMP=0x000000000005cd47
- (void)open;	// IMP=0x000000000005cd42
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;	// IMP=0x000000000005cce9
- (id)initToFileAtPath:(id)arg1 append:(_Bool)arg2;	// IMP=0x000000000005cc7a
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000000005cc4f
- (id)initToMemory;	// IMP=0x000000000005cc2c
- (unsigned long long)retainCount;	// IMP=0x000000000005cc1d
- (_Bool)_isDeallocating;	// IMP=0x000000000005cc0d
- (_Bool)_tryRetain;	// IMP=0x000000000005cbfc
- (oneway void)release;	// IMP=0x000000000005cbf7
- (id)retain;	// IMP=0x000000000005cbf2
- (unsigned long long)hash;	// IMP=0x000000000005cbed
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005cbca

@end

