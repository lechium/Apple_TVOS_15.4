//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInputStream.h>

__attribute__((visibility("hidden")))
@interface NSCFInputStream : NSInputStream
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000130776
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000013076e
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x0000000000130a44
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x0000000000130a34
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_e097db04 *)arg3;	// IMP=0x0000000000130a1b
- (_Bool)hasBytesAvailable;	// IMP=0x0000000000130a0b
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;	// IMP=0x00000000001309de
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x00000000001309ce
- (id)streamError;	// IMP=0x00000000001309bc
- (unsigned long long)streamStatus;	// IMP=0x00000000001309b2
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000013097d
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x0000000000130948
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000130935
- (id)propertyForKey:(id)arg1;	// IMP=0x0000000000130920
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000130851
- (id)delegate;	// IMP=0x0000000000130847
- (void)close;	// IMP=0x000000000013083d
- (void)open;	// IMP=0x0000000000130833
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000130807
- (id)initWithFileAtPath:(id)arg1;	// IMP=0x00000000001307a0
- (id)initWithData:(id)arg1;	// IMP=0x0000000000130782
- (unsigned long long)retainCount;	// IMP=0x0000000000130764
- (_Bool)retainWeakReference;	// IMP=0x0000000000130753
- (_Bool)allowsWeakReference;	// IMP=0x0000000000130743
- (oneway void)release;	// IMP=0x0000000000130739
- (id)retain;	// IMP=0x0000000000130721
- (unsigned long long)hash;	// IMP=0x0000000000130717
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001306f4

@end

