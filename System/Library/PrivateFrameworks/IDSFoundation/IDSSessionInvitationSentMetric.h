//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface IDSSessionInvitationSentMetric : NSObject <CUTCoreAnalyticsMetric>
{
    NSString *_guid;	// 8 = 0x8
    NSNumber *_numberOfRecipients;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000017127
@property(readonly, nonatomic) NSNumber *numberOfRecipients; // @synthesize numberOfRecipients=_numberOfRecipients;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (id)initWithGuid:(id)arg1 numberOfRecipients:(id)arg2;	// IMP=0x000000000001707a
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
