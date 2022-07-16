//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLDevice;

@interface MTLMessageFilter : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    unsigned long long _messageType;	// 16 = 0x10
}

+ (id)filter:(unsigned long long)arg1 device:(id)arg2;	// IMP=0x0000000000082a4a
@property(readonly) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(readonly, retain) id <MTLDevice> device; // @synthesize device=_device;
- (void)setDevice:(id)arg1;	// IMP=0x0000000000082a85
- (id)init:(unsigned long long)arg1 device:(id)arg2;	// IMP=0x0000000000082a02

@end
