//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (PXLocalization)
+ (id)px_integersFrom:(long long)arg1 to:(long long)arg2;	// IMP=0x00000000007853c2
+ (id)px_numbersFrom:(double)arg1 to:(double)arg2 increment:(double)arg3;	// IMP=0x00000000007852ff
- (id)px_localizedComposedStringThatFitsWidth:(double)arg1 withMeasuringBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f7cdb
- (id)px_localizedComposedStringWithCount:(unsigned long long)arg1;	// IMP=0x00000000001f799d
- (id)px_objectAfterObject:(id)arg1;	// IMP=0x0000000000785293
- (void)px_enumerateObjectsFromIndex:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000007851d1
- (id)px_subarrayAfterIndex:(unsigned long long)arg1;	// IMP=0x0000000000785161
@end

