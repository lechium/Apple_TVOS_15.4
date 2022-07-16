//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MXMMutableSampleData, NSThread;

@interface MXMSystemProbe
{
    MXMMutableSampleData *_data;	// 32 = 0x20
    NSThread *_updateThread;	// 40 = 0x28
}

+ (id)probe;	// IMP=0x00000000000148f4
- (void).cxx_destruct;	// IMP=0x0000000000015868
- (void)_pollSystemBatteryWithData:(id)arg1;	// IMP=0x0000000000015862
- (void)_pollSystemThermalsWithData:(id)arg1;	// IMP=0x000000000001585c
- (void)_pollSystemLoadInformationWithData:(id)arg1;	// IMP=0x00000000000157b9
- (void)_pollProcessorLoadInformationWithData:(id)arg1;	// IMP=0x000000000001565b
- (void)_pollSystemHostProcessorInfoWithData:(id)arg1;	// IMP=0x00000000000151d6
- (void)_pollSystemMainBody;	// IMP=0x0000000000015159
- (void)_gatherConstantSystemProperties;	// IMP=0x00000000000150fc
- (void)_pollSystemLoop;	// IMP=0x0000000000015021
- (void)_stopUpdates;	// IMP=0x0000000000014fc2
- (void)_beginUpdates;	// IMP=0x0000000000014f2e
- (void)_prepareData;	// IMP=0x0000000000014c20
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 hostInfo:(struct vm_statistics64 *)arg3;	// IMP=0x0000000000014c1a
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 loadInfo:(struct processor_set_load_info *)arg3;	// IMP=0x0000000000014b41
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 cpuInfo:(struct processor_basic_info *)arg3;	// IMP=0x0000000000014b3b
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 cpuLoad:(struct processor_cpu_load_info *)arg3;	// IMP=0x00000000000149df
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 processorCount:(unsigned int)arg3;	// IMP=0x000000000001495b
- (id)init;	// IMP=0x0000000000014906

@end

