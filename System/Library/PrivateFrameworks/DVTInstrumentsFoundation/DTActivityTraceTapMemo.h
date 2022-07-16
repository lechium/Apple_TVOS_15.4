//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DTXMessage, NSData;

@interface DTActivityTraceTapMemo
{
    DTXMessage *_message;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    unsigned long long _lastMachContinuousTimeSeen;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004cf89
@property(nonatomic) unsigned long long lastMachContinuousTimeSeen; // @synthesize lastMachContinuousTimeSeen=_lastMachContinuousTimeSeen;
- (const void *)getBufferWithLength:(unsigned long long *)arg1;	// IMP=0x000000000004cec8
- (id)initWithMessage:(id)arg1;	// IMP=0x000000000004ce5a
- (id)initWithData:(id)arg1;	// IMP=0x000000000004cdd3

@end

