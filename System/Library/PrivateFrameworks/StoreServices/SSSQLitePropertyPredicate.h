//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/NSCopying-Protocol.h>

@class NSString;

@interface SSSQLitePropertyPredicate <NSCopying>
{
    NSString *_property;	// 8 = 0x8
}

@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x000000000010f481
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010f3e4
- (unsigned long long)hash;	// IMP=0x000000000010f381
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010f376
- (void)dealloc;	// IMP=0x000000000010f334

@end

