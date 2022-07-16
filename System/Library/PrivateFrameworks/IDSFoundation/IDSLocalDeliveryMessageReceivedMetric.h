//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSString;

@interface IDSLocalDeliveryMessageReceivedMetric : NSObject <CUTCoreAnalyticsMetric>
{
    _Bool _isFromDefaultPairedDevice;	// 8 = 0x8
    NSString *_service;	// 16 = 0x10
    unsigned long long _messageSize;	// 24 = 0x18
    unsigned long long _linkType;	// 32 = 0x20
    unsigned long long _priority;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000f74bb
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned long long linkType; // @synthesize linkType=_linkType;
@property(readonly, nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(readonly, nonatomic) _Bool isFromDefaultPairedDevice; // @synthesize isFromDefaultPairedDevice=_isFromDefaultPairedDevice;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
- (id)initWithService:(id)arg1 isFromDefaultPairedDevice:(_Bool)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 priority:(unsigned long long)arg5;	// IMP=0x00000000000f73f0
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
