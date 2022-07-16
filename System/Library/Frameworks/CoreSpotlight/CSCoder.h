//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/CSCoderData-Protocol.h>

@class NSData;

@interface CSCoder : NSObject <CSCoderData>
{
    _Bool _finalized;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    struct _MDPlistContainer *_container;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000021f3c
@property(readonly, nonatomic) _Bool finalized; // @synthesize finalized=_finalized;
@property(readonly, nonatomic) struct _MDPlistContainer *container; // @synthesize container=_container;
- (void)endDictionary;	// IMP=0x0000000000021f19
- (void)beginDictionary;	// IMP=0x0000000000021f0b
- (void)endType;	// IMP=0x0000000000021efb
- (void)beginType:(const char *)arg1;	// IMP=0x0000000000021e6f
- (void)endArray;	// IMP=0x0000000000021e5f
- (void)beginArray;	// IMP=0x0000000000021e51
- (void)encodeNSString:(id)arg1;	// IMP=0x0000000000021e28
- (void)encodeObject:(id)arg1;	// IMP=0x0000000000021dc7
- (void)encodeMDPlistObject:(CDStruct_b7fac349)arg1;	// IMP=0x0000000000021ced
- (void)encodeString:(const char *)arg1 stringLength:(long long)arg2 forKey:(const char *)arg3 keyLength:(long long)arg4;	// IMP=0x0000000000021ca3
- (void)encodeObject:(id)arg1 forKey:(const char *)arg2 keyLength:(long long)arg3;	// IMP=0x0000000000021c42
- (void)encodeObject:(id)arg1 withKey:(id)arg2;	// IMP=0x0000000000021bd1
- (void)encodeData:(const void *)arg1 length:(long long)arg2;	// IMP=0x0000000000021bbb
- (void)encodeString:(const char *)arg1 length:(long long)arg2;	// IMP=0x0000000000021b9a
- (void)encodeString:(const char *)arg1;	// IMP=0x0000000000021b75
- (void)encodeDouble:(double)arg1;	// IMP=0x0000000000021b65
- (void)encodeInt64:(long long)arg1;	// IMP=0x0000000000021b52
- (void)encodeInt32:(int)arg1;	// IMP=0x0000000000021b40
- (void)encodeBool:(_Bool)arg1;	// IMP=0x0000000000021b2e
- (void)dealloc;	// IMP=0x0000000000021ae0
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (const struct _MDPlistContainer *)plistContainer;	// IMP=0x0000000000021a2d
- (id)init;	// IMP=0x00000000000219c0

@end
