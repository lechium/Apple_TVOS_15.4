//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSDictionary;

@interface IDSProfileGetHandlesMessage : FTIDSMessage
{
    NSArray *_responseHandles;	// 232 = 0xe8
    NSDictionary *_selfHandle;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00200000006911e0
@property(copy) NSDictionary *selfHandle; // @synthesize selfHandle=_selfHandle;
- (void);	// IMP=0x0010000000691130
@property(copy) NSArray *responseHandles; // @synthesize responseHandles=_responseHandles;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0010000000690fd0
- (double)anisetteHeadersTimeout;	// IMP=0x0010000000690fb0
- (id)messageBody;	// IMP=0x0010000000690f50
- (id)requiredKeys;	// IMP=0x0010000000690ef0
- (id)bagKey;	// IMP=0x0010000000690ed0
- (int)maxTimeoutRetries;	// IMP=0x0010000000690eb0
- (_Bool)wantsExtraTimeoutRetry;	// IMP=0x0010000000690e90
- (id)additionalMessageHeaders;	// IMP=0x0010000000690d50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000690c90
- (id)init;	// IMP=0x0010000000690bf0

@end

