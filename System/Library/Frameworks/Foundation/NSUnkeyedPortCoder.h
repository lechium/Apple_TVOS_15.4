//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDOStreamData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSUnkeyedPortCoder
{
    id sndPort;	// 16 = 0x10
    id rcvPort;	// 24 = 0x18
    NSDOStreamData *doStreamData;	// 32 = 0x20
    NSMutableArray *components;	// 40 = 0x28
    NSMutableArray *importedObjects;	// 48 = 0x30
    unsigned long long componentIndex;	// 56 = 0x38
    _Bool isBycopy;	// 64 = 0x40
    _Bool isByref;	// 65 = 0x41
    _Bool isValid;	// 66 = 0x42
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fa702
+ (void)_enableLogging:(_Bool)arg1;	// IMP=0x00000000000fa44c
- (id)decodeRetainedObject;	// IMP=0x00000000000fcf7c
- (void)encodeByrefObject:(id)arg1;	// IMP=0x00000000000fcf62
- (void)encodeBycopyObject:(id)arg1;	// IMP=0x00000000000fcf48
- (void)encodeObject:(id)arg1 isBycopy:(_Bool)arg2 isByref:(_Bool)arg3;	// IMP=0x00000000000fcb3c
- (void)decodeReturnValue:(id)arg1;	// IMP=0x00000000000fc7db
- (void)encodeReturnValue:(id)arg1;	// IMP=0x00000000000fc542
- (id)decodeInvocation;	// IMP=0x00000000000fbe79
- (void)encodeInvocation:(id)arg1;	// IMP=0x00000000000fb8c0
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;	// IMP=0x00000000000fb894
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;	// IMP=0x00000000000fb103
- (id)decodePortObject;	// IMP=0x00000000000fb0d0
- (void)encodePortObject:(id)arg1;	// IMP=0x00000000000fb09f
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;	// IMP=0x00000000000faff9
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000faf5a
- (id)decodeDataObject;	// IMP=0x00000000000fad01
- (void)encodeDataObject:(id)arg1;	// IMP=0x00000000000faa24
- (long long)versionForClassName:(id)arg1;	// IMP=0x00000000000fa9d3
- (_Bool)isByref;	// IMP=0x00000000000fa9c3
- (_Bool)isBycopy;	// IMP=0x00000000000fa9b3
- (id)_proxyForLocalObject:(id)arg1;	// IMP=0x00000000000fa94f
- (id)connection;	// IMP=0x00000000000fa91d
- (void)importObject:(id)arg1;	// IMP=0x00000000000fa8d0
- (id)importedObjects;	// IMP=0x00000000000fa8bf
- (id)finishedComponents;	// IMP=0x00000000000fa8ad
- (id)components;	// IMP=0x00000000000fa844
- (void)dealloc;	// IMP=0x00000000000fa796
- (void)invalidate;	// IMP=0x00000000000fa710
- (void)dispatch;	// IMP=0x00000000000fa67f
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;	// IMP=0x00000000000fa458
- (id)debugDescription;	// IMP=0x00000000000fa3d2

@end
