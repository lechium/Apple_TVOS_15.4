//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/NSCopying-Protocol.h>
#import <AppStoreComponents/NSSecureCoding-Protocol.h>

@class NSString;

@interface ASCCollectionRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_id;	// 8 = 0x8
    NSString *_kind;	// 16 = 0x10
    NSString *_context;	// 24 = 0x18
    long long _limit;	// 32 = 0x20
    NSString *_clientID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001ea60
- (void).cxx_destruct;	// IMP=0x000000000001f499
@property(readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) long long limit; // @synthesize limit=_limit;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;
- (id)collectionRequestWithClientID:(id)arg1;	// IMP=0x000000000001f37b
- (id)description;	// IMP=0x000000000001f211
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001eed8
- (unsigned long long)hash;	// IMP=0x000000000001edad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001eda2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ec66
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001ea68
- (id)initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 limit:(long long)arg4;	// IMP=0x000000000001e961
- (id)_initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 limit:(long long)arg4 clientID:(id)arg5;	// IMP=0x0000000000041483

@end

