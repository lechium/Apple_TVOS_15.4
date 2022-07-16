//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CATDictionaryCodable, CATSharingDeviceSession;

__attribute__((visibility("hidden")))
@interface CATSendDeviceSessionMessageOperation
{
    id <CATSharingDeviceSession> mDeviceSession;	// 8 = 0x8
    id <CATDictionaryCodable> mMessage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000c1b6
- (void)sendMessage;	// IMP=0x000000000000c0d4
- (void)main;	// IMP=0x000000000000c00e
- (_Bool)isAsynchronous;	// IMP=0x000000000000c006
- (id)initWithDeviceSession:(id)arg1 message:(id)arg2;	// IMP=0x000000000000bf64

@end

