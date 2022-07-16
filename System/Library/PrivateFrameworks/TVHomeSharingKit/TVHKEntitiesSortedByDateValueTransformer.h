//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface TVHKEntitiesSortedByDateValueTransformer : NSValueTransformer
{
    unsigned long long _maxEntities;	// 8 = 0x8
    NSDate *_earliestDate;	// 16 = 0x10
    CDUnknownBlockType _dateForEntityBlock;	// 24 = 0x18
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x00000000000275c9
+ (Class)transformedValueClass;	// IMP=0x00000000000275b8
+ (id)new;	// IMP=0x00000000000274a0
- (void).cxx_destruct;	// IMP=0x000000000002799a
@property(copy, nonatomic) CDUnknownBlockType dateForEntityBlock; // @synthesize dateForEntityBlock=_dateForEntityBlock;
@property(copy, nonatomic) NSDate *earliestDate; // @synthesize earliestDate=_earliestDate;
@property(nonatomic) unsigned long long maxEntities; // @synthesize maxEntities=_maxEntities;
- (id)transformedValue:(id)arg1;	// IMP=0x00000000000275d1
- (id)initWithDateForEntityBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002753e
- (id)init;	// IMP=0x00000000000274cf

@end

