//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKEventOperationGroupInfo : NSObject <NSSecureCoding>
{
    NSString *_operationGroupID;	// 8 = 0x8
    NSString *_operationGroupName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000017ac53
- (void).cxx_destruct;	// IMP=0x000000000017add9
@property(readonly, nonatomic) NSString *operationGroupName; // @synthesize operationGroupName=_operationGroupName;
@property(readonly, nonatomic) NSString *operationGroupID; // @synthesize operationGroupID=_operationGroupID;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017acd5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017ac5b

@end

