//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSError, NSNumber;

@interface ASDPurchaseResult : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _success;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSNumber *_itemID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000384c1
+ (id)successfullyPurchasedItemID:(id)arg1;	// IMP=0x00000000000383fc
+ (id)failedToPurchaseItemID:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000038370
- (void).cxx_destruct;	// IMP=0x0000000000038622
@property(retain) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000038568
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000384c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003846a
- (id)initWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000000382fa

@end

