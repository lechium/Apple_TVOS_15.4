//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/NSCopying-Protocol.h>
#import <Trial/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface TRINamespaceStatus : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _lastFetchWasSuccess;	// 8 = 0x8
    unsigned int _compatibilityVersion;	// 12 = 0xc
    NSString *_namespaceName;	// 16 = 0x10
    NSDate *_lastFetchAttempt;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003e851
+ (id)statusWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned int)arg2 lastFetchAttempt:(id)arg3 lastFetchWasSuccess:(_Bool)arg4;	// IMP=0x000000000003e449
+ (id)statusFromData:(id)arg1;	// IMP=0x0000000000006d9d
- (void).cxx_destruct;	// IMP=0x000000000003ef80
@property(readonly, nonatomic) _Bool lastFetchWasSuccess; // @synthesize lastFetchWasSuccess=_lastFetchWasSuccess;
@property(readonly, nonatomic) NSDate *lastFetchAttempt; // @synthesize lastFetchAttempt=_lastFetchAttempt;
@property(readonly, nonatomic) unsigned int compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(readonly, nonatomic) NSString *namespaceName; // @synthesize namespaceName=_namespaceName;
- (id)init;	// IMP=0x000000000003ef54
- (id)description;	// IMP=0x000000000003ee8f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003edef
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003e859
- (unsigned long long)hash;	// IMP=0x000000000003e7e2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003e77a
- (_Bool)isEqualToStatus:(id)arg1;	// IMP=0x000000000003e603
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003e5f8
- (id)copyWithReplacementLastFetchWasSuccess:(_Bool)arg1;	// IMP=0x000000000003e5bc
- (id)copyWithReplacementLastFetchAttempt:(id)arg1;	// IMP=0x000000000003e563
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)arg1;	// IMP=0x000000000003e525
- (id)copyWithReplacementNamespaceName:(id)arg1;	// IMP=0x000000000003e4cc
- (id)initWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned int)arg2 lastFetchAttempt:(id)arg3 lastFetchWasSuccess:(_Bool)arg4;	// IMP=0x000000000003e328
- (id)asData;	// IMP=0x0000000000006fd0

@end

