//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIRemoteControlEvent
{
    long long _subtype;	// 32 = 0x20
}

- (void)_simpleRemoteActionNotification:(id)arg1;	// IMP=0x0000000000bdcab7
- (void)_sendEventToResponder:(id)arg1;	// IMP=0x0000000000bdca9c
- (id)_windows;	// IMP=0x0000000000bdca32
- (void)_setSubtype:(long long)arg1;	// IMP=0x0000000000bdca21
- (long long)subtype;	// IMP=0x0000000000bdca10
- (long long)type;	// IMP=0x0000000000bdca05
- (void)dealloc;	// IMP=0x0000000000bdc97c
- (id)_init;	// IMP=0x0000000000bdc8e1

@end

