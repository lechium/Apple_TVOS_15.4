//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMF/NSCopying-Protocol.h>
#import <FMF/NSSecureCoding-Protocol.h>

@class FMFHandle, NSDate, NSSet, NSString;

@interface FMFFriendshipRequest : NSObject <NSCopying, NSSecureCoding>
{
    long long _requestType;	// 8 = 0x8
    FMFHandle *_fromHandle;	// 16 = 0x10
    NSSet *_toHandles;	// 24 = 0x18
    NSDate *_endDate;	// 32 = 0x20
    NSString *_groupId;	// 40 = 0x28
    NSString *_requestId;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000027be7
+ (id)friendshipRequestToHandles:(id)arg1 fromHandle:(id)arg2 withType:(long long)arg3 groupId:(id)arg4 withEndDate:(id)arg5;	// IMP=0x00000000000279a7
- (void).cxx_destruct;	// IMP=0x000000000002814f
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSSet *toHandles; // @synthesize toHandles=_toHandles;
@property(retain, nonatomic) FMFHandle *fromHandle; // @synthesize fromHandle=_fromHandle;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
- (id)description;	// IMP=0x0000000000027f7b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000027d5f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000027bef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000027aa3
- (id)initWithFromHandle:(id)arg1 toHandle:(id)arg2 ofType:(long long)arg3 groupId:(id)arg4 endDate:(id)arg5 requestId:(id)arg6;	// IMP=0x0000000000027858

@end

