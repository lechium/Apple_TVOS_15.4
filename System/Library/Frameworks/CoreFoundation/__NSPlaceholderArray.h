//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSPlaceholderArray
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000131b3
- (void)dealloc;	// IMP=0x000000000001354c
- (unsigned long long)retainCount;	// IMP=0x0000000000013544
- (oneway void)release;	// IMP=0x0000000000013543
- (id)retain;	// IMP=0x000000000001353f
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x00000000000134cc
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x000000000001347f
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000013439
- (id)_initByAdoptingBuffer:(id *)arg1 count:(unsigned long long)arg2 size:(unsigned long long)arg3;	// IMP=0x0000000000013402
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000013356
- (id)initWithArray:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x00000000000132db
- (id)initWithArray:(id)arg1;	// IMP=0x00000000000131fd
- (id)init;	// IMP=0x00000000000131b5
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000000130e4
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000013025
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000012f66
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000012ea7
- (unsigned long long)count;	// IMP=0x0000000000012de8

@end
