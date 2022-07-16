//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LoggingSupport/OSLogCoder-Protocol.h>

__attribute__((visibility("hidden")))
@interface LoggingSupport_OSLogCoder : NSObject <OSLogCoder>
{
    struct {
        unsigned int :4;
        unsigned int :4;
        unsigned char _field1;
        unsigned char _field2[0];
    } *_fmt_cmd;	// 8 = 0x8
    struct os_trace_blob_s *_ob;	// 16 = 0x10
    struct os_trace_blob_s *_ob_pub;	// 24 = 0x18
    struct os_trace_blob_s *_ob_priv;	// 32 = 0x20
    unsigned char _privacy_level;	// 40 = 0x28
    struct os_trace_blob_s _ob_mask;	// 48 = 0x30
    char _maskbuf[128];	// 72 = 0x48
    unsigned long long _maxsz;	// 200 = 0xc8
    unsigned short _written;	// 208 = 0xd0
    unsigned short _offset;	// 210 = 0xd2
    _Bool _truncated;	// 212 = 0xd4
    _Bool _initialized;	// 213 = 0xd5
    _Bool _mask;	// 214 = 0xd6
}

- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000002bd75
- (void)setTruncated;	// IMP=0x000000000002bd6d
- (void)setPublic;	// IMP=0x000000000002bd4c
- (void)_initBlob;	// IMP=0x000000000002bc9e

@end

