//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (MSVAdditions)
@property(readonly, copy, nonatomic) NSString *msv_compactDescription;
- (id)msv_reduceIntoObject:(id)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x000000000003459e
- (unsigned long long)msv_reduceIntoUInt64:(unsigned long long)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x00000000000344e1
- (unsigned int)msv_reduceIntoUInt32:(unsigned int)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034424
- (unsigned long long)msv_reduceIntoUInt:(unsigned long long)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034367
- (long long)msv_reduceIntoInt64:(long long)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x00000000000342aa
- (int)msv_reduceIntoInt32:(int)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x00000000000341ed
- (long long)msv_reduceIntoInt:(long long)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034130
- (double)msv_reduceIntoDouble:(double)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034065
- (double)msv_reduceIntoCGFloat:(double)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033f9a
- (float)msv_reduceIntoFloat:(float)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033ecf
- (_Bool)msv_reduceIntoBool:(_Bool)arg1 enumeratedBy:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033e0e
- (id)msv_reduceIntoObject:(id)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033c66
- (unsigned long long)msv_reduceIntoUInt64:(unsigned long long)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033b1e
- (unsigned int)msv_reduceIntoUInt32:(unsigned int)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x00000000000339da
- (unsigned long long)msv_reduceIntoUInt:(unsigned long long)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033892
- (long long)msv_reduceIntoInt64:(long long)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x000000000003374a
- (int)msv_reduceIntoInt32:(int)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033606
- (long long)msv_reduceIntoInt:(long long)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x00000000000334be
- (double)msv_reduceIntoDouble:(double)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033363
- (double)msv_reduceIntoCGFloat:(double)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033208
- (float)msv_reduceIntoFloat:(float)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x00000000000330ad
- (_Bool)msv_reduceIntoBool:(_Bool)arg1 by:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032f65
- (id)msv_firstWhere:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032e16
- (id)msv_filter:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032d17
- (id)msv_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032b0b
- (id)msv_enumeratedCompactMap:(CDUnknownBlockType)arg1;	// IMP=0x00000000000329a9
- (id)msv_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032961
- (id)msv_enumeratedMap:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032842
- (id)msv_map:(CDUnknownBlockType)arg1;	// IMP=0x00000000000327fa
@end
