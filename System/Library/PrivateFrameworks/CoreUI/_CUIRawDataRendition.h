//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface _CUIRawDataRendition
{
    NSData *_dataBytes;	// 216 = 0xd8
}

- (id)data;	// IMP=0x0000000000061051
- (int)pixelFormat;	// IMP=0x0000000000061046
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x0000000000060e61
- (void)dealloc;	// IMP=0x0000000000060e1b
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x0000000000060e09

@end
