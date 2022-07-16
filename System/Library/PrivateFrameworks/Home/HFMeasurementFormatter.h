//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMeasurementFormatter.h>

#import <Home/HFUnitFormatter-Protocol.h>

@class NSString;

@interface HFMeasurementFormatter : NSMeasurementFormatter <HFUnitFormatter>
{
    CDUnknownBlockType _measurementBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005701c
@property(copy, nonatomic) CDUnknownBlockType measurementBlock; // @synthesize measurementBlock=_measurementBlock;
- (id)stringForObjectValue:(id)arg1 withUnit:(_Bool)arg2;	// IMP=0x0000000000056e5c
@property(readonly, nonatomic) NSString *unitDescription;
- (id)stringForObjectValue:(id)arg1;	// IMP=0x0000000000056d6a
- (id)init;	// IMP=0x0000000000056ce3
- (id)initWithMeasurementBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000056be8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
