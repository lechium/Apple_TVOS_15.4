//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLRecordChange, CPLRecordStatus, NSDate;

@interface _CPLTransientStatus : NSObject
{
    NSDate *_date;	// 8 = 0x8
    CPLRecordChange *_record;	// 16 = 0x10
    unsigned long long _generation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001229dc
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(readonly, nonatomic) CPLRecordChange *record; // @synthesize record=_record;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) CPLRecordStatus *status;
- (id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2 date:(id)arg3;	// IMP=0x00000000001228de

@end

