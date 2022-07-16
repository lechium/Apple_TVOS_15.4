//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class HKElectrocardiogram, HKUnit;

__attribute__((visibility("hidden")))
@interface _HKElectrocardiogramVoltageMeasurementEnumerator : NSEnumerator
{
    HKElectrocardiogram *_electrocardiogram;	// 8 = 0x8
    double _samplingHertz;	// 16 = 0x10
    HKUnit *_microvoltsUnit;	// 24 = 0x18
    long long _index;	// 32 = 0x20
    __wrap_iter_9551a0eb _current;	// 40 = 0x28
    __wrap_iter_9551a0eb _end;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x000000000021a7dc
- (void).cxx_destruct;	// IMP=0x000000000021a7ab
- (id)nextObject;	// IMP=0x000000000021a68c
- (id)initWithElectrocardiogram:(id)arg1 leadIMicroVoltsBegin:(__wrap_iter_9551a0eb)arg2 end:(__wrap_iter_9551a0eb)arg3;	// IMP=0x000000000021a505

@end

