//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface PKPaymentSetupProductConfiguration : NSObject <NSCopying>
{
    NSString *_partnerIdentifier;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSString *_dirtyStateIdentifier;	// 24 = 0x18
    NSDate *_lastUpdated;	// 32 = 0x20
    unsigned long long _state;	// 40 = 0x28
    NSString *_notificationTitle;	// 48 = 0x30
    NSString *_notificationMessage;	// 56 = 0x38
    NSString *_productIdentifier;	// 64 = 0x40
    unsigned long long _featureIdentifier;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000040c7aa
@property(nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSString *notificationMessage; // @synthesize notificationMessage=_notificationMessage;
@property(copy, nonatomic) NSString *notificationTitle; // @synthesize notificationTitle=_notificationTitle;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(copy, nonatomic) NSString *dirtyStateIdentifier; // @synthesize dirtyStateIdentifier=_dirtyStateIdentifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *partnerIdentifier; // @synthesize partnerIdentifier=_partnerIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000040c514
- (id)initWithProductDictionary:(id)arg1;	// IMP=0x000000000040c347

@end
