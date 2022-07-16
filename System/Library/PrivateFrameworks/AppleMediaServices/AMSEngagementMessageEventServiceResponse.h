//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSDialogRequest, AMSEngagementMessageRequest, AMSEngagementRequest, NSDictionary, NSString;

@interface AMSEngagementMessageEventServiceResponse : NSObject
{
    AMSEngagementRequest *_engagementRequest;	// 8 = 0x8
    AMSEngagementMessageRequest *_fullScreenMessageRequest;	// 16 = 0x10
    NSDictionary *_placements;	// 24 = 0x18
    NSString *_serviceType;	// 32 = 0x20
    NSDictionary *_placementRequests;	// 40 = 0x28
    AMSDialogRequest *_dialogRequest;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000011a88f
@property(retain, nonatomic) AMSDialogRequest *dialogRequest; // @synthesize dialogRequest=_dialogRequest;
@property(retain, nonatomic) NSDictionary *placementRequests; // @synthesize placementRequests=_placementRequests;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) NSDictionary *placements; // @synthesize placements=_placements;
@property(retain, nonatomic) AMSEngagementMessageRequest *fullScreenMessageRequest; // @synthesize fullScreenMessageRequest=_fullScreenMessageRequest;
@property(retain, nonatomic) AMSEngagementRequest *engagementRequest; // @synthesize engagementRequest=_engagementRequest;
- (id)_placementRequestsWithDictionary:(id)arg1;	// IMP=0x000000000011a576
- (id)_placementWithDictionary:(id)arg1;	// IMP=0x000000000011a2db
- (id)initWithJSObject:(id)arg1;	// IMP=0x0000000000119f9e

@end
