//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _CUISubrangeData : NSData
{
    struct _NSRange _range;	// 8 = 0x8
    NSData *_data;	// 24 = 0x18
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003dd75
- (const void *)bytes;	// IMP=0x000000000003dd42
- (unsigned long long)length;	// IMP=0x000000000003dd30
- (void)dealloc;	// IMP=0x000000000003dcee
- (id)initWithData:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000003dc79

@end

