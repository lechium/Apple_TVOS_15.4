//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSDate;

@interface PKSpendingSummaryFetcherRequest : NSObject <NSCopying>
{
    _Bool _withLastChange;	// 8 = 0x8
    NSDate *_startDate;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000020b03c
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool withLastChange; // @synthesize withLastChange=_withLastChange;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020af6f
- (unsigned long long)hash;	// IMP=0x000000000020af05
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020ae92

@end

