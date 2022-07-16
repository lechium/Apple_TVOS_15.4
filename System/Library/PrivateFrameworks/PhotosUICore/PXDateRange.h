//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface PXDateRange : NSObject <NSCopying>
{
    double _startDate;	// 8 = 0x8
    double _endDate;	// 16 = 0x10
}

@property(readonly) double endDate; // @synthesize endDate=_endDate;
@property(readonly) double startDate; // @synthesize startDate=_startDate;
- (id)description;	// IMP=0x000000000011113e
- (unsigned long long)hash;	// IMP=0x00000000001110dd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000111007
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000110ffc
- (_Bool)isStrictlyBeforeRange:(id)arg1;	// IMP=0x0000000000110f82
- (_Bool)intersectsRange:(id)arg1;	// IMP=0x0000000000110f04
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2;	// IMP=0x0000000000110e32

@end
