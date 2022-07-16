//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSString;

@interface IDSWiFiSetupAttemptMetric : NSObject <CUTCoreAnalyticsMetric>
{
    unsigned long long _attemptType;	// 8 = 0x8
    unsigned long long _msDuration;	// 16 = 0x10
    unsigned long long _result;	// 24 = 0x18
    NSString *_client;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000083d03
@property(readonly, nonatomic) NSString *client; // @synthesize client=_client;
@property(readonly, nonatomic) unsigned long long result; // @synthesize result=_result;
@property(readonly, nonatomic) unsigned long long msDuration; // @synthesize msDuration=_msDuration;
@property(readonly, nonatomic) unsigned long long attemptType; // @synthesize attemptType=_attemptType;
- (id)initWithAttemptType:(unsigned long long)arg1 msDuration:(unsigned long long)arg2 result:(unsigned long long)arg3 client:(id)arg4;	// IMP=0x0000000000083c49
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

