//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSMutableArray, NSString;

@interface OSActivityEventMessage
{
    NSData *_bufferPrivateData;	// 8 = 0x8
    NSData *_bufferData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001527e
@property(readonly, copy) NSString *format;
@property(readonly, nonatomic) NSMutableArray *arguments;
- (void)fillEventData:(const char *)arg1 length:(unsigned long long)arg2 privateBuffer:(const char *)arg3 length:(unsigned long long)arg4;	// IMP=0x00000000000150f2

@end

