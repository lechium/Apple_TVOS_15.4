//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKObjectID;

@interface EKEventOccurrenceInfo : NSObject
{
    EKObjectID *_objectID;	// 8 = 0x8
    double _date;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004586d
@property(nonatomic) double date; // @synthesize date=_date;
@property(retain, nonatomic) EKObjectID *objectID; // @synthesize objectID=_objectID;
- (id)description;	// IMP=0x000000000004579c
- (id)initWithObjectID:(id)arg1 date:(double)arg2;	// IMP=0x0000000000045722

@end

