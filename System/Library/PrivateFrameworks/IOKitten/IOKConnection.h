//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IOKService;

@interface IOKConnection : NSObject
{
    unsigned int _connection;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned int connection; // @synthesize connection=_connection;
- (void)dealloc;	// IMP=0x000000000000303d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002f9e
- (unsigned long long)hash;	// IMP=0x0000000000002f89
- (_Bool)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 p4:(unsigned long long)arg5 p5:(unsigned long long)arg6 p6:(unsigned long long)arg7 error:(id *)arg8;	// IMP=0x0000000000002eba
- (_Bool)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 p4:(unsigned long long)arg5 p5:(unsigned long long)arg6 error:(id *)arg7;	// IMP=0x0000000000002deb
- (_Bool)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 p4:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x0000000000002d27
- (_Bool)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000000002c67
- (_Bool)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000002bae
- (_Bool)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000002aff
- (_Bool)trap:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000002a5f
- (_Bool)callAsyncMethodWithSelector:(unsigned int)arg1 wakePort:(unsigned int)arg2 reference:(unsigned long long *)arg3 referenceCount:(unsigned int)arg4 scalarInputs:(const unsigned long long *)arg5 scalarInputCount:(unsigned int)arg6 scalarOutputs:(unsigned long long *)arg7 scalarOutputCount:(unsigned int *)arg8 error:(id *)arg9;	// IMP=0x000000000000298b
- (_Bool)callMethodWithSelector:(unsigned int)arg1 scalarInputs:(const unsigned long long *)arg2 scalarInputCount:(unsigned int)arg3 scalarOutputs:(unsigned long long *)arg4 scalarOutputCount:(unsigned int *)arg5 error:(id *)arg6;	// IMP=0x00000000000028c7
- (_Bool)callAsyncMethodWithSelector:(unsigned int)arg1 wakePort:(unsigned int)arg2 reference:(unsigned long long *)arg3 referenceCount:(unsigned int)arg4 structInput:(const void *)arg5 structInputSize:(unsigned long long)arg6 structOutput:(void *)arg7 structOutputSize:(unsigned long long *)arg8 error:(id *)arg9;	// IMP=0x00000000000027f1
- (_Bool)callMethodWithSelector:(unsigned int)arg1 structInput:(const void *)arg2 structInputSize:(unsigned long long)arg3 structOutput:(void *)arg4 structOutputSize:(unsigned long long *)arg5 error:(id *)arg6;	// IMP=0x000000000000272d
- (_Bool)callAsyncMethodWithSelector:(unsigned int)arg1 wakePort:(unsigned int)arg2 reference:(unsigned long long *)arg3 referenceCount:(unsigned int)arg4 scalarInputs:(const unsigned long long *)arg5 scalarInputCount:(unsigned int)arg6 structInput:(const void *)arg7 structInputSize:(unsigned long long)arg8 scalarOutputs:(unsigned long long *)arg9 scalarOutputCount:(unsigned int *)arg10 structOutput:(void *)arg11 structOutputSize:(unsigned long long *)arg12 error:(id *)arg13;	// IMP=0x0000000000002647
- (_Bool)callMethodWithSelector:(unsigned int)arg1 scalarInputs:(const unsigned long long *)arg2 scalarInputCount:(unsigned int)arg3 structInput:(const void *)arg4 structInputSize:(unsigned long long)arg5 scalarOutputs:(unsigned long long *)arg6 scalarOutputCount:(unsigned int *)arg7 structOutput:(void *)arg8 structOutputSize:(unsigned long long *)arg9 error:(id *)arg10;	// IMP=0x000000000000256f
- (_Bool)setProperty:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000002485
- (_Bool)setProperties:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000023be
- (_Bool)unmapMemory64OfType:(unsigned int)arg1 atAddress:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000002306
- (_Bool)mapMemory64OfType:(unsigned int)arg1 withOptions:(unsigned int)arg2 atAddress:(unsigned long long *)arg3 ofSize:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x000000000000223d
- (_Bool)setNotificationPort:(id)arg1 ofType:(unsigned int)arg2 withReference:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000002150
@property(readonly, copy, nonatomic) IOKService *service;
- (id)initWithService:(id)arg1;	// IMP=0x00000000000020de
- (id)initWithService:(id)arg1 andType:(unsigned int)arg2;	// IMP=0x0000000000002042
- (id)init;	// IMP=0x0000000000001fb6

@end
