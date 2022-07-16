//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface CLSCalendarEventsCacheMonth : NSObject
{
    long long _month;	// 8 = 0x8
    NSMutableSet *_days;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008bced
@property(readonly, nonatomic) NSMutableSet *days; // @synthesize days=_days;
@property(nonatomic) long long month; // @synthesize month=_month;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008bc47
- (unsigned long long)hash;	// IMP=0x000000000008bc3d
- (id)debugDescription;	// IMP=0x000000000008bb8f
- (id)initWithMonth:(long long)arg1;	// IMP=0x000000000008bb1e

@end

