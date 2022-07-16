//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface PowerLogBackend
{
    _Bool _immutable;	// 256 = 0x100
    NSNumber *_overrideSampling;	// 264 = 0x108
    NSString *_uuidRespectDnu;	// 272 = 0x110
    NSString *_uuidOverrideDnu;	// 280 = 0x118
    NSString *_uuidCustom;	// 288 = 0x120
}

- (int)updateBackendState;	// IMP=0x002000000001567f
- (int)updateState;	// IMP=0x0010000000015643
- (id)sendMessage:(id)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 flag:(int)arg6;	// IMP=0x001000000001563b
- (void)dealloc;	// IMP=0x00100000000155d5
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3;	// IMP=0x001000000001552f

@end

