//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CATDictionaryCodable, CATSharingBroadcastPrimitives;

__attribute__((visibility("hidden")))
@interface CATSendBroadcastMessageOperation
{
    id <CATSharingBroadcastPrimitives> mBroadcastPrimitives;	// 8 = 0x8
    id <CATDictionaryCodable> mMessage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000343a1
- (void)sendMessage;	// IMP=0x00000000000342bf
- (void)main;	// IMP=0x00000000000341f9
- (_Bool)isAsynchronous;	// IMP=0x00000000000341f1
- (id)initWithBroadcastPrimitive:(id)arg1 message:(id)arg2;	// IMP=0x000000000003414f

@end

