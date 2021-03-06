//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface AKFollowUpTearDownContext : NSObject <NSSecureCoding>
{
    _Bool _isContinuityPush;	// 8 = 0x8
    NSString *_itemIdentifier;	// 16 = 0x10
    NSString *_akAction;	// 24 = 0x18
    NSString *_altDSID;	// 32 = 0x20
    NSString *_txnid;	// 40 = 0x28
    NSString *_idmsData;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001b7e0
- (void).cxx_destruct;	// IMP=0x000000000001b8ce
@property(nonatomic) _Bool isContinuityPush; // @synthesize isContinuityPush=_isContinuityPush;
@property(copy, nonatomic) NSString *idmsData; // @synthesize idmsData=_idmsData;
@property(copy, nonatomic) NSString *txnid; // @synthesize txnid=_txnid;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *akAction; // @synthesize akAction=_akAction;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (id)description;	// IMP=0x000000000001b7e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b71e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b593

@end

