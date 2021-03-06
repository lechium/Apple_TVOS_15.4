//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFDeviceContextHistoryConfiguration, NSArray, NSDate, NSMutableDictionary, NSString;

@interface AFDeviceContextMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_backingStore;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSDate *_deliveryDate;	// 24 = 0x18
    NSDate *_expirationDate;	// 32 = 0x20
    NSArray *_redactedKeyPaths;	// 40 = 0x28
    AFDeviceContextHistoryConfiguration *_historyConfiguration;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000aa334
- (void).cxx_destruct;	// IMP=0x00000000000aa518
@property(readonly, nonatomic) AFDeviceContextHistoryConfiguration *historyConfiguration; // @synthesize historyConfiguration=_historyConfiguration;
@property(readonly, nonatomic) NSArray *redactedKeyPaths; // @synthesize redactedKeyPaths=_redactedKeyPaths;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSDate *deliveryDate; // @synthesize deliveryDate=_deliveryDate;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000aa46d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000aa33c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aa329
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000aa26b
- (unsigned long long)hash;	// IMP=0x00000000000aa227
- (id)description;	// IMP=0x00000000000aa127
- (_Bool)isExpiredByDate:(id)arg1;	// IMP=0x00000000000aa0a8
- (id)backingStore;	// IMP=0x00000000000a9f40
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000000a9dd1
- (id)initWithType:(id)arg1 deliveryDate:(id)arg2 expirationDate:(id)arg3 redactedKeyPaths:(id)arg4 historyConfiguration:(id)arg5;	// IMP=0x00000000000a9c9e

@end

