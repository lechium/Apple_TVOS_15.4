//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface WebCoreSharedBufferData : NSData
{
    struct RefPtr<const WebCore::DataSegment, WTF::RawPtrTraits<const WebCore::DataSegment>, WTF::DefaultRefDerefTraits<const WebCore::DataSegment>> _dataSegment;	// 8 = 0x8
    unsigned long long _position;	// 16 = 0x10
    unsigned long long _size;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x00000000008dfcf0
- (id).cxx_construct;	// IMP=0x00000000008e0030
- (void).cxx_destruct;	// IMP=0x00000000008dffc0
- (const void *)bytes;	// IMP=0x00000000008dff60
- (unsigned long long)length;	// IMP=0x00000000008dff40
- (id)initWithDataSegment:(const void *)arg1 position:(unsigned long long)arg2 size:(unsigned long long)arg3;	// IMP=0x00000000008dfdc0
- (void)dealloc;	// IMP=0x00000000008dfd00

@end

