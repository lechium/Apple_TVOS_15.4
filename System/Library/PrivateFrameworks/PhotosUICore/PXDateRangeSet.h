//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/NSMutableCopying-Protocol.h>

@class NSMutableArray;

@interface PXDateRangeSet : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableArray *__dateRanges;	// 8 = 0x8
}

+ (id)dateRangeSet;	// IMP=0x0000000000111ab2
+ (id)dateRangeSetWithDateRange:(id)arg1;	// IMP=0x0000000000111a61
- (void).cxx_destruct;	// IMP=0x0000000000111594
@property(retain, nonatomic) NSMutableArray *_dateRanges; // @synthesize _dateRanges=__dateRanges;
- (id)description;	// IMP=0x00000000001114ca
- (id)dateRanges;	// IMP=0x0000000000111482
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001113fb
@property(readonly, nonatomic) long long count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011133c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000111331
- (id)initWithDateRange:(id)arg1;	// IMP=0x00000000001112ab
- (id)init;	// IMP=0x0000000000111255

@end

