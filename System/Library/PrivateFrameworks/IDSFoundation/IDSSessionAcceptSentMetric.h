//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSString;

@interface IDSSessionAcceptSentMetric : NSObject <CUTCoreAnalyticsMetric>
{
    NSString *_guid;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000012fe1d
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (id)initWithGuid:(id)arg1;	// IMP=0x000000000012fda8
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

