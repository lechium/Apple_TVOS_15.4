//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCoding-Protocol.h>
#import <Foundation/NSCopying-Protocol.h>

@interface NSPort : NSObject <NSCopying, NSCoding>
{
}

+ (id)portWithMachPort:(unsigned int)arg1;	// IMP=0x00000000000f6e4f
+ (id)port;	// IMP=0x00000000000f6e2d
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f6e00
- (void)removeConnection:(id)arg1 fromRunLoop:(id)arg2 forMode:(id)arg3;	// IMP=0x00000000000f70ee
- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;	// IMP=0x00000000000f7092
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00000000000f708c
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00000000000f7086
- (_Bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;	// IMP=0x00000000000f7067
- (_Bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;	// IMP=0x00000000000f7039
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f7033
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f6fdf
- (Class)classForCoder;	// IMP=0x00000000000f6f71
- (Class)classForPortCoder;	// IMP=0x00000000000f6f60
- (id)replacementObjectForCoder:(id)arg1;	// IMP=0x00000000000f6f58
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f6f4d
@property(readonly) unsigned long long reservedSpaceLength;
- (id)delegate;	// IMP=0x00000000000f6f17
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000f6eec
- (unsigned int)machPort;	// IMP=0x00000000000f6ee4
@property(readonly, getter=isValid) _Bool valid;
- (void)invalidate;	// IMP=0x00000000000f6e8b
- (id)initWithMachPort:(unsigned int)arg1;	// IMP=0x00000000000f6e83

@end

