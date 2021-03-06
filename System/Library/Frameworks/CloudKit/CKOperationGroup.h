//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKOperationConfiguration, CKOperationGroupSystemImposedInfo, NSNumber, NSString;

@interface CKOperationGroup : NSObject <NSSecureCoding>
{
    CKOperationGroupSystemImposedInfo *_systemImposedInfo_locked;	// 8 = 0x8
    long long _expectedSendSize;	// 16 = 0x10
    long long _expectedReceiveSize;	// 24 = 0x18
    CKOperationConfiguration *_defaultConfiguration;	// 32 = 0x20
    NSString *_operationGroupID;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    NSNumber *_quantityNumber;	// 56 = 0x38
    NSString *_authPromptReason;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ff764
- (void).cxx_destruct;	// IMP=0x00000000000ffb96
@property(copy) NSString *authPromptReason; // @synthesize authPromptReason=_authPromptReason;
@property(copy, nonatomic) NSNumber *quantityNumber; // @synthesize quantityNumber=_quantityNumber;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *operationGroupID; // @synthesize operationGroupID=_operationGroupID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ff942
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ff76c
- (id)description;	// IMP=0x00000000000ff752
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00000000000ff10b
- (unsigned long long)resolvedNetworkServiceTypeForConfig:(id)arg1;	// IMP=0x00000000000ff048
@property(readonly, nonatomic) long long approximateReceiveBytes;
@property(readonly, nonatomic) long long approximateSendBytes;
@property(copy) CKOperationConfiguration *defaultConfiguration; // @synthesize defaultConfiguration=_defaultConfiguration;
@property long long expectedReceiveSize; // @synthesize expectedReceiveSize=_expectedReceiveSize;
@property long long expectedSendSize; // @synthesize expectedSendSize=_expectedSendSize;
@property unsigned long long quantity;
@property(copy, nonatomic) CKOperationGroupSystemImposedInfo *systemImposedInfo;
- (id)init;	// IMP=0x00000000000febb2

@end

