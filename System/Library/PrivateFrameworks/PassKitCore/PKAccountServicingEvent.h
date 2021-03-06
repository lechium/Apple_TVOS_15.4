//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKRecordObject-Protocol.h>

@class NSDate, NSString, PKCurrencyAmount;

@interface PKAccountServicingEvent : NSObject <NSSecureCoding, PKRecordObject>
{
    NSString *_identifier;	// 8 = 0x8
    unsigned long long _status;	// 16 = 0x10
    unsigned long long _activityType;	// 24 = 0x18
    NSString *_activityIdentifier;	// 32 = 0x20
    NSDate *_openDate;	// 40 = 0x28
    NSDate *_lastUpdatedDate;	// 48 = 0x30
    PKCurrencyAmount *_amount;	// 56 = 0x38
    NSString *_reasonCode;	// 64 = 0x40
}

+ (id)recordNamePrefix;	// IMP=0x00000000003f4fb4
+ (id)recordType;	// IMP=0x00000000003f4fa0
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003f48c4
- (void).cxx_destruct;	// IMP=0x00000000003f5482
@property(copy, nonatomic) NSString *reasonCode; // @synthesize reasonCode=_reasonCode;
@property(copy, nonatomic) PKCurrencyAmount *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(copy, nonatomic) NSDate *openDate; // @synthesize openDate=_openDate;
@property(copy, nonatomic) NSString *activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
@property(nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f4fc1
- (void)encodeWithRecord:(id)arg1;	// IMP=0x00000000003f4d9b
- (id)initWithRecord:(id)arg1;	// IMP=0x00000000003f4b8e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003f4aa2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003f48cc
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003f4500

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

