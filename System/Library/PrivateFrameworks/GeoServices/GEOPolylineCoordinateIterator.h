//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEOPolylineCoordinateIterator : NSObject
{
    CDStruct_3f2a7a20 _previous;	// 8 = 0x8
    CDStruct_3f2a7a20 _current;	// 16 = 0x10
    CDStruct_3f2a7a20 _end;	// 24 = 0x18
}

+ (id)iteratorWithRange:(struct GEOPolylineCoordinateRange)arg1;	// IMP=0x00000000010d0ac2
@property(readonly, nonatomic) CDStruct_3f2a7a20 current; // @synthesize current=_current;
@property(readonly, nonatomic) CDStruct_3f2a7a20 previous; // @synthesize previous=_previous;
- (void)advance;	// IMP=0x00000000010d0b11
@property(readonly, nonatomic) _Bool isCurrentValid;
- (id)initWithRange:(struct GEOPolylineCoordinateRange)arg1;	// IMP=0x00000000010d09a6

@end

